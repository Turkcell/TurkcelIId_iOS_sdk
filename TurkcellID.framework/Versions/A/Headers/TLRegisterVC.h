

#import "TLBaseScrollVC.h"


@interface TLRegisterVC : TLBaseScrollVC

@property(nonatomic,assign) BOOL expired;
@property (weak, nonatomic) IBOutlet UITextField *passwordLabel;
@property (weak, nonatomic) IBOutlet UITextField *confirmPasswordLabel;
@property (weak, nonatomic) IBOutlet UITextField *emailLabel;
@property (weak, nonatomic) IBOutlet UIButton *changeButton;
@property (weak, nonatomic) IBOutlet UIView *headerView;
@property (weak, nonatomic) IBOutlet UITextField *msisdnLabel;

@property(nonatomic,assign) BOOL backToRootVC;

@property (nonatomic,strong) NSString * defaultMsisdn;
@property (nonatomic,strong) NSString * defaultEncryptedMsisdn;

@end
