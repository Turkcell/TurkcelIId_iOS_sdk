

#import "TLBaseScrollVC.h"
#import "BetaNaoTextField.h"
#import "MsisdnBetaNaoText.h"

@interface TLRegisterVC :TLBaseScrollVC

@property(nonatomic,assign) BOOL expired;
@property (weak, nonatomic) IBOutlet MsisdnBetaNaoText * msisdnLabel;
@property (weak, nonatomic) IBOutlet BetaNaoTextField *emailLabel;
@property (weak, nonatomic) IBOutlet BetaNaoTextField *passwordLabel;
@property (weak, nonatomic) IBOutlet BetaNaoTextField *confirmPasswordLabel;
@property (weak, nonatomic) IBOutlet UIButton *changeButton;
@property (weak, nonatomic) IBOutlet UIButton *countryCodeButton;

@property(nonatomic,assign) BOOL backToRootVC;

@property (nonatomic,strong) NSString * defaultMsisdn;
@property (nonatomic,strong) NSString * defaultEncryptedMsisdn;

@property (nonatomic, strong) NSMutableArray * countryCodeList;
@property (nonatomic, strong) NSString* defaultRegionCode;
@property(nonatomic,assign) BOOL isRegionShow;

- (id)initWithRegionList:(NSMutableArray*)countryList defaultCode:(NSString*)defaultCode showRegion:(BOOL)isShowRegion;

@end
