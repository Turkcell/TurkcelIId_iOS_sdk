//
//  MainViewController.m
//  TurkcellSDK
//
//  Created by Sonat Karakas on 4/18/13.
//
//

#import "MainViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

@synthesize fullScreen, label, useTest, hasSmsSupport;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
}

- (IBAction)login{
    
    BOOL flagFullScreen = [fullScreen isOn];
    BOOL flagUseTest = [useTest isOn];
    BOOL flagHasSmsSupport = [hasSmsSupport isOn];
    
    TurkcellIDMainView *loginView = [[TurkcellIDMainView alloc] initWithAppId:@"123"
                                                                       sender:SENDER_TYPE_LOGIN
                                                            operationDelegate:self
                                                  messageParentViewController:self
                                                              messageDelegate:self
                                                                   fullScreen:flagFullScreen
                                                                useTestServer:flagUseTest
                                                                 smsSupported:flagHasSmsSupport];
    
    [loginView show];
    
}

- (IBAction)logout{
    
    [TurkcellIDMainView logout];
    
}

- (IBAction)changePassword{
    
    BOOL flagFullScreen = [fullScreen isOn];
    BOOL flagUseTest = [useTest isOn];
    BOOL flagHasSmsSupport = [hasSmsSupport isOn];
    
    TurkcellIDMainView *loginView = [[TurkcellIDMainView alloc] initWithAppId:@"123"
                                                                       sender:SENDER_TYPE_CHANGE_PASSWORD
                                                            operationDelegate:self
                                                  messageParentViewController:self
                                                              messageDelegate:self
                                                                   fullScreen:flagFullScreen
                                                                useTestServer:flagUseTest
                                                                 smsSupported:flagHasSmsSupport];
    
    [loginView show];
}

-(void) loginWithSuccess:(NSString *)authToken{
    [label setText:authToken];
}

-(void) loginWithError{
    [label setText:@"Error"];    
}

-(void) closeWindow{
    [label setText:@"Screen closed."];
}

//---------------------------------------------------------------------------------------------------------------------------------------------
//                                      MFMessageComposeViewControllerDelegate
//---------------------------------------------------------------------------------------------------------------------------------------------
- (void)messageComposeViewController:(MFMessageComposeViewController *)controller didFinishWithResult:(MessageComposeResult)result{
    
    [controller dismissModalViewControllerAnimated:YES];
    
}

@end
