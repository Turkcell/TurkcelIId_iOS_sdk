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
@property(nonatomic, retain) IBOutlet UILabel *label;

- (IBAction)login;
- (IBAction)logout;
- (IBAction)changePassword;

@end
