//
//  MainViewController.h
//  TurkcellSDK
//
//  Created by Sonat Karakas on 4/18/13.
//
//

#import <UIKit/UIKit.h>
#import <TurkcellID/TurkcellID.h>
#import <MessageUI/MessageUI.h>

@interface MainViewController : UIViewController <TurkcellIDCallbackDelegate,MFMessageComposeViewControllerDelegate>

@property(nonatomic, retain) IBOutlet UISwitch *fullScreen;
@property(nonatomic, retain) IBOutlet UISwitch *useTest;
@property(nonatomic, retain) IBOutlet UISwitch *hasSmsSupport;
@property(nonatomic, retain) IBOutlet UILabel *label;

- (IBAction)login;
- (IBAction)logout;
- (IBAction)changePassword;

@end
