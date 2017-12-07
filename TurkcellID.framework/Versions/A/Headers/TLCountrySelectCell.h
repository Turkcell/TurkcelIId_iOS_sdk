//
//  TLCountrySelectCell.h
//  TurkcellID
//
//  Created by murat hacioglu on 24/01/2017.
//  Copyright © 2017 Turkcell. All rights reserved.
//

#import "TLBaseVC.h"

@interface TLCountrySelectCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *countryLabel;
@property (weak, nonatomic) IBOutlet UILabel *codeLabel;
@property (weak, nonatomic) IBOutlet UIImageView *greenTickImgView;

@end
