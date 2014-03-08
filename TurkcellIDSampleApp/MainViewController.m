/*******************************************************************************
 *
 *  Copyright (C) 2014 Turkcell
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *******************************************************************************/
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

@synthesize fullScreen, label, useTest;

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
    
    TurkcellIDMainView *loginView = [[TurkcellIDMainView alloc] initWithAppId:@"123"
                                                                       sender:SENDER_TYPE_LOGIN
                                                            operationDelegate:self
                                                  messageParentViewController:self
                                                              messageDelegate:self
                                                                   fullScreen:flagFullScreen
                                                                useTestServer:flagUseTest];
    
    [loginView show];
    
}

- (IBAction)logout{
    
    [TurkcellIDMainView logout];
    
}

- (IBAction)changePassword{
    
    BOOL flagFullScreen = [fullScreen isOn];
    BOOL flagUseTest = [useTest isOn];
    
    TurkcellIDMainView *loginView = [[TurkcellIDMainView alloc] initWithAppId:@"123"
                                                                       sender:SENDER_TYPE_CHANGE_PASSWORD
                                                            operationDelegate:self
                                                  messageParentViewController:self
                                                              messageDelegate:self
                                                                   fullScreen:flagFullScreen
                                                                useTestServer:flagUseTest];
    
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
