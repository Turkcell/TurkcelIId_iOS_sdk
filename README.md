TurkcellID iOS SDK v2.0
=========================

## Step by step integration described inside HowTo.pdf

You can get technical support from osman.kara@turkcellteknoloji.com.tr

// !$*UTF8*$!
{
  archiveVersion = 1;
  classes = {
  };
  objectVersion = 46;
  objects = {

/* Begin PBXBuildFile section */
    04C1A2BF1928D98C00411E4E /* readme.txt in Resources */ = {isa = PBXBuildFile; fileRef = 04C1A2BE1928D98C00411E4E /* readme.txt */; };
    68018F9917EAD3DD00A9950A /* UpdateHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = 68018F9817EAD3DD00A9950A /* UpdateHelper.m */; };
    6803A5F617F98C4200EF94B0 /* SearchResultObject.m in Sources */ = {isa = PBXBuildFile; fileRef = 6803A5F517F98C4200EF94B0 /* SearchResultObject.m */; };
    6809803817F0170800984FF5 /* AFHTTPRequestOperation+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = 6809803517F0170800984FF5 /* AFHTTPRequestOperation+Extensions.m */; };
    6809803917F0170800984FF5 /* NSData+JSONUtilities.m in Sources */ = {isa = PBXBuildFile; fileRef = 6809803717F0170800984FF5 /* NSData+JSONUtilities.m */; };
    681123B11827C8D700EB716B /* CoreTelephony.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 681123B01827C8D700EB716B /* CoreTelephony.framework */; };
    6817852617E83A150038C04B /* MyCLController.m in Sources */ = {isa = PBXBuildFile; fileRef = 6817852517E83A150038C04B /* MyCLController.m */; };
    68297D101820398B00CC0DEC /* FilterVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68297D0F1820398B00CC0DEC /* FilterVC.m */; };
    6829F3E017F15F82002F3C48 /* GBAlertView.m in Sources */ = {isa = PBXBuildFile; fileRef = 6829F3DB17F15F82002F3C48 /* GBAlertView.m */; };
    6829F3E117F15F82002F3C48 /* GBCheckBox.m in Sources */ = {isa = PBXBuildFile; fileRef = 6829F3DD17F15F82002F3C48 /* GBCheckBox.m */; };
    682B31101843759000080490 /* SIAlertView.bundle in Resources */ = {isa = PBXBuildFile; fileRef = 682B310B1843759000080490 /* SIAlertView.bundle */; };
    682B31111843759000080490 /* SIAlertView.m in Sources */ = {isa = PBXBuildFile; fileRef = 682B310D1843759000080490 /* SIAlertView.m */; };
    682B31121843759000080490 /* UIWindow+SIUtils.m in Sources */ = {isa = PBXBuildFile; fileRef = 682B310F1843759000080490 /* UIWindow+SIUtils.m */; };
    682C208C17951F93004633EB /* MapKit.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 682C208B17951F93004633EB /* MapKit.framework */; };
    683210C518213BFE00D5A10A /* StoreLocatorFilterVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 683210C418213BFE00D5A10A /* StoreLocatorFilterVC.m */; };
    683210C81821438B00D5A10A /* RSSearchView.m in Sources */ = {isa = PBXBuildFile; fileRef = 683210C71821438B00D5A10A /* RSSearchView.m */; };
    6837BC6617F40A730035ED51 /* NextPrevView.m in Sources */ = {isa = PBXBuildFile; fileRef = 6837BC6517F40A730035ED51 /* NextPrevView.m */; };
    68383183183FDC8D00A7F63B /* DeviceDetailVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68383182183FDC8D00A7F63B /* DeviceDetailVC.m */; };
    683B70C517F1AA6D004180C9 /* MessageUI.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 683B70C417F1AA6D004180C9 /* MessageUI.framework */; };
    683E1F541794923100F5C42A /* UIView+GBAnimate.m in Sources */ = {isa = PBXBuildFile; fileRef = 683E1F531794923100F5C42A /* UIView+GBAnimate.m */; };
    6841FB6818450EE70064F061 /* APNRest.m in Sources */ = {isa = PBXBuildFile; fileRef = 6841FB6718450EE70064F061 /* APNRest.m */; };
    6841FB6A184515B60064F061 /* Security.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 6841FB69184515B60064F061 /* Security.framework */; };
    6845D1F5184B118F00A2A566 /* NSString+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = 6845D1F2184B118F00A2A566 /* NSString+Extensions.m */; };
    6845D1F6184B118F00A2A566 /* UIViewController+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = 6845D1F4184B118F00A2A566 /* UIViewController+Extensions.m */; };
    684C028717D9A9B700F432ED /* AbstractActionSheetPicker.m in Sources */ = {isa = PBXBuildFile; fileRef = 684C027917D9A9B700F432ED /* AbstractActionSheetPicker.m */; settings = {COMPILER_FLAGS = "-w"; }; };
    684C028817D9A9B700F432ED /* ActionSheetCustomPicker.m in Sources */ = {isa = PBXBuildFile; fileRef = 684C027B17D9A9B700F432ED /* ActionSheetCustomPicker.m */; };
    684C028917D9A9B700F432ED /* ActionSheetDatePicker.m in Sources */ = {isa = PBXBuildFile; fileRef = 684C027E17D9A9B700F432ED /* ActionSheetDatePicker.m */; };
    684C028A17D9A9B700F432ED /* ActionSheetDistancePicker.m in Sources */ = {isa = PBXBuildFile; fileRef = 684C028017D9A9B700F432ED /* ActionSheetDistancePicker.m */; settings = {COMPILER_FLAGS = "-w"; }; };
    684C028B17D9A9B700F432ED /* ActionSheetStringPicker.m in Sources */ = {isa = PBXBuildFile; fileRef = 684C028217D9A9B700F432ED /* ActionSheetStringPicker.m */; };
    684C028C17D9A9B700F432ED /* DistancePickerView.m in Sources */ = {isa = PBXBuildFile; fileRef = 684C028417D9A9B700F432ED /* DistancePickerView.m */; settings = {COMPILER_FLAGS = "-w"; }; };
    684C028D17D9A9B700F432ED /* ExpireDateActionSheetPicker.m in Sources */ = {isa = PBXBuildFile; fileRef = 684C028617D9A9B700F432ED /* ExpireDateActionSheetPicker.m */; settings = {COMPILER_FLAGS = "-w"; }; };
    684C029D17D9EDAF00F432ED /* BaseRest.m in Sources */ = {isa = PBXBuildFile; fileRef = 684C029C17D9EDAF00F432ED /* BaseRest.m */; };
    68542BDF17F01695004DEFD7 /* AllowancesVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542B6A17F01695004DEFD7 /* AllowancesVC.m */; };
    68542C0317F01695004DEFD7 /* SearchSupportPageView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542BBA17F01695004DEFD7 /* SearchSupportPageView.m */; };
    68542C0417F01695004DEFD7 /* SearchSupportPageVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542BBC17F01695004DEFD7 /* SearchSupportPageVC.m */; };
    68542C0B17F01695004DEFD7 /* StoreDetailsVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542BCD17F01695004DEFD7 /* StoreDetailsVC.m */; };
    68542C0C17F01695004DEFD7 /* StoreLocatorVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542BCF17F01695004DEFD7 /* StoreLocatorVC.m */; };
    68542C0D17F01695004DEFD7 /* PaymentSuccessVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542BD217F01695004DEFD7 /* PaymentSuccessVC.m */; };
    68542C0E17F01695004DEFD7 /* PaymentSuccessVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 68542BD317F01695004DEFD7 /* PaymentSuccessVC.xib */; };
    68542C0F17F01695004DEFD7 /* TopUpPaymentVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542BD517F01695004DEFD7 /* TopUpPaymentVC.m */; };
    68542C1017F01695004DEFD7 /* TopUpPaymentVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 68542BD617F01695004DEFD7 /* TopUpPaymentVC.xib */; };
    68542C1117F01695004DEFD7 /* TopUpVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542BD817F01695004DEFD7 /* TopUpVC.m */; };
    68542C1217F01695004DEFD7 /* TopUpVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 68542BD917F01695004DEFD7 /* TopUpVC.xib */; };
    68542C9A17F016AA004DEFD7 /* AccountView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C1817F016AA004DEFD7 /* AccountView.m */; };
    68542C9C17F016AA004DEFD7 /* AllowanceChartElementView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C1E17F016AA004DEFD7 /* AllowanceChartElementView.m */; };
    68542C9D17F016AA004DEFD7 /* AllowancesScrollView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C2017F016AA004DEFD7 /* AllowancesScrollView.m */; };
    68542CA217F016AA004DEFD7 /* TopUpTextField.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C2B17F016AA004DEFD7 /* TopUpTextField.m */; };
    68542CA517F016AA004DEFD7 /* OneBillChartView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C3317F016AA004DEFD7 /* OneBillChartView.m */; };
    68542CA617F016AA004DEFD7 /* BillsScrollView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C3517F016AA004DEFD7 /* BillsScrollView.m */; };
    68542CA917F016AA004DEFD7 /* SimplePieChartView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C3D17F016AA004DEFD7 /* SimplePieChartView.m */; };
    68542CB117F016AA004DEFD7 /* RSLabel.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C5117F016AA004DEFD7 /* RSLabel.m */; };
    68542CB217F016AA004DEFD7 /* RSTextField.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C5317F016AA004DEFD7 /* RSTextField.m */; };
    68542CB517F016AA004DEFD7 /* ChartOverlay.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C5E17F016AA004DEFD7 /* ChartOverlay.m */; };
    68542CB817F016AA004DEFD7 /* HomeSearchView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C6817F016AA004DEFD7 /* HomeSearchView.m */; };
    68542CB917F016AA004DEFD7 /* SettingsPageView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C6B17F016AA004DEFD7 /* SettingsPageView.m */; };
    68542CBB17F016AA004DEFD7 /* CustomInfoView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C7017F016AA004DEFD7 /* CustomInfoView.m */; };
    68542CBC17F016AA004DEFD7 /* EllipseView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C7217F016AA004DEFD7 /* EllipseView.m */; };
    68542CBD17F016AA004DEFD7 /* GoogleMapView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C7417F016AA004DEFD7 /* GoogleMapView.m */; };
    68542CBE17F016AA004DEFD7 /* GoogleMarker.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C7617F016AA004DEFD7 /* GoogleMarker.m */; };
    68542CBF17F016AA004DEFD7 /* MyMapView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C7917F016AA004DEFD7 /* MyMapView.m */; };
    68542CC017F016AA004DEFD7 /* RGImageScrollCellView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C7B17F016AA004DEFD7 /* RGImageScrollCellView.m */; };
    68542CC117F016AA004DEFD7 /* RGStoreAnnotation.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C7D17F016AA004DEFD7 /* RGStoreAnnotation.m */; };
    68542CC217F016AA004DEFD7 /* RGStoreAnnotationView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C7F17F016AA004DEFD7 /* RGStoreAnnotationView.m */; };
    68542CC317F016AA004DEFD7 /* StoreLocatorPageView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C8117F016AA004DEFD7 /* StoreLocatorPageView.m */; };
    68542CC417F016AA004DEFD7 /* RGUserAnnotation.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C8317F016AA004DEFD7 /* RGUserAnnotation.m */; };
    68542CC617F016AA004DEFD7 /* TimCalloutView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C8717F016AA004DEFD7 /* TimCalloutView.m */; };
    68542CC717F016AA004DEFD7 /* TimView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68542C8917F016AA004DEFD7 /* TimView.m */; };
    68544ADA17ECCC7600B3A69D /* AddressBook.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 68544AD917ECCC7600B3A69D /* AddressBook.framework */; };
    68544ADC17ECCC9C00B3A69D /* AddressBookUI.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 68544ADB17ECCC9C00B3A69D /* AddressBookUI.framework */; };
    6858973A17F56EB1000D763B /* AssetsLibrary.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 6858973917F56EB1000D763B /* AssetsLibrary.framework */; };
    685F84071830CC7900034364 /* MNTView.m in Sources */ = {isa = PBXBuildFile; fileRef = 685F84061830CC7900034364 /* MNTView.m */; };
    685F8415183124C100034364 /* MNTREST.m in Sources */ = {isa = PBXBuildFile; fileRef = 685F8414183124C100034364 /* MNTREST.m */; };
    685F841D1831491500034364 /* UploadRest.m in Sources */ = {isa = PBXBuildFile; fileRef = 685F841C1831491500034364 /* UploadRest.m */; };
    6870978B17F01814004836A6 /* BillRest.m in Sources */ = {isa = PBXBuildFile; fileRef = 6870978A17F01814004836A6 /* BillRest.m */; };
    6870979317F018D7004836A6 /* ECSlidingViewController.m in Sources */ = {isa = PBXBuildFile; fileRef = 6870978E17F018D7004836A6 /* ECSlidingViewController.m */; };
    6870979517F018D7004836A6 /* UIImage+ImageWithUIView.m in Sources */ = {isa = PBXBuildFile; fileRef = 6870979217F018D7004836A6 /* UIImage+ImageWithUIView.m */; };
    6871F8B9183CD7D10049F05A /* ChatRest.m in Sources */ = {isa = PBXBuildFile; fileRef = 6871F8B8183CD7D10049F05A /* ChatRest.m */; };
    6878B54617FA95630008A26A /* MenuRest.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B54517FA95630008A26A /* MenuRest.m */; };
    6878B59A17FABDF70008A26A /* RATreeNode.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B58717FABDF70008A26A /* RATreeNode.m */; };
    6878B59B17FABDF70008A26A /* RATreeNodeCollectionController.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B58917FABDF70008A26A /* RATreeNodeCollectionController.m */; };
    6878B59C17FABDF70008A26A /* RATreeNodeInfo+Private.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B58B17FABDF70008A26A /* RATreeNodeInfo+Private.m */; };
    6878B59D17FABDF70008A26A /* RATreeNodeInfo.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B58D17FABDF70008A26A /* RATreeNodeInfo.m */; };
    6878B59E17FABDF70008A26A /* RATreeView+Enums.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B58F17FABDF70008A26A /* RATreeView+Enums.m */; };
    6878B59F17FABDF70008A26A /* RATreeView+Private.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B59117FABDF70008A26A /* RATreeView+Private.m */; };
    6878B5A017FABDF70008A26A /* RATreeView+TableViewDataSource.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B59317FABDF70008A26A /* RATreeView+TableViewDataSource.m */; };
    6878B5A117FABDF70008A26A /* RATreeView+TableViewDelegate.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B59517FABDF70008A26A /* RATreeView+TableViewDelegate.m */; };
    6878B5A217FABDF70008A26A /* RATreeView+UIScrollView.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B59717FABDF70008A26A /* RATreeView+UIScrollView.m */; };
    6878B5A317FABDF70008A26A /* RATreeView.m in Sources */ = {isa = PBXBuildFile; fileRef = 6878B59917FABDF70008A26A /* RATreeView.m */; };
    687F6D171805796B0040BF5D /* MKMapView+ZoomLevel.m in Sources */ = {isa = PBXBuildFile; fileRef = 687F6D161805796B0040BF5D /* MKMapView+ZoomLevel.m */; };
    68860F6D17FC33B400985C71 /* LocationBasedOfferView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68860F6C17FC33B400985C71 /* LocationBasedOfferView.m */; };
    689D8882181FDA0700481CDA /* FilterButton.m in Sources */ = {isa = PBXBuildFile; fileRef = 689D8881181FDA0700481CDA /* FilterButton.m */; };
    689ECE8217E2D4E90028BA0D /* iCarousel.m in Sources */ = {isa = PBXBuildFile; fileRef = 689ECE8117E2D4E90028BA0D /* iCarousel.m */; };
    68ADD03617EB7D1100EDA98A /* CoreText.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 68ADD03517EB7D1100EDA98A /* CoreText.framework */; };
    68ADD03817EB7D1C00EDA98A /* GLKit.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 68ADD03717EB7D1C00EDA98A /* GLKit.framework */; };
    68ADD03A17EB7D2900EDA98A /* ImageIO.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 68ADD03917EB7D2900EDA98A /* ImageIO.framework */; };
    68ADD03C17EB7D3A00EDA98A /* libc++.dylib in Frameworks */ = {isa = PBXBuildFile; fileRef = 68ADD03B17EB7D3A00EDA98A /* libc++.dylib */; };
    68ADD03E17EB7D5700EDA98A /* libicucore.dylib in Frameworks */ = {isa = PBXBuildFile; fileRef = 68ADD03D17EB7D5700EDA98A /* libicucore.dylib */; };
    68ADD04017EB7D6800EDA98A /* OpenGLES.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 68ADD03F17EB7D6800EDA98A /* OpenGLES.framework */; };
    68BA7D321822843400F951DB /* ValidationalTextField.m in Sources */ = {isa = PBXBuildFile; fileRef = 68BA7D311822843400F951DB /* ValidationalTextField.m */; };
    68FB2EBD17F3072500EE1457 /* CampaignsView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68FB2EBC17F3072500EE1457 /* CampaignsView.m */; };
    68FB2EC017F309AF00EE1457 /* OneCampaignView.m in Sources */ = {isa = PBXBuildFile; fileRef = 68FB2EBF17F309AF00EE1457 /* OneCampaignView.m */; };
    88A112FF1ACC76E000E79281 /* AFHTTPClient.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112E91ACC76E000E79281 /* AFHTTPClient.m */; };
    88A113001ACC76E000E79281 /* AFHTTPRequestOperation.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112EB1ACC76E000E79281 /* AFHTTPRequestOperation.m */; };
    88A113011ACC76E000E79281 /* AFHTTPRequestOperationLogger.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112ED1ACC76E000E79281 /* AFHTTPRequestOperationLogger.m */; };
    88A113021ACC76E000E79281 /* AFImageRequestOperation.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112EF1ACC76E000E79281 /* AFImageRequestOperation.m */; };
    88A113031ACC76E000E79281 /* AFJSONRequestOperation.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112F11ACC76E000E79281 /* AFJSONRequestOperation.m */; };
    88A113041ACC76E000E79281 /* AFNetworkActivityIndicatorManager.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112F31ACC76E000E79281 /* AFNetworkActivityIndicatorManager.m */; };
    88A113051ACC76E000E79281 /* AFPropertyListRequestOperation.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112F61ACC76E000E79281 /* AFPropertyListRequestOperation.m */; };
    88A113061ACC76E000E79281 /* AFURLCache.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112F81ACC76E000E79281 /* AFURLCache.m */; };
    88A113071ACC76E000E79281 /* AFURLConnectionOperation.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112FA1ACC76E000E79281 /* AFURLConnectionOperation.m */; };
    88A113081ACC76E000E79281 /* AFXMLRequestOperation.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112FC1ACC76E000E79281 /* AFXMLRequestOperation.m */; };
    88A113091ACC76E000E79281 /* UIImageView+AFNetworking.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A112FE1ACC76E000E79281 /* UIImageView+AFNetworking.m */; };
    88A1130C1ACD2C1200E79281 /* ChangePasswordVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A1130B1ACD2C1200E79281 /* ChangePasswordVC.m */; };
    88A1130F1ACD2CB200E79281 /* LoginRest.m in Sources */ = {isa = PBXBuildFile; fileRef = 88A1130E1ACD2CB200E79281 /* LoginRest.m */; };
    88A113191ACE862100E79281 /* Accelerate.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 88A113181ACE862100E79281 /* Accelerate.framework */; };
    88BC06141B00EE5600276997 /* Entitlement.plist in Resources */ = {isa = PBXBuildFile; fileRef = 88BC06131B00EE5600276997 /* Entitlement.plist */; };
    88C432801B67775B00A17E55 /* TurkcellIDBundle.bundle in Resources */ = {isa = PBXBuildFile; fileRef = 88C4327F1B67775B00A17E55 /* TurkcellIDBundle.bundle */; };
    88C432821B67785B00A17E55 /* TurkcellID.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 88C432811B67785B00A17E55 /* TurkcellID.framework */; };
    88F476071B61456000207F7F /* Entitlement-AppStore.plist in Resources */ = {isa = PBXBuildFile; fileRef = 88F476051B61456000207F7F /* Entitlement-AppStore.plist */; };
    88F476081B61456000207F7F /* Entitlement-Enterprise.plist in Resources */ = {isa = PBXBuildFile; fileRef = 88F476061B61456000207F7F /* Entitlement-Enterprise.plist */; };
    8D2A3A731A94A0290073487B /* AdobeMobileLibrary.a in Frameworks */ = {isa = PBXBuildFile; fileRef = 8D2A3A721A94A0290073487B /* AdobeMobileLibrary.a */; };
    8D2A3A771A94A7CA0073487B /* MNTVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D2A3A751A94A7CA0073487B /* MNTVC.m */; };
    8D2A3A781A94A7CA0073487B /* MNTVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D2A3A761A94A7CA0073487B /* MNTVC.xib */; };
    8D2D6BFE1A8F8534003FBB1A /* PeriodSliderView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D2D6BFD1A8F8534003FBB1A /* PeriodSliderView.xib */; };
    8D3CACD1197921B000FE36C5 /* libsqlite3.dylib in Frameworks */ = {isa = PBXBuildFile; fileRef = 8D3CACD0197921B000FE36C5 /* libsqlite3.dylib */; };
    8D44746619D224AF007DD48B /* ActionSheetLocalePicker.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D44746319D224AF007DD48B /* ActionSheetLocalePicker.m */; };
    8D44746719D224AF007DD48B /* SWActionSheet.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D44746519D224AF007DD48B /* SWActionSheet.m */; };
    8D495F5A1A8D62A700714784 /* FilterOptionTableViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D495F591A8D62A700714784 /* FilterOptionTableViewCell.xib */; };
    8D5456581A93634800C2F7B5 /* StoreWorkHoursCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D5456561A93634800C2F7B5 /* StoreWorkHoursCell.m */; };
    8D5456591A93634800C2F7B5 /* StoreWorkHoursCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D5456571A93634800C2F7B5 /* StoreWorkHoursCell.xib */; };
    8D54565B1A93D9D400C2F7B5 /* StoreLocatorFilterVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D54565A1A93D9D400C2F7B5 /* StoreLocatorFilterVC.xib */; };
    8D54565D1A940FA600C2F7B5 /* TimView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D54565C1A940FA600C2F7B5 /* TimView.xib */; };
    8D5F9BD71A8A8F850007CAEE /* BillDetailsView.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D5F9BD61A8A8F850007CAEE /* BillDetailsView.m */; };
    8D5F9BD91A8A8F950007CAEE /* BillDetailsView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D5F9BD81A8A8F950007CAEE /* BillDetailsView.xib */; };
    8D62E6FF1A92B985009B71F9 /* StoreLocatorVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D62E6FE1A92B985009B71F9 /* StoreLocatorVC.xib */; };
    8D62E7011A92BA87009B71F9 /* StoreLocatorPageView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D62E7001A92BA87009B71F9 /* StoreLocatorPageView.xib */; };
    8D82341619F91C6A00E81A3C /* TurkcellUpdater.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 8D82341519F91C6A00E81A3C /* TurkcellUpdater.framework */; };
    8D82342319F91FC000E81A3C /* libGoogleAnalyticsServices.a in Frameworks */ = {isa = PBXBuildFile; fileRef = 8D82342219F91FC000E81A3C /* libGoogleAnalyticsServices.a */; };
    8D88240F1A95F8040034D754 /* MySettingPUKTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D88240D1A95F8040034D754 /* MySettingPUKTableViewCell.m */; };
    8D8824101A95F8040034D754 /* MySettingPUKTableViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D88240E1A95F8040034D754 /* MySettingPUKTableViewCell.xib */; };
    8D89BE5B1A975B300060B71A /* UIView+Badge.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D89BE5A1A975B300060B71A /* UIView+Badge.m */; };
    8D89BE801A9764E30060B71A /* NotificationsView.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D89BE7F1A9764E30060B71A /* NotificationsView.m */; };
    8D89BE821A9764EE0060B71A /* NotificationsView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D89BE811A9764EE0060B71A /* NotificationsView.xib */; };
    8D89BE851A97688B0060B71A /* NotificationInfoView.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D89BE841A97688B0060B71A /* NotificationInfoView.m */; };
    8D89BE871A97689D0060B71A /* NotificationInfoView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D89BE861A97689D0060B71A /* NotificationInfoView.xib */; };
    8D8F9A8A1A9C8499003B0ACE /* Images.xcassets in Resources */ = {isa = PBXBuildFile; fileRef = 8D8F9A891A9C8499003B0ACE /* Images.xcassets */; };
    8D8F9A8D1A9CA6E9003B0ACE /* NotificationsVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D8F9A8B1A9CA6E9003B0ACE /* NotificationsVC.xib */; };
    8D8F9A8E1A9CA6E9003B0ACE /* NotificationTableViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D8F9A8C1A9CA6E9003B0ACE /* NotificationTableViewCell.xib */; };
    8D943FF01A8B65C200F6FE20 /* BillItemTableViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D943FEF1A8B65C200F6FE20 /* BillItemTableViewCell.xib */; };
    8D943FF31A8B811500F6FE20 /* BillDetailsFooterView.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D943FF21A8B811500F6FE20 /* BillDetailsFooterView.m */; };
    8D943FF51A8B812600F6FE20 /* BillDetailsFooterView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D943FF41A8B812600F6FE20 /* BillDetailsFooterView.xib */; };
    8D9784471A8F9B6D00918E3B /* MostNoticeableStatView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D9784461A8F9B6D00918E3B /* MostNoticeableStatView.xib */; };
    8D98795A1A933862007C6356 /* StoreDetailsVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D9879591A933862007C6356 /* StoreDetailsVC.xib */; };
    8D9934B21A89F67F004BEF44 /* BillAnalysisViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D9934B11A89F67F004BEF44 /* BillAnalysisViewModel.m */; };
    8D9934B41A8A01BF004BEF44 /* BillStatButtonView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D9934B31A8A01BF004BEF44 /* BillStatButtonView.xib */; };
    8D9934B71A8A3FDD004BEF44 /* BillCompareView.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D9934B61A8A3FDD004BEF44 /* BillCompareView.m */; };
    8D9934B91A8A3FEA004BEF44 /* BillCompareView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D9934B81A8A3FEA004BEF44 /* BillCompareView.xib */; };
    8D9934BC1A8A41C6004BEF44 /* BillCompareItemView.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D9934BB1A8A41C6004BEF44 /* BillCompareItemView.m */; };
    8D9934BE1A8A41D5004BEF44 /* BillCompareItemView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8D9934BD1A8A41D5004BEF44 /* BillCompareItemView.xib */; };
    8D9AC83D19FA47580028664F /* libcomScore.a in Frameworks */ = {isa = PBXBuildFile; fileRef = 8D9AC83C19FA47580028664F /* libcomScore.a */; };
    8D9F40D71A8B4ED4001503B5 /* BillDetailsViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D9F40D61A8B4ED4001503B5 /* BillDetailsViewModel.m */; };
    8D9F40DA1A8B5D2C001503B5 /* BillDetailViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 8D9F40D91A8B5D2C001503B5 /* BillDetailViewModel.m */; };
    8DA035D91A8DF146006F8C88 /* FilterHeaderView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8DA035D81A8DF146006F8C88 /* FilterHeaderView.xib */; };
    8DA035DE1A8E036E006F8C88 /* BillFilterFooterView.m in Sources */ = {isa = PBXBuildFile; fileRef = 8DA035DD1A8E036E006F8C88 /* BillFilterFooterView.m */; };
    8DA035E01A8E0388006F8C88 /* BillFilterFooterView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8DA035DF1A8E0388006F8C88 /* BillFilterFooterView.xib */; };
    8DA035E21A8E268F006F8C88 /* BillAnalysisDetailVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8DA035E11A8E268F006F8C88 /* BillAnalysisDetailVC.xib */; };
    8DA035E51A8E3132006F8C88 /* BillAnalysisDetailViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 8DA035E41A8E3132006F8C88 /* BillAnalysisDetailViewModel.m */; };
    8DB1001419C19185008CAE6C /* LocalAuthentication.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 8DB1001319C19185008CAE6C /* LocalAuthentication.framework */; settings = {ATTRIBUTES = (Weak, ); }; };
    8DB500971A955FF700DE9728 /* NextPrevView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8DB500961A955FF700DE9728 /* NextPrevView.xib */; };
    8DB500991A956D8300DE9728 /* InternalBillVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 8DB500981A956D8300DE9728 /* InternalBillVC.xib */; };
    8DB5009C1A95754B00DE9728 /* BillInvoiceDetailViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 8DB5009B1A95754B00DE9728 /* BillInvoiceDetailViewModel.m */; };
    8DEE2C2019AB803A00A6F5E9 /* Crashlytics.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 8DEE2C1F19AB803A00A6F5E9 /* Crashlytics.framework */; };
    9CF2B2B41B4FF9D30095FBBE /* Netmera.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 9CF2B2A21B4FF9D20095FBBE /* Netmera.framework */; };
    9CF2B2B51B4FF9D30095FBBE /* NetmeraConfigurations.xcconfig in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2A41B4FF9D20095FBBE /* NetmeraConfigurations.xcconfig */; };
    9CF2B2B61B4FF9D30095FBBE /* NetmeraLocalization.strings in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2A51B4FF9D20095FBBE /* NetmeraLocalization.strings */; };
    9CF2B2B71B4FF9D30095FBBE /* NetmeraSettings.plist in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2A61B4FF9D20095FBBE /* NetmeraSettings.plist */; };
    9CF2B2B81B4FF9D30095FBBE /* NMPushInboxCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9CF2B2A81B4FF9D20095FBBE /* NMPushInboxCell.m */; };
    9CF2B2B91B4FF9D30095FBBE /* NMPushInboxCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2A91B4FF9D20095FBBE /* NMPushInboxCell.xib */; };
    9CF2B2BA1B4FF9D30095FBBE /* NMPushInboxViewController.m in Sources */ = {isa = PBXBuildFile; fileRef = 9CF2B2AB1B4FF9D20095FBBE /* NMPushInboxViewController.m */; };
    9CF2B2BB1B4FF9D30095FBBE /* NMPushInboxViewController.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2AC1B4FF9D20095FBBE /* NMPushInboxViewController.xib */; };
    9CF2B2BC1B4FF9D30095FBBE /* NMRichPushViewController.m in Sources */ = {isa = PBXBuildFile; fileRef = 9CF2B2AE1B4FF9D20095FBBE /* NMRichPushViewController.m */; };
    9CF2B2BD1B4FF9D30095FBBE /* popupClose.png in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2AF1B4FF9D20095FBBE /* popupClose.png */; };
    9CF2B2BE1B4FF9D30095FBBE /* popupClose@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2B01B4FF9D20095FBBE /* popupClose@2x.png */; };
    9CF2B2BF1B4FF9D30095FBBE /* pushInboxEmptyImage.png in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2B11B4FF9D20095FBBE /* pushInboxEmptyImage.png */; };
    9CF2B2C01B4FF9D30095FBBE /* pushInboxEmptyImage@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2B21B4FF9D20095FBBE /* pushInboxEmptyImage@2x.png */; };
    9CF2B2C11B4FF9D30095FBBE /* Silence.wav in Resources */ = {isa = PBXBuildFile; fileRef = 9CF2B2B31B4FF9D20095FBBE /* Silence.wav */; };
    9F027D1E1A89FBCD007B0F0C /* Launch Screen.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F027D1D1A89FBCD007B0F0C /* Launch Screen.xib */; };
    9F027D221A8A3A10007B0F0C /* itemised.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F027D1F1A8A3A10007B0F0C /* itemised.json */; };
    9F027D231A8A3A10007B0F0C /* odeme.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F027D201A8A3A10007B0F0C /* odeme.json */; };
    9F027D241A8A3A10007B0F0C /* summary.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F027D211A8A3A10007B0F0C /* summary.json */; };
    9F027D261A8A3B10007B0F0C /* requestAuthToken.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F027D251A8A3B10007B0F0C /* requestAuthToken.json */; };
    9F027D2A1A8B5670007B0F0C /* PayBillVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F027D291A8B5670007B0F0C /* PayBillVC.xib */; };
    9F2C30B21AA49F8000C293EC /* CurioAction.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30941AA49F8000C293EC /* CurioAction.m */; };
    9F2C30B31AA49F8000C293EC /* CurioActionToolkit.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30961AA49F8000C293EC /* CurioActionToolkit.m */; };
    9F2C30B41AA49F8000C293EC /* CurioConstants.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30981AA49F8000C293EC /* CurioConstants.m */; };
    9F2C30B51AA49F8000C293EC /* CurioDB.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C309A1AA49F8000C293EC /* CurioDB.m */; };
    9F2C30B61AA49F8000C293EC /* CurioDBToolkit.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C309C1AA49F8000C293EC /* CurioDBToolkit.m */; };
    9F2C30B71AA49F8000C293EC /* CurioLocationData.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C309E1AA49F8000C293EC /* CurioLocationData.m */; };
    9F2C30B81AA49F8000C293EC /* CurioLocationManager.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30A01AA49F8000C293EC /* CurioLocationManager.m */; };
    9F2C30B91AA49F8000C293EC /* CurioNetwork.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30A21AA49F8000C293EC /* CurioNetwork.m */; };
    9F2C30BA1AA49F8000C293EC /* CurioNotificationManager.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30A41AA49F8000C293EC /* CurioNotificationManager.m */; };
    9F2C30BB1AA49F8000C293EC /* CurioPostOffice.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30A61AA49F8000C293EC /* CurioPostOffice.m */; };
    9F2C30BC1AA49F8000C293EC /* CurioPushData.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30A81AA49F8000C293EC /* CurioPushData.m */; };
    9F2C30BD1AA49F8000C293EC /* CurioReachabilityEx.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30AA1AA49F8000C293EC /* CurioReachabilityEx.m */; };
    9F2C30BE1AA49F8000C293EC /* CurioSDK.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30AD1AA49F8000C293EC /* CurioSDK.m */; };
    9F2C30BF1AA49F8000C293EC /* CurioSettings.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30AF1AA49F8000C293EC /* CurioSettings.m */; };
    9F2C30C01AA49F8000C293EC /* CurioUtil.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F2C30B11AA49F8000C293EC /* CurioUtil.m */; };
    9F3101931A88E23D00D7C8E2 /* XYPieChart.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101921A88E23D00D7C8E2 /* XYPieChart.m */; };
    9F3101991A88E24800D7C8E2 /* ProductAndServiceView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101951A88E24800D7C8E2 /* ProductAndServiceView.m */; };
    9F31019A1A88E24800D7C8E2 /* ProductAndServiceView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101961A88E24800D7C8E2 /* ProductAndServiceView.xib */; };
    9F31019B1A88E24800D7C8E2 /* ProductAndServiceViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101981A88E24800D7C8E2 /* ProductAndServiceViewModel.m */; };
    9F3101B11A88E26900D7C8E2 /* AllowanceFooterView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31019E1A88E26900D7C8E2 /* AllowanceFooterView.m */; };
    9F3101B21A88E26900D7C8E2 /* AllowanceFooterView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31019F1A88E26900D7C8E2 /* AllowanceFooterView.xib */; };
    9F3101B31A88E26900D7C8E2 /* AllowanceModelView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101A11A88E26900D7C8E2 /* AllowanceModelView.m */; };
    9F3101B41A88E26900D7C8E2 /* AllowancePurchaseView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101A31A88E26900D7C8E2 /* AllowancePurchaseView.m */; };
    9F3101B51A88E26900D7C8E2 /* AllowancePurchaseView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101A41A88E26900D7C8E2 /* AllowancePurchaseView.xib */; };
    9F3101B61A88E26900D7C8E2 /* BaseChartView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101A61A88E26900D7C8E2 /* BaseChartView.m */; };
    9F3101B71A88E26900D7C8E2 /* BaseChartView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101A71A88E26900D7C8E2 /* BaseChartView.xib */; };
    9F3101B81A88E26900D7C8E2 /* BillFooterView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101A91A88E26900D7C8E2 /* BillFooterView.m */; };
    9F3101B91A88E26900D7C8E2 /* BillFooterView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101AA1A88E26900D7C8E2 /* BillFooterView.xib */; };
    9F3101BA1A88E26900D7C8E2 /* BillViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101AC1A88E26900D7C8E2 /* BillViewModel.m */; };
    9F3101BB1A88E26900D7C8E2 /* ChartView+DataHandler.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101AE1A88E26900D7C8E2 /* ChartView+DataHandler.m */; };
    9F3101BC1A88E26900D7C8E2 /* UILabel+NumberAnimation.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101B01A88E26900D7C8E2 /* UILabel+NumberAnimation.m */; };
    9F3101C01A88E28500D7C8E2 /* CreditView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101BD1A88E28500D7C8E2 /* CreditView.xib */; };
    9F3101C11A88E28500D7C8E2 /* CreditViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101BF1A88E28500D7C8E2 /* CreditViewModel.m */; };
    9F3101C31A88E29100D7C8E2 /* ScrollThingyView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101C21A88E29100D7C8E2 /* ScrollThingyView.xib */; };
    9F3101C81A88E2C200D7C8E2 /* AccountInfoView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101C51A88E2C200D7C8E2 /* AccountInfoView.m */; };
    9F3101C91A88E2C200D7C8E2 /* AccountInfoView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101C61A88E2C200D7C8E2 /* AccountInfoView.xib */; };
    9F3101CA1A88E2C200D7C8E2 /* AccountView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101C71A88E2C200D7C8E2 /* AccountView.xib */; };
    9F3101D11A88E2E900D7C8E2 /* CampaignModelView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101CC1A88E2E900D7C8E2 /* CampaignModelView.m */; };
    9F3101D21A88E2E900D7C8E2 /* CampaignView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101CE1A88E2E900D7C8E2 /* CampaignView.m */; };
    9F3101D31A88E2E900D7C8E2 /* CampaignView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101CF1A88E2E900D7C8E2 /* CampaignView.xib */; };
    9F3101D41A88E2E900D7C8E2 /* MNTView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101D01A88E2E900D7C8E2 /* MNTView.xib */; };
    9F3101D91A88E2F800D7C8E2 /* HomeLoginView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101D51A88E2F800D7C8E2 /* HomeLoginView.xib */; };
    9F3101EA1A88E31400D7C8E2 /* FilterButton.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101DD1A88E31400D7C8E2 /* FilterButton.xib */; };
    9F3101EB1A88E31400D7C8E2 /* FilterDirectView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101DF1A88E31400D7C8E2 /* FilterDirectView.m */; };
    9F3101EC1A88E31400D7C8E2 /* FilterDirectView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101E01A88E31400D7C8E2 /* FilterDirectView.xib */; };
    9F3101ED1A88E31400D7C8E2 /* FilterFooterView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101E21A88E31400D7C8E2 /* FilterFooterView.m */; };
    9F3101EE1A88E31400D7C8E2 /* FilterFooterView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101E31A88E31400D7C8E2 /* FilterFooterView.xib */; };
    9F3101EF1A88E31400D7C8E2 /* FilterSectionHeaderView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101E51A88E31400D7C8E2 /* FilterSectionHeaderView.m */; };
    9F3101F01A88E31400D7C8E2 /* FilterSectionHeaderView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101E61A88E31400D7C8E2 /* FilterSectionHeaderView.xib */; };
    9F3101F11A88E31400D7C8E2 /* HomeSearchView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101E71A88E31400D7C8E2 /* HomeSearchView.xib */; };
    9F3101FB1A88E32B00D7C8E2 /* ProfilePhotoActionView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101F41A88E32A00D7C8E2 /* ProfilePhotoActionView.m */; };
    9F3101FC1A88E32B00D7C8E2 /* ProfilePhotoActionView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101F51A88E32A00D7C8E2 /* ProfilePhotoActionView.xib */; };
    9F3101FD1A88E32B00D7C8E2 /* SettingsPageHeaderView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3101F71A88E32A00D7C8E2 /* SettingsPageHeaderView.m */; };
    9F3101FE1A88E32B00D7C8E2 /* SettingsPageHeaderView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101F81A88E32A00D7C8E2 /* SettingsPageHeaderView.xib */; };
    9F3101FF1A88E32B00D7C8E2 /* SettingsPageMenuViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101F91A88E32A00D7C8E2 /* SettingsPageMenuViewCell.xib */; };
    9F3102001A88E32B00D7C8E2 /* SettingsPageView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3101FA1A88E32A00D7C8E2 /* SettingsPageView.xib */; };
    9F3102051A88E33D00D7C8E2 /* GBAlertView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102011A88E33D00D7C8E2 /* GBAlertView.xib */; };
    9F3102061A88E33D00D7C8E2 /* ScrollThingyItemView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102031A88E33D00D7C8E2 /* ScrollThingyItemView.m */; };
    9F3102071A88E33D00D7C8E2 /* ScrollThingyItemView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102041A88E33D00D7C8E2 /* ScrollThingyItemView.xib */; };
    9F3102091A88E34600D7C8E2 /* RSSearchView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102081A88E34600D7C8E2 /* RSSearchView.xib */; };
    9F3102301A88E41900D7C8E2 /* MySettingSelectionTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102231A88E41900D7C8E2 /* MySettingSelectionTableViewCell.m */; };
    9F3102311A88E41900D7C8E2 /* MySettingSelectionTableViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102241A88E41900D7C8E2 /* MySettingSelectionTableViewCell.xib */; };
    9F3102321A88E41900D7C8E2 /* MySettingsVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102251A88E41900D7C8E2 /* MySettingsVC.xib */; };
    9F3102331A88E41900D7C8E2 /* MySettingTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102271A88E41900D7C8E2 /* MySettingTableViewCell.m */; };
    9F3102341A88E41900D7C8E2 /* MySettingTableViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102281A88E41900D7C8E2 /* MySettingTableViewCell.xib */; };
    9F3102351A88E41900D7C8E2 /* SettingMainViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31022A1A88E41900D7C8E2 /* SettingMainViewModel.m */; };
    9F3102361A88E41900D7C8E2 /* SettingSubViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31022C1A88E41900D7C8E2 /* SettingSubViewModel.m */; };
    9F3102371A88E41900D7C8E2 /* SettingsVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31022D1A88E41900D7C8E2 /* SettingsVC.xib */; };
    9F3102381A88E41900D7C8E2 /* SettingViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31022F1A88E41900D7C8E2 /* SettingViewModel.m */; };
    9F31023D1A88E44100D7C8E2 /* WebVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31023B1A88E44100D7C8E2 /* WebVC.m */; };
    9F31023E1A88E44100D7C8E2 /* WebVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31023C1A88E44100D7C8E2 /* WebVC.xib */; };
    9F3102491A88E46C00D7C8E2 /* BillAnalysisView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102401A88E46C00D7C8E2 /* BillAnalysisView.m */; };
    9F31024A1A88E46C00D7C8E2 /* BillAnalysisView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102411A88E46C00D7C8E2 /* BillAnalysisView.xib */; };
    9F31024B1A88E46C00D7C8E2 /* BillSummaryView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102431A88E46C00D7C8E2 /* BillSummaryView.m */; };
    9F31024C1A88E46C00D7C8E2 /* BillSummaryView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102441A88E46C00D7C8E2 /* BillSummaryView.xib */; };
    9F31024D1A88E46C00D7C8E2 /* BillsVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102451A88E46C00D7C8E2 /* BillsVC.xib */; };
    9F31024E1A88E46C00D7C8E2 /* FoldableListView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102471A88E46C00D7C8E2 /* FoldableListView.m */; };
    9F31024F1A88E46C00D7C8E2 /* FoldableListView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102481A88E46C00D7C8E2 /* FoldableListView.xib */; };
    9F3102511A88E47B00D7C8E2 /* BillSummaryCellView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102501A88E47B00D7C8E2 /* BillSummaryCellView.xib */; };
    9F3102551A88E48300D7C8E2 /* AnonymousHomeVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102521A88E48300D7C8E2 /* AnonymousHomeVC.xib */; };
    9F3102561A88E48300D7C8E2 /* AppTourView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102531A88E48300D7C8E2 /* AppTourView.xib */; };
    9F3102571A88E48300D7C8E2 /* HomeVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102541A88E48300D7C8E2 /* HomeVC.xib */; };
    9F31026D1A88E4A000D7C8E2 /* DateSelectorTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102611A88E4A000D7C8E2 /* DateSelectorTableViewCell.m */; };
    9F31026E1A88E4A000D7C8E2 /* DateSelectorTableViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102621A88E4A000D7C8E2 /* DateSelectorTableViewCell.xib */; };
    9F31026F1A88E4A000D7C8E2 /* DateSelectorView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102641A88E4A000D7C8E2 /* DateSelectorView.m */; };
    9F3102701A88E4A000D7C8E2 /* DateSelectorView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102651A88E4A000D7C8E2 /* DateSelectorView.xib */; };
    9F3102711A88E4A000D7C8E2 /* MyUsageVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102661A88E4A000D7C8E2 /* MyUsageVC.xib */; };
    9F3102721A88E4A000D7C8E2 /* UsageFooterView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102681A88E4A000D7C8E2 /* UsageFooterView.m */; };
    9F3102731A88E4A000D7C8E2 /* UsageFooterView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102691A88E4A000D7C8E2 /* UsageFooterView.xib */; };
    9F3102741A88E4A000D7C8E2 /* UsageItemTableViewCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31026A1A88E4A000D7C8E2 /* UsageItemTableViewCell.xib */; };
    9F3102751A88E4A000D7C8E2 /* UsageViewModel.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31026C1A88E4A000D7C8E2 /* UsageViewModel.m */; };
    9F3102791A88E4AC00D7C8E2 /* AllowancesVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102761A88E4AC00D7C8E2 /* AllowancesVC.xib */; };
    9F31028E1A88E4BA00D7C8E2 /* DeviceDetailVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31027B1A88E4BA00D7C8E2 /* DeviceDetailVC.xib */; };
    9F31028F1A88E4BA00D7C8E2 /* FilterItemCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31027D1A88E4BA00D7C8E2 /* FilterItemCell.m */; };
    9F3102901A88E4BA00D7C8E2 /* FilterItemCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31027E1A88E4BA00D7C8E2 /* FilterItemCell.xib */; };
    9F3102911A88E4BA00D7C8E2 /* FilterVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31027F1A88E4BA00D7C8E2 /* FilterVC.xib */; };
    9F3102921A88E4BA00D7C8E2 /* SearchResultCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102811A88E4BA00D7C8E2 /* SearchResultCell.m */; };
    9F3102931A88E4BA00D7C8E2 /* SearchResultCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102821A88E4BA00D7C8E2 /* SearchResultCell.xib */; };
    9F3102941A88E4BA00D7C8E2 /* SearchResultInAppCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102841A88E4BA00D7C8E2 /* SearchResultInAppCell.m */; };
    9F3102951A88E4BA00D7C8E2 /* SearchResultInAppCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102851A88E4BA00D7C8E2 /* SearchResultInAppCell.xib */; };
    9F3102961A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102871A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.m */; };
    9F3102971A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102881A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.xib */; };
    9F3102981A88E4BA00D7C8E2 /* SearchResultOneBoxCell.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31028A1A88E4BA00D7C8E2 /* SearchResultOneBoxCell.m */; };
    9F3102991A88E4BA00D7C8E2 /* SearchResultOneBoxCell.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31028B1A88E4BA00D7C8E2 /* SearchResultOneBoxCell.xib */; };
    9F31029A1A88E4BA00D7C8E2 /* SearchSupportPageVC.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31028C1A88E4BA00D7C8E2 /* SearchSupportPageVC.xib */; };
    9F31029B1A88E4BA00D7C8E2 /* SearchSupportPageView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31028D1A88E4BA00D7C8E2 /* SearchSupportPageView.xib */; };
    9F3102A51A88E4C700D7C8E2 /* LoadTLView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F31029D1A88E4C700D7C8E2 /* LoadTLView.m */; };
    9F3102A61A88E4C700D7C8E2 /* LoadTLView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F31029E1A88E4C700D7C8E2 /* LoadTLView.xib */; };
    9F3102A71A88E4C700D7C8E2 /* PayWithCreditCardView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102A01A88E4C700D7C8E2 /* PayWithCreditCardView.m */; };
    9F3102A81A88E4C700D7C8E2 /* PayWithCreditCardView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102A11A88E4C700D7C8E2 /* PayWithCreditCardView.xib */; };
    9F3102A91A88E4C700D7C8E2 /* PayWithTLCreditView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102A31A88E4C700D7C8E2 /* PayWithTLCreditView.m */; };
    9F3102AA1A88E4C700D7C8E2 /* PayWithTLCreditView.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102A41A88E4C700D7C8E2 /* PayWithTLCreditView.xib */; };
    9F3102B11A88E50600D7C8E2 /* UINavigationBar+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102AC1A88E50600D7C8E2 /* UINavigationBar+Extensions.m */; };
    9F3102B21A88E50600D7C8E2 /* UITableView+Empty.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102AE1A88E50600D7C8E2 /* UITableView+Empty.m */; };
    9F3102B31A88E50600D7C8E2 /* NSNull+Enumeration.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102B01A88E50600D7C8E2 /* NSNull+Enumeration.m */; };
    9F3102BC1A88E57900D7C8E2 /* AppStatics.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3102BB1A88E57900D7C8E2 /* AppStatics.m */; };
    9F3105EA1A88E5F700D7C8E2 /* RG_TU_backarrow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102C51A88E5F600D7C8E2 /* RG_TU_backarrow.png */; };
    9F3105EB1A88E5F700D7C8E2 /* RG_TU_backarrow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102C61A88E5F600D7C8E2 /* RG_TU_backarrow@2x.png */; };
    9F3105EC1A88E5F700D7C8E2 /* RG_TU_backbtnarrow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102C71A88E5F600D7C8E2 /* RG_TU_backbtnarrow.png */; };
    9F3105ED1A88E5F700D7C8E2 /* RG_TU_backbtnarrow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102C81A88E5F600D7C8E2 /* RG_TU_backbtnarrow@2x.png */; };
    9F3105EE1A88E5F700D7C8E2 /* RG_TU_dropdownarrow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102C91A88E5F600D7C8E2 /* RG_TU_dropdownarrow.png */; };
    9F3105EF1A88E5F700D7C8E2 /* RG_TU_dropdownarrow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102CA1A88E5F600D7C8E2 /* RG_TU_dropdownarrow@2x.png */; };
    9F3105F01A88E5F700D7C8E2 /* RG_TU_mastercard.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102CB1A88E5F600D7C8E2 /* RG_TU_mastercard.png */; };
    9F3105F11A88E5F700D7C8E2 /* RG_TU_mastercard@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102CC1A88E5F600D7C8E2 /* RG_TU_mastercard@2x.png */; };
    9F3105F21A88E5F700D7C8E2 /* RG_TU_phoneicone.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102CD1A88E5F600D7C8E2 /* RG_TU_phoneicone.png */; };
    9F3105F31A88E5F700D7C8E2 /* RG_TU_phoneicone@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102CE1A88E5F600D7C8E2 /* RG_TU_phoneicone@2x.png */; };
    9F3105F41A88E5F700D7C8E2 /* RG_TU_securitydigits.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102CF1A88E5F600D7C8E2 /* RG_TU_securitydigits.png */; };
    9F3105F51A88E5F700D7C8E2 /* RG_TU_securitydigits@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102D01A88E5F600D7C8E2 /* RG_TU_securitydigits@2x.png */; };
    9F3105F61A88E5F700D7C8E2 /* RG_TU_tick.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102D11A88E5F600D7C8E2 /* RG_TU_tick.png */; };
    9F3105F71A88E5F700D7C8E2 /* RG_TU_tick@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102D21A88E5F600D7C8E2 /* RG_TU_tick@2x.png */; };
    9F3105F81A88E5F700D7C8E2 /* RG_tu_close_info_btn.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102D51A88E5F600D7C8E2 /* RG_tu_close_info_btn.png */; };
    9F3105F91A88E5F700D7C8E2 /* RG_tu_close_info_btn@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102D61A88E5F600D7C8E2 /* RG_tu_close_info_btn@2x.png */; };
    9F3105FA1A88E5F700D7C8E2 /* RG_tu_default_profile.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102D71A88E5F600D7C8E2 /* RG_tu_default_profile.png */; };
    9F3105FB1A88E5F700D7C8E2 /* RG_tu_default_profile@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102D81A88E5F600D7C8E2 /* RG_tu_default_profile@2x.png */; };
    9F3105FC1A88E5F700D7C8E2 /* RG_tu_info_btn.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102D91A88E5F600D7C8E2 /* RG_tu_info_btn.png */; };
    9F3105FD1A88E5F700D7C8E2 /* RG_tu_info_btn@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102DA1A88E5F600D7C8E2 /* RG_tu_info_btn@2x.png */; };
    9F3105FE1A88E5F700D7C8E2 /* RG_tu_textfield_OFF.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102DB1A88E5F600D7C8E2 /* RG_tu_textfield_OFF.png */; };
    9F3105FF1A88E5F700D7C8E2 /* RG_tu_textfield_OFF@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102DC1A88E5F600D7C8E2 /* RG_tu_textfield_OFF@2x.png */; };
    9F3106001A88E5F700D7C8E2 /* RG_tu_textfield_OFF@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102DD1A88E5F600D7C8E2 /* RG_tu_textfield_OFF@3x.png */; };
    9F3106011A88E5F700D7C8E2 /* RG_tu_textfield_ON.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102DE1A88E5F600D7C8E2 /* RG_tu_textfield_ON.png */; };
    9F3106021A88E5F700D7C8E2 /* RG_tu_textfield_ON@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102DF1A88E5F600D7C8E2 /* RG_tu_textfield_ON@2x.png */; };
    9F3106031A88E5F700D7C8E2 /* RG_tu_textfield_ON@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102E01A88E5F600D7C8E2 /* RG_tu_textfield_ON@3x.png */; };
    9F3106041A88E5F700D7C8E2 /* RG_sett_iconavatar_tsON.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102E21A88E5F600D7C8E2 /* RG_sett_iconavatar_tsON.png */; };
    9F3106051A88E5F700D7C8E2 /* RG_sett_iconavatar_tsON@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102E31A88E5F600D7C8E2 /* RG_sett_iconavatar_tsON@2x.png */; };
    9F3106061A88E5F700D7C8E2 /* RG_SS_default_header.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102E41A88E5F600D7C8E2 /* RG_SS_default_header.png */; };
    9F3106071A88E5F700D7C8E2 /* RG_SS_default_header@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102E51A88E5F600D7C8E2 /* RG_SS_default_header@2x.png */; };
    9F31060B1A88E5F700D7C8E2 /* RG_SS_homepage_searchbox_active1.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102E91A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1.png */; };
    9F31060C1A88E5F700D7C8E2 /* RG_SS_homepage_searchbox_active1@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102EA1A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1@2x.png */; };
    9F31060D1A88E5F700D7C8E2 /* RG_SS_homepage_searchbox_active1@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102EB1A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1@3x.png */; };
    9F3106111A88E5F700D7C8E2 /* Turkcell Satura Bold Italic.ttf in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F01A88E5F600D7C8E2 /* Turkcell Satura Bold Italic.ttf */; };
    9F3106121A88E5F700D7C8E2 /* Turkcell Satura Demi Italic.ttf in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F11A88E5F600D7C8E2 /* Turkcell Satura Demi Italic.ttf */; };
    9F3106131A88E5F700D7C8E2 /* Turkcell Satura Demi.ttf in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F21A88E5F600D7C8E2 /* Turkcell Satura Demi.ttf */; };
    9F3106141A88E5F700D7C8E2 /* Turkcell Satura Italic.ttf in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F31A88E5F600D7C8E2 /* Turkcell Satura Italic.ttf */; };
    9F3106151A88E5F700D7C8E2 /* Turkcell Satura Medium Italic.ttf in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F41A88E5F600D7C8E2 /* Turkcell Satura Medium Italic.ttf */; };
    9F3106161A88E5F700D7C8E2 /* Turkcell Satura Medium.ttf in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F51A88E5F600D7C8E2 /* Turkcell Satura Medium.ttf */; };
    9F3106171A88E5F700D7C8E2 /* Turkcell Satura Regular.ttf in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F61A88E5F600D7C8E2 /* Turkcell Satura Regular.ttf */; };
    9F3106181A88E5F700D7C8E2 /* TurkcellSaturaBold.ttf in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F71A88E5F600D7C8E2 /* TurkcellSaturaBold.ttf */; };
    9F3106191A88E5F700D7C8E2 /* Icon_114.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102F91A88E5F600D7C8E2 /* Icon_114.png */; };
    9F31061A1A88E5F700D7C8E2 /* Icon_120.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102FA1A88E5F600D7C8E2 /* Icon_120.png */; };
    9F31061B1A88E5F700D7C8E2 /* Icon_144.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102FB1A88E5F600D7C8E2 /* Icon_144.png */; };
    9F31061C1A88E5F700D7C8E2 /* Icon_29.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102FC1A88E5F600D7C8E2 /* Icon_29.png */; };
    9F31061D1A88E5F700D7C8E2 /* Icon_57.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102FD1A88E5F600D7C8E2 /* Icon_57.png */; };
    9F31061E1A88E5F700D7C8E2 /* Icon_58.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102FE1A88E5F600D7C8E2 /* Icon_58.png */; };
    9F31061F1A88E5F700D7C8E2 /* Icon_80.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3102FF1A88E5F600D7C8E2 /* Icon_80.png */; };
    9F3106221A88E5F700D7C8E2 /* adamli.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103041A88E5F600D7C8E2 /* adamli.png */; };
    9F3106231A88E5F700D7C8E2 /* adamli@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103051A88E5F600D7C8E2 /* adamli@2x.png */; };
    9F3106241A88E5F700D7C8E2 /* adamli@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103061A88E5F600D7C8E2 /* adamli@3x.png */; };
    9F3106251A88E5F700D7C8E2 /* photo_machine_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103071A88E5F600D7C8E2 /* photo_machine_icon.png */; };
    9F3106261A88E5F700D7C8E2 /* photo_machine_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103081A88E5F600D7C8E2 /* photo_machine_icon@2x.png */; };
    9F3106271A88E5F700D7C8E2 /* TC_topnav_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103091A88E5F600D7C8E2 /* TC_topnav_icon.png */; };
    9F3106281A88E5F700D7C8E2 /* TC_topnav_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31030A1A88E5F600D7C8E2 /* TC_topnav_icon@2x.png */; };
    9F3106291A88E5F700D7C8E2 /* tel.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31030B1A88E5F600D7C8E2 /* tel.png */; };
    9F31062A1A88E5F700D7C8E2 /* tel@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31030C1A88E5F600D7C8E2 /* tel@2x.png */; };
    9F31062B1A88E5F700D7C8E2 /* tel@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31030D1A88E5F600D7C8E2 /* tel@3x.png */; };
    9F31062C1A88E5F700D7C8E2 /* Allowance_data_notification.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31030F1A88E5F600D7C8E2 /* Allowance_data_notification.png */; };
    9F31062D1A88E5F700D7C8E2 /* Allowance_data_notification@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103101A88E5F600D7C8E2 /* Allowance_data_notification@2x.png */; };
    9F31062E1A88E5F700D7C8E2 /* Allowance_data_notification@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103111A88E5F600D7C8E2 /* Allowance_data_notification@3x.png */; };
    9F31062F1A88E5F700D7C8E2 /* AllowanceBill_Icon_Data.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103121A88E5F600D7C8E2 /* AllowanceBill_Icon_Data.png */; };
    9F3106301A88E5F700D7C8E2 /* AllowanceBill_Icon_Data@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103131A88E5F600D7C8E2 /* AllowanceBill_Icon_Data@2x.png */; };
    9F3106311A88E5F700D7C8E2 /* AllowanceBill_Icon_Data@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103141A88E5F600D7C8E2 /* AllowanceBill_Icon_Data@3x.png */; };
    9F3106321A88E5F700D7C8E2 /* AllowanceBill_Icon_Data_selected.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103151A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected.png */; };
    9F3106331A88E5F700D7C8E2 /* AllowanceBill_Icon_Data_selected@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103161A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected@2x.png */; };
    9F3106341A88E5F700D7C8E2 /* AllowanceBill_Icon_Data_selected@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103171A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected@3x.png */; };
    9F3106351A88E5F700D7C8E2 /* AllowanceBill_Icon_Other.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103181A88E5F600D7C8E2 /* AllowanceBill_Icon_Other.png */; };
    9F3106361A88E5F700D7C8E2 /* AllowanceBill_Icon_Other@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103191A88E5F600D7C8E2 /* AllowanceBill_Icon_Other@2x.png */; };
    9F3106371A88E5F700D7C8E2 /* AllowanceBill_Icon_Other@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31031A1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other@3x.png */; };
    9F3106381A88E5F700D7C8E2 /* AllowanceBill_Icon_Other_selected.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31031B1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected.png */; };
    9F3106391A88E5F700D7C8E2 /* AllowanceBill_Icon_Other_selected@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31031C1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected@2x.png */; };
    9F31063A1A88E5F700D7C8E2 /* AllowanceBill_Icon_Other_selected@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31031D1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected@3x.png */; };
    9F31063B1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31031E1A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS.png */; };
    9F31063C1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31031F1A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS@2x.png */; };
    9F31063D1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103201A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS@3x.png */; };
    9F31063E1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS_selected.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103211A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected.png */; };
    9F31063F1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS_selected@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103221A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected@2x.png */; };
    9F3106401A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS_selected@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103231A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected@3x.png */; };
    9F3106411A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103241A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice.png */; };
    9F3106421A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103251A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice@2x.png */; };
    9F3106431A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103261A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice@3x.png */; };
    9F3106441A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice_selected.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103271A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected.png */; };
    9F3106451A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice_selected@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103281A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected@2x.png */; };
    9F3106461A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice_selected@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103291A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected@3x.png */; };
    9F3106471A88E5F700D7C8E2 /* logo_only_phone_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31032B1A88E5F600D7C8E2 /* logo_only_phone_icon.png */; };
    9F3106481A88E5F700D7C8E2 /* logo_only_phone_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31032C1A88E5F600D7C8E2 /* logo_only_phone_icon@2x.png */; };
    9F3106491A88E5F700D7C8E2 /* logo_only_phone_icon@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31032D1A88E5F600D7C8E2 /* logo_only_phone_icon@3x.png */; };
    9F31064A1A88E5F700D7C8E2 /* pusula.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31032E1A88E5F600D7C8E2 /* pusula.png */; };
    9F31064B1A88E5F700D7C8E2 /* pusula@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31032F1A88E5F600D7C8E2 /* pusula@2x.png */; };
    9F31064C1A88E5F700D7C8E2 /* cocuk1.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103311A88E5F600D7C8E2 /* cocuk1.png */; };
    9F31064D1A88E5F700D7C8E2 /* cocuk1@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103321A88E5F600D7C8E2 /* cocuk1@2x.png */; };
    9F31064E1A88E5F700D7C8E2 /* cocuk2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103331A88E5F600D7C8E2 /* cocuk2.png */; };
    9F31064F1A88E5F700D7C8E2 /* cocuk2@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103341A88E5F600D7C8E2 /* cocuk2@2x.png */; };
    9F3106501A88E5F700D7C8E2 /* cocuk3.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103351A88E5F600D7C8E2 /* cocuk3.png */; };
    9F3106511A88E5F700D7C8E2 /* cocuk3@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103361A88E5F600D7C8E2 /* cocuk3@2x.png */; };
    9F3106521A88E5F700D7C8E2 /* cocuk4.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103371A88E5F600D7C8E2 /* cocuk4.png */; };
    9F3106531A88E5F700D7C8E2 /* cocuk4@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103381A88E5F600D7C8E2 /* cocuk4@2x.png */; };
    9F3106541A88E5F700D7C8E2 /* menu_icon_white_highlighted.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103391A88E5F600D7C8E2 /* menu_icon_white_highlighted.png */; };
    9F3106551A88E5F700D7C8E2 /* menu_icon_white_highlighted@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31033A1A88E5F600D7C8E2 /* menu_icon_white_highlighted@2x.png */; };
    9F3106561A88E5F700D7C8E2 /* topup_white_icon_highlighted.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31033B1A88E5F600D7C8E2 /* topup_white_icon_highlighted.png */; };
    9F3106571A88E5F700D7C8E2 /* topup_white_icon_hightlighted@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31033C1A88E5F600D7C8E2 /* topup_white_icon_hightlighted@2x.png */; };
    9F3106581A88E5F700D7C8E2 /* yellow_button_with_glow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31033D1A88E5F600D7C8E2 /* yellow_button_with_glow.png */; };
    9F3106591A88E5F700D7C8E2 /* yellow_button_with_glow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31033E1A88E5F600D7C8E2 /* yellow_button_with_glow@2x.png */; };
    9F31065A1A88E5F700D7C8E2 /* Bill_details_button_bg.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103401A88E5F600D7C8E2 /* Bill_details_button_bg.png */; };
    9F31065B1A88E5F700D7C8E2 /* Bill_details_button_bg@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103411A88E5F600D7C8E2 /* Bill_details_button_bg@2x.png */; };
    9F31065C1A88E5F700D7C8E2 /* Bill_details_button_bg@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103421A88E5F600D7C8E2 /* Bill_details_button_bg@3x.png */; };
    9F31065F1A88E5F700D7C8E2 /* Bill_paynow_button_bg.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103451A88E5F600D7C8E2 /* Bill_paynow_button_bg.png */; };
    9F3106601A88E5F700D7C8E2 /* Bill_paynow_button_bg@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103461A88E5F600D7C8E2 /* Bill_paynow_button_bg@2x.png */; };
    9F3106611A88E5F700D7C8E2 /* Bill_paynow_button_bg@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103471A88E5F600D7C8E2 /* Bill_paynow_button_bg@3x.png */; };
    9F3106621A88E5F700D7C8E2 /* close_icon_white.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103481A88E5F600D7C8E2 /* close_icon_white.png */; };
    9F3106631A88E5F700D7C8E2 /* close_icon_white@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103491A88E5F600D7C8E2 /* close_icon_white@2x.png */; };
    9F3106641A88E5F700D7C8E2 /* minus_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31034A1A88E5F600D7C8E2 /* minus_icon.png */; };
    9F3106651A88E5F700D7C8E2 /* minus_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31034B1A88E5F600D7C8E2 /* minus_icon@2x.png */; };
    9F3106661A88E5F700D7C8E2 /* plus_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31034C1A88E5F600D7C8E2 /* plus_icon.png */; };
    9F3106671A88E5F700D7C8E2 /* plus_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31034D1A88E5F600D7C8E2 /* plus_icon@2x.png */; };
    9F3106681A88E5F700D7C8E2 /* RG_Bill_payNowBtn_BIG.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31034E1A88E5F600D7C8E2 /* RG_Bill_payNowBtn_BIG.png */; };
    9F3106691A88E5F700D7C8E2 /* RG_Bill_payNowBtn_BIG@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31034F1A88E5F600D7C8E2 /* RG_Bill_payNowBtn_BIG@2x.png */; };
    9F31066A1A88E5F700D7C8E2 /* RG_Bill_sendEmail_BIG.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103501A88E5F600D7C8E2 /* RG_Bill_sendEmail_BIG.png */; };
    9F31066B1A88E5F700D7C8E2 /* RG_Bill_sendEmail_BIG@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103511A88E5F600D7C8E2 /* RG_Bill_sendEmail_BIG@2x.png */; };
    9F31066C1A88E5F700D7C8E2 /* RG_calendar_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103521A88E5F600D7C8E2 /* RG_calendar_icon.png */; };
    9F31066D1A88E5F700D7C8E2 /* RG_calendar_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103531A88E5F600D7C8E2 /* RG_calendar_icon@2x.png */; };
    9F31066E1A88E5F700D7C8E2 /* RG_calendar_icon@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103541A88E5F600D7C8E2 /* RG_calendar_icon@3x.png */; };
    9F31066F1A88E5F700D7C8E2 /* RG_mb_arrow_icon_OFF.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103551A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF.png */; };
    9F3106701A88E5F700D7C8E2 /* RG_mb_arrow_icon_OFF@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103561A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF@2x.png */; };
    9F3106711A88E5F700D7C8E2 /* RG_mb_arrow_icon_OFF_white.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103571A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF_white.png */; };
    9F3106721A88E5F700D7C8E2 /* RG_mb_arrow_icon_OFF_white@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103581A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF_white@2x.png */; };
    9F3106731A88E5F700D7C8E2 /* RG_mb_arrow_icon_ON.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103591A88E5F600D7C8E2 /* RG_mb_arrow_icon_ON.png */; };
    9F3106741A88E5F700D7C8E2 /* RG_mb_arrow_icon_ON@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31035A1A88E5F600D7C8E2 /* RG_mb_arrow_icon_ON@2x.png */; };
    9F3106751A88E5F700D7C8E2 /* RG_mb_itemised_icon_OFF.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31035B1A88E5F600D7C8E2 /* RG_mb_itemised_icon_OFF.png */; };
    9F3106761A88E5F700D7C8E2 /* RG_mb_itemised_icon_OFF@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31035C1A88E5F600D7C8E2 /* RG_mb_itemised_icon_OFF@2x.png */; };
    9F3106771A88E5F700D7C8E2 /* RG_mb_itemised_icon_ON.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31035D1A88E5F600D7C8E2 /* RG_mb_itemised_icon_ON.png */; };
    9F3106781A88E5F700D7C8E2 /* RG_mb_itemised_icon_ON@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31035E1A88E5F600D7C8E2 /* RG_mb_itemised_icon_ON@2x.png */; };
    9F3106791A88E5F700D7C8E2 /* RG_mb_stats_icon_OFF.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31035F1A88E5F600D7C8E2 /* RG_mb_stats_icon_OFF.png */; };
    9F31067A1A88E5F700D7C8E2 /* RG_mb_stats_icon_OFF@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103601A88E5F600D7C8E2 /* RG_mb_stats_icon_OFF@2x.png */; };
    9F31067B1A88E5F700D7C8E2 /* RG_mb_stats_icon_ON.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103611A88E5F600D7C8E2 /* RG_mb_stats_icon_ON.png */; };
    9F31067C1A88E5F700D7C8E2 /* RG_mb_stats_icon_ON@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103621A88E5F600D7C8E2 /* RG_mb_stats_icon_ON@2x.png */; };
    9F31067D1A88E5F700D7C8E2 /* RG_mb_summary_icon_OFF.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103631A88E5F600D7C8E2 /* RG_mb_summary_icon_OFF.png */; };
    9F31067E1A88E5F700D7C8E2 /* RG_mb_summary_icon_OFF@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103641A88E5F600D7C8E2 /* RG_mb_summary_icon_OFF@2x.png */; };
    9F31067F1A88E5F700D7C8E2 /* RG_mb_summary_icon_ON.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103651A88E5F600D7C8E2 /* RG_mb_summary_icon_ON.png */; };
    9F3106801A88E5F700D7C8E2 /* RG_mb_summary_icon_ON@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103661A88E5F600D7C8E2 /* RG_mb_summary_icon_ON@2x.png */; };
    9F3106891A88E5F700D7C8E2 /* flag_campaign.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103711A88E5F600D7C8E2 /* flag_campaign.png */; };
    9F31068A1A88E5F700D7C8E2 /* flag_campaign@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103721A88E5F600D7C8E2 /* flag_campaign@2x.png */; };
    9F31068B1A88E5F700D7C8E2 /* flag_campaign@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103731A88E5F600D7C8E2 /* flag_campaign@3x.png */; };
    9F31068C1A88E5F700D7C8E2 /* flag_campaign_and_new.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103741A88E5F600D7C8E2 /* flag_campaign_and_new.png */; };
    9F31068D1A88E5F700D7C8E2 /* flag_campaign_and_new@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103751A88E5F600D7C8E2 /* flag_campaign_and_new@2x.png */; };
    9F31068E1A88E5F700D7C8E2 /* flag_campaign_and_new@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103761A88E5F600D7C8E2 /* flag_campaign_and_new@3x.png */; };
    9F31068F1A88E5F700D7C8E2 /* flag_campaign_and_popular.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103771A88E5F600D7C8E2 /* flag_campaign_and_popular.png */; };
    9F3106901A88E5F700D7C8E2 /* flag_campaign_and_popular@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103781A88E5F600D7C8E2 /* flag_campaign_and_popular@2x.png */; };
    9F3106911A88E5F700D7C8E2 /* flag_campaign_and_popular@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103791A88E5F600D7C8E2 /* flag_campaign_and_popular@3x.png */; };
    9F3106921A88E5F700D7C8E2 /* flag_campaign_and_recommendation.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31037A1A88E5F600D7C8E2 /* flag_campaign_and_recommendation.png */; };
    9F3106931A88E5F700D7C8E2 /* flag_campaign_and_recommendation@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31037B1A88E5F600D7C8E2 /* flag_campaign_and_recommendation@2x.png */; };
    9F3106941A88E5F700D7C8E2 /* flag_campaign_and_recommendation@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31037C1A88E5F600D7C8E2 /* flag_campaign_and_recommendation@3x.png */; };
    9F3106951A88E5F700D7C8E2 /* flag_new.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31037D1A88E5F600D7C8E2 /* flag_new.png */; };
    9F3106961A88E5F700D7C8E2 /* flag_new@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31037E1A88E5F600D7C8E2 /* flag_new@2x.png */; };
    9F3106971A88E5F700D7C8E2 /* flag_new@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31037F1A88E5F600D7C8E2 /* flag_new@3x.png */; };
    9F3106981A88E5F700D7C8E2 /* flag_popular.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103801A88E5F600D7C8E2 /* flag_popular.png */; };
    9F3106991A88E5F700D7C8E2 /* flag_popular@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103811A88E5F600D7C8E2 /* flag_popular@2x.png */; };
    9F31069A1A88E5F700D7C8E2 /* flag_popular@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103821A88E5F600D7C8E2 /* flag_popular@3x.png */; };
    9F31069B1A88E5F700D7C8E2 /* flag_recommendation.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103831A88E5F600D7C8E2 /* flag_recommendation.png */; };
    9F31069C1A88E5F700D7C8E2 /* flag_recommendation@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103841A88E5F600D7C8E2 /* flag_recommendation@2x.png */; };
    9F31069D1A88E5F700D7C8E2 /* flag_recommendation@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103851A88E5F600D7C8E2 /* flag_recommendation@3x.png */; };
    9F31069E1A88E5F700D7C8E2 /* big_shadow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103871A88E5F600D7C8E2 /* big_shadow.png */; };
    9F31069F1A88E5F700D7C8E2 /* big_shadow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103881A88E5F600D7C8E2 /* big_shadow@2x.png */; };
    9F3106A01A88E5F700D7C8E2 /* big_shadow@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103891A88E5F600D7C8E2 /* big_shadow@3x.png */; };
    9F3106A11A88E5F700D7C8E2 /* close_keyboard_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31038A1A88E5F600D7C8E2 /* close_keyboard_icon.png */; };
    9F3106A21A88E5F700D7C8E2 /* close_keyboard_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31038B1A88E5F600D7C8E2 /* close_keyboard_icon@2x.png */; };
    9F3106A31A88E5F700D7C8E2 /* finger_print.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31038C1A88E5F600D7C8E2 /* finger_print.png */; };
    9F3106A41A88E5F700D7C8E2 /* finger_print@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31038D1A88E5F600D7C8E2 /* finger_print@2x.png */; };
    9F3106A71A88E5F700D7C8E2 /* left_white_arrow_from_guideline.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103911A88E5F600D7C8E2 /* left_white_arrow_from_guideline.png */; };
    9F3106A81A88E5F700D7C8E2 /* left_white_arrow_from_guideline@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103921A88E5F600D7C8E2 /* left_white_arrow_from_guideline@2x.png */; };
    9F3106A91A88E5F700D7C8E2 /* reload_icon_from_guideline.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103931A88E5F600D7C8E2 /* reload_icon_from_guideline.png */; };
    9F3106AA1A88E5F700D7C8E2 /* reload_icon_from_guideline@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103941A88E5F600D7C8E2 /* reload_icon_from_guideline@2x.png */; };
    9F3106AB1A88E5F700D7C8E2 /* reload_icon_from_guideline@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103951A88E5F600D7C8E2 /* reload_icon_from_guideline@3x.png */; };
    9F3106AC1A88E5F700D7C8E2 /* right_white_arrow_from_guideline.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103961A88E5F600D7C8E2 /* right_white_arrow_from_guideline.png */; };
    9F3106AD1A88E5F700D7C8E2 /* right_white_arrow_from_guideline@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103971A88E5F600D7C8E2 /* right_white_arrow_from_guideline@2x.png */; };
    9F3106AE1A88E5F700D7C8E2 /* search_icon_from_guideline.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103981A88E5F600D7C8E2 /* search_icon_from_guideline.png */; };
    9F3106AF1A88E5F700D7C8E2 /* search_icon_from_guideline@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3103991A88E5F600D7C8E2 /* search_icon_from_guideline@2x.png */; };
    9F3106B01A88E5F700D7C8E2 /* search_icon_from_guideline@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31039A1A88E5F600D7C8E2 /* search_icon_from_guideline@3x.png */; };
    9F31073A1A88E5F700D7C8E2 /* RG_LS_intro_logo.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104271A88E5F700D7C8E2 /* RG_LS_intro_logo.png */; };
    9F31073B1A88E5F700D7C8E2 /* RG_LS_intro_logo@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104281A88E5F700D7C8E2 /* RG_LS_intro_logo@2x.png */; };
    9F31073C1A88E5F700D7C8E2 /* RG_LS_intro_logo@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104291A88E5F700D7C8E2 /* RG_LS_intro_logo@3x.png */; };
    9F31073D1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31042A1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle.png */; };
    9F31073E1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31042B1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle@2x.png */; };
    9F31073F1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31042C1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo.png */; };
    9F3107401A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31042D1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo@2x.png */; };
    9F3107411A88E5F700D7C8E2 /* location_based_bg.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31042F1A88E5F700D7C8E2 /* location_based_bg.png */; };
    9F3107421A88E5F700D7C8E2 /* location_based_bg@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104301A88E5F700D7C8E2 /* location_based_bg@2x.png */; };
    9F3107431A88E5F700D7C8E2 /* offer_button_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104311A88E5F700D7C8E2 /* offer_button_icon.png */; };
    9F3107441A88E5F700D7C8E2 /* offer_button_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104321A88E5F700D7C8E2 /* offer_button_icon@2x.png */; };
    9F3107451A88E5F700D7C8E2 /* date_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104341A88E5F700D7C8E2 /* date_icon.png */; };
    9F3107461A88E5F700D7C8E2 /* date_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104351A88E5F700D7C8E2 /* date_icon@2x.png */; };
    9F3107471A88E5F700D7C8E2 /* date_icon@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104361A88E5F700D7C8E2 /* date_icon@3x.png */; };
    9F3107481A88E5F700D7C8E2 /* home_login_avatar.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104371A88E5F700D7C8E2 /* home_login_avatar.png */; };
    9F3107491A88E5F700D7C8E2 /* home_login_avatar@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104381A88E5F700D7C8E2 /* home_login_avatar@2x.png */; };
    9F31074A1A88E5F700D7C8E2 /* home_login_avatar@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104391A88E5F700D7C8E2 /* home_login_avatar@3x.png */; };
    9F31074B1A88E5F700D7C8E2 /* hour_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31043A1A88E5F700D7C8E2 /* hour_icon.png */; };
    9F31074C1A88E5F700D7C8E2 /* hour_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31043B1A88E5F700D7C8E2 /* hour_icon@2x.png */; };
    9F31074D1A88E5F700D7C8E2 /* hour_icon@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31043C1A88E5F700D7C8E2 /* hour_icon@3x.png */; };
    9F31074E1A88E5F700D7C8E2 /* login_facebook.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31043D1A88E5F700D7C8E2 /* login_facebook.png */; };
    9F31074F1A88E5F700D7C8E2 /* login_facebook2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31043E1A88E5F700D7C8E2 /* login_facebook2.png */; };
    9F3107501A88E5F700D7C8E2 /* login_facebook2@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31043F1A88E5F700D7C8E2 /* login_facebook2@2x.png */; };
    9F3107511A88E5F700D7C8E2 /* login_facebook@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104401A88E5F700D7C8E2 /* login_facebook@2x.png */; };
    9F3107521A88E5F700D7C8E2 /* login_mobileimza.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104411A88E5F700D7C8E2 /* login_mobileimza.png */; };
    9F3107531A88E5F700D7C8E2 /* login_mobileimza2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104421A88E5F700D7C8E2 /* login_mobileimza2.png */; };
    9F3107541A88E5F700D7C8E2 /* login_mobileimza2@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104431A88E5F700D7C8E2 /* login_mobileimza2@2x.png */; };
    9F3107551A88E5F700D7C8E2 /* login_mobileimza@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104441A88E5F700D7C8E2 /* login_mobileimza@2x.png */; };
    9F3107561A88E5F700D7C8E2 /* login_sifreDegistir.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104451A88E5F700D7C8E2 /* login_sifreDegistir.png */; };
    9F3107571A88E5F700D7C8E2 /* login_sifreDegistir@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104461A88E5F700D7C8E2 /* login_sifreDegistir@2x.png */; };
    9F3107581A88E5F700D7C8E2 /* login_sms_sending_image.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104471A88E5F700D7C8E2 /* login_sms_sending_image.png */; };
    9F3107591A88E5F700D7C8E2 /* login_sms_sending_image@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104481A88E5F700D7C8E2 /* login_sms_sending_image@2x.png */; };
    9F31075A1A88E5F700D7C8E2 /* login_telNoSifre.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104491A88E5F700D7C8E2 /* login_telNoSifre.png */; };
    9F31075B1A88E5F700D7C8E2 /* login_telNoSifre@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31044A1A88E5F700D7C8E2 /* login_telNoSifre@2x.png */; };
    9F31075C1A88E5F700D7C8E2 /* login_tick_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31044B1A88E5F700D7C8E2 /* login_tick_icon.png */; };
    9F31075D1A88E5F700D7C8E2 /* login_tick_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31044C1A88E5F700D7C8E2 /* login_tick_icon@2x.png */; };
    9F31075E1A88E5F700D7C8E2 /* login_tick_icon@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31044D1A88E5F700D7C8E2 /* login_tick_icon@3x.png */; };
    9F31075F1A88E5F700D7C8E2 /* login_turkcell.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31044E1A88E5F700D7C8E2 /* login_turkcell.png */; };
    9F3107601A88E5F700D7C8E2 /* login_turkcell2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31044F1A88E5F700D7C8E2 /* login_turkcell2.png */; };
    9F3107611A88E5F700D7C8E2 /* login_turkcell2@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104501A88E5F700D7C8E2 /* login_turkcell2@2x.png */; };
    9F3107621A88E5F700D7C8E2 /* login_turkcell@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104511A88E5F700D7C8E2 /* login_turkcell@2x.png */; };
    9F3107631A88E5F700D7C8E2 /* signin.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104521A88E5F700D7C8E2 /* signin.png */; };
    9F3107641A88E5F700D7C8E2 /* signin@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104531A88E5F700D7C8E2 /* signin@2x.png */; };
    9F3107651A88E5F700D7C8E2 /* signin@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104541A88E5F700D7C8E2 /* signin@3x.png */; };
    9F3107661A88E5F700D7C8E2 /* signout.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104551A88E5F700D7C8E2 /* signout.png */; };
    9F3107671A88E5F700D7C8E2 /* signout@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104561A88E5F700D7C8E2 /* signout@2x.png */; };
    9F3107681A88E5F700D7C8E2 /* mnt.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104581A88E5F700D7C8E2 /* mnt.png */; };
    9F3107691A88E5F700D7C8E2 /* mnt@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104591A88E5F700D7C8E2 /* mnt@2x.png */; };
    9F31076A1A88E5F700D7C8E2 /* mnt@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31045A1A88E5F700D7C8E2 /* mnt@3x.png */; };
    9F31076B1A88E5F700D7C8E2 /* mntOK.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31045B1A88E5F700D7C8E2 /* mntOK.png */; };
    9F31076C1A88E5F700D7C8E2 /* mntOK@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31045C1A88E5F700D7C8E2 /* mntOK@2x.png */; };
    9F31076D1A88E5F700D7C8E2 /* alert_icon_confirm.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31045E1A88E5F700D7C8E2 /* alert_icon_confirm.png */; };
    9F31076E1A88E5F700D7C8E2 /* alert_icon_confirm@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31045F1A88E5F700D7C8E2 /* alert_icon_confirm@2x.png */; };
    9F31076F1A88E5F700D7C8E2 /* alert_icon_error.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104601A88E5F700D7C8E2 /* alert_icon_error.png */; };
    9F3107701A88E5F700D7C8E2 /* alert_icon_error@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104611A88E5F700D7C8E2 /* alert_icon_error@2x.png */; };
    9F3107711A88E5F700D7C8E2 /* alert_icon_info.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104621A88E5F700D7C8E2 /* alert_icon_info.png */; };
    9F3107721A88E5F700D7C8E2 /* alert_icon_info@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104631A88E5F700D7C8E2 /* alert_icon_info@2x.png */; };
    9F3107731A88E5F700D7C8E2 /* alert_icon_success.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104641A88E5F700D7C8E2 /* alert_icon_success.png */; };
    9F3107741A88E5F700D7C8E2 /* alert_icon_success@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104651A88E5F700D7C8E2 /* alert_icon_success@2x.png */; };
    9F3107751A88E5F700D7C8E2 /* menu_back_icon_blue.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104671A88E5F700D7C8E2 /* menu_back_icon_blue.png */; };
    9F3107761A88E5F700D7C8E2 /* menu_back_icon_blue@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104681A88E5F700D7C8E2 /* menu_back_icon_blue@2x.png */; };
    9F3107771A88E5F700D7C8E2 /* menu_back_icon_white.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104691A88E5F700D7C8E2 /* menu_back_icon_white.png */; };
    9F3107781A88E5F700D7C8E2 /* menu_back_icon_white@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31046A1A88E5F700D7C8E2 /* menu_back_icon_white@2x.png */; };
    9F3107791A88E5F700D7C8E2 /* menu_icon_blue.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31046B1A88E5F700D7C8E2 /* menu_icon_blue.png */; };
    9F31077A1A88E5F700D7C8E2 /* menu_icon_blue@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31046C1A88E5F700D7C8E2 /* menu_icon_blue@2x.png */; };
    9F31077B1A88E5F700D7C8E2 /* menu_icon_white.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31046D1A88E5F700D7C8E2 /* menu_icon_white.png */; };
    9F31077C1A88E5F700D7C8E2 /* menu_icon_white@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31046E1A88E5F700D7C8E2 /* menu_icon_white@2x.png */; };
    9F31077D1A88E5F700D7C8E2 /* notification_placeholder.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104701A88E5F700D7C8E2 /* notification_placeholder.png */; };
    9F31077E1A88E5F700D7C8E2 /* notification_placeholder@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104711A88E5F700D7C8E2 /* notification_placeholder@2x.png */; };
    9F3107811A88E5F700D7C8E2 /* TC_sett2_1.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104741A88E5F700D7C8E2 /* TC_sett2_1.png */; };
    9F3107821A88E5F700D7C8E2 /* TC_sett2_1@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104751A88E5F700D7C8E2 /* TC_sett2_1@2x.png */; };
    9F3107851A88E5F700D7C8E2 /* displayBillAnalysisModule.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104791A88E5F700D7C8E2 /* displayBillAnalysisModule.png */; };
    9F3107861A88E5F700D7C8E2 /* displayBillAnalysisModule@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31047A1A88E5F700D7C8E2 /* displayBillAnalysisModule@2x.png */; };
    9F3107871A88E5F700D7C8E2 /* displayBillModule.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31047B1A88E5F700D7C8E2 /* displayBillModule.png */; };
    9F3107881A88E5F700D7C8E2 /* displayBillModule@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31047C1A88E5F700D7C8E2 /* displayBillModule@2x.png */; };
    9F3107891A88E5F700D7C8E2 /* displayNarModule.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31047D1A88E5F700D7C8E2 /* displayNarModule.png */; };
    9F31078A1A88E5F700D7C8E2 /* displayNarModule@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31047E1A88E5F700D7C8E2 /* displayNarModule@2x.png */; };
    9F31078B1A88E5F700D7C8E2 /* displaySettingsModule.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31047F1A88E5F700D7C8E2 /* displaySettingsModule.png */; };
    9F31078C1A88E5F700D7C8E2 /* displaySettingsModule@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104801A88E5F700D7C8E2 /* displaySettingsModule@2x.png */; };
    9F31078D1A88E5F700D7C8E2 /* displayTopUpModule.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104811A88E5F700D7C8E2 /* displayTopUpModule.png */; };
    9F31078E1A88E5F700D7C8E2 /* displayTopUpModule@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104821A88E5F700D7C8E2 /* displayTopUpModule@2x.png */; };
    9F31078F1A88E5F700D7C8E2 /* displayUsageModule.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104831A88E5F700D7C8E2 /* displayUsageModule.png */; };
    9F3107901A88E5F700D7C8E2 /* displayUsageModule@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104841A88E5F700D7C8E2 /* displayUsageModule@2x.png */; };
    9F3107911A88E5F700D7C8E2 /* one-box-default.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104851A88E5F700D7C8E2 /* one-box-default.png */; };
    9F3107941A88E5F700D7C8E2 /* arrowRightDirection.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104891A88E5F700D7C8E2 /* arrowRightDirection.png */; };
    9F3107951A88E5F700D7C8E2 /* arrowRightDirection@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31048A1A88E5F700D7C8E2 /* arrowRightDirection@2x.png */; };
    9F3107961A88E5F700D7C8E2 /* arrowUpDirection.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31048B1A88E5F700D7C8E2 /* arrowUpDirection.png */; };
    9F3107971A88E5F700D7C8E2 /* arrowUpDirection@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31048C1A88E5F700D7C8E2 /* arrowUpDirection@2x.png */; };
    9F3107981A88E5F700D7C8E2 /* face.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31048D1A88E5F700D7C8E2 /* face.png */; };
    9F3107991A88E5F700D7C8E2 /* face@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31048E1A88E5F700D7C8E2 /* face@2x.png */; };
    9F31079A1A88E5F700D7C8E2 /* fotoCarpi.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31048F1A88E5F700D7C8E2 /* fotoCarpi.png */; };
    9F31079B1A88E5F700D7C8E2 /* fotoCarpi@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104901A88E5F700D7C8E2 /* fotoCarpi@2x.png */; };
    9F31079C1A88E5F700D7C8E2 /* fotoCek.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104911A88E5F700D7C8E2 /* fotoCek.png */; };
    9F31079D1A88E5F700D7C8E2 /* fotoCek@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104921A88E5F700D7C8E2 /* fotoCek@2x.png */; };
    9F31079E1A88E5F700D7C8E2 /* fotoSec.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104931A88E5F700D7C8E2 /* fotoSec.png */; };
    9F31079F1A88E5F700D7C8E2 /* fotoSec@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104941A88E5F700D7C8E2 /* fotoSec@2x.png */; };
    9F3107A01A88E5F700D7C8E2 /* grayphoneicon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104951A88E5F700D7C8E2 /* grayphoneicon.png */; };
    9F3107A11A88E5F700D7C8E2 /* grayphoneicon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104961A88E5F700D7C8E2 /* grayphoneicon@2x.png */; };
    9F3107A21A88E5F700D7C8E2 /* iphone4_image.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104971A88E5F700D7C8E2 /* iphone4_image.png */; };
    9F3107A31A88E5F700D7C8E2 /* iphone4_image@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104981A88E5F700D7C8E2 /* iphone4_image@2x.png */; };
    9F3107A41A88E5F700D7C8E2 /* iphone5_image.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104991A88E5F700D7C8E2 /* iphone5_image.png */; };
    9F3107A51A88E5F700D7C8E2 /* iphone5_image@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31049A1A88E5F700D7C8E2 /* iphone5_image@2x.png */; };
    9F3107A61A88E5F700D7C8E2 /* iphone_image.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31049B1A88E5F700D7C8E2 /* iphone_image.png */; };
    9F3107A71A88E5F700D7C8E2 /* iphone_image@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31049C1A88E5F700D7C8E2 /* iphone_image@2x.png */; };
    9F3107A81A88E5F700D7C8E2 /* kaydet.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31049D1A88E5F700D7C8E2 /* kaydet.png */; };
    9F3107A91A88E5F700D7C8E2 /* kaydet@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31049E1A88E5F700D7C8E2 /* kaydet@2x.png */; };
    9F3107AA1A88E5F700D7C8E2 /* RG_switch.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31049F1A88E5F700D7C8E2 /* RG_switch.png */; };
    9F3107AB1A88E5F700D7C8E2 /* RG_switch@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A01A88E5F700D7C8E2 /* RG_switch@2x.png */; };
    9F3107AC1A88E5F700D7C8E2 /* TC_sett_call.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A11A88E5F700D7C8E2 /* TC_sett_call.png */; };
    9F3107AD1A88E5F700D7C8E2 /* TC_sett_call@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A21A88E5F700D7C8E2 /* TC_sett_call@2x.png */; };
    9F3107AE1A88E5F700D7C8E2 /* TC_sett_data.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A31A88E5F700D7C8E2 /* TC_sett_data.png */; };
    9F3107AF1A88E5F700D7C8E2 /* TC_sett_data@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A41A88E5F700D7C8E2 /* TC_sett_data@2x.png */; };
    9F3107B01A88E5F700D7C8E2 /* TC_sett_iconavatarON.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A51A88E5F700D7C8E2 /* TC_sett_iconavatarON.png */; };
    9F3107B11A88E5F700D7C8E2 /* TC_sett_iconavatarON@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A61A88E5F700D7C8E2 /* TC_sett_iconavatarON@2x.png */; };
    9F3107B21A88E5F700D7C8E2 /* TC_sett_line.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A71A88E5F700D7C8E2 /* TC_sett_line.png */; };
    9F3107B31A88E5F700D7C8E2 /* TC_sett_line@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A81A88E5F700D7C8E2 /* TC_sett_line@2x.png */; };
    9F3107B41A88E5F700D7C8E2 /* TC_sett_linesett.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104A91A88E5F700D7C8E2 /* TC_sett_linesett.png */; };
    9F3107B51A88E5F700D7C8E2 /* TC_sett_linesett@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104AA1A88E5F700D7C8E2 /* TC_sett_linesett@2x.png */; };
    9F3107B81A88E5F700D7C8E2 /* TC_sett_notifications.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104AD1A88E5F700D7C8E2 /* TC_sett_notifications.png */; };
    9F3107B91A88E5F700D7C8E2 /* TC_sett_notifications@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104AE1A88E5F700D7C8E2 /* TC_sett_notifications@2x.png */; };
    9F3107BA1A88E5F700D7C8E2 /* TC_sett_password.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104AF1A88E5F700D7C8E2 /* TC_sett_password.png */; };
    9F3107BB1A88E5F700D7C8E2 /* TC_sett_password@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B01A88E5F700D7C8E2 /* TC_sett_password@2x.png */; };
    9F3107BC1A88E5F700D7C8E2 /* TC_sett_sms.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B11A88E5F700D7C8E2 /* TC_sett_sms.png */; };
    9F3107BD1A88E5F700D7C8E2 /* TC_sett_sms@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B21A88E5F700D7C8E2 /* TC_sett_sms@2x.png */; };
    9F3107BE1A88E5F700D7C8E2 /* TC_sett_tpay.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B31A88E5F700D7C8E2 /* TC_sett_tpay.png */; };
    9F3107BF1A88E5F700D7C8E2 /* TC_sett_tpay@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B41A88E5F700D7C8E2 /* TC_sett_tpay@2x.png */; };
    9F3107C01A88E5F700D7C8E2 /* togg_select.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B51A88E5F700D7C8E2 /* togg_select.png */; };
    9F3107C11A88E5F700D7C8E2 /* togg_select@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B61A88E5F700D7C8E2 /* togg_select@2x.png */; };
    9F3107C21A88E5F700D7C8E2 /* togg_unselect.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B71A88E5F700D7C8E2 /* togg_unselect.png */; };
    9F3107C31A88E5F700D7C8E2 /* togg_unselect@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104B81A88E5F700D7C8E2 /* togg_unselect@2x.png */; };
    9F3107C41A88E5F700D7C8E2 /* deepPurple.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104BA1A88E5F700D7C8E2 /* deepPurple.png */; };
    9F3107C51A88E5F700D7C8E2 /* deepPurple2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104BB1A88E5F700D7C8E2 /* deepPurple2.png */; };
    9F3107C61A88E5F700D7C8E2 /* deepPurple@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104BC1A88E5F700D7C8E2 /* deepPurple@2x.png */; };
    9F3107C71A88E5F700D7C8E2 /* deepPurpleB.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104BD1A88E5F700D7C8E2 /* deepPurpleB.png */; };
    9F3107C81A88E5F700D7C8E2 /* deepPurpleB@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104BE1A88E5F700D7C8E2 /* deepPurpleB@2x.png */; };
    9F3107C91A88E5F700D7C8E2 /* gri.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104BF1A88E5F700D7C8E2 /* gri.png */; };
    9F3107CA1A88E5F700D7C8E2 /* gri2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104C01A88E5F700D7C8E2 /* gri2.png */; };
    9F3107CB1A88E5F700D7C8E2 /* gri@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104C11A88E5F700D7C8E2 /* gri@2x.png */; };
    9F3107CC1A88E5F700D7C8E2 /* griB.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104C21A88E5F700D7C8E2 /* griB.png */; };
    9F3107CD1A88E5F700D7C8E2 /* griB@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104C31A88E5F700D7C8E2 /* griB@2x.png */; };
    9F3107D01A88E5F700D7C8E2 /* mavi.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104C61A88E5F700D7C8E2 /* mavi.png */; };
    9F3107D11A88E5F700D7C8E2 /* mavi2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104C71A88E5F700D7C8E2 /* mavi2.png */; };
    9F3107D21A88E5F700D7C8E2 /* mavi@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104C81A88E5F700D7C8E2 /* mavi@2x.png */; };
    9F3107D31A88E5F700D7C8E2 /* maviB.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104C91A88E5F700D7C8E2 /* maviB.png */; };
    9F3107D41A88E5F700D7C8E2 /* maviB@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104CA1A88E5F700D7C8E2 /* maviB@2x.png */; };
    9F3107D61A88E5F700D7C8E2 /* storeshadow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104CC1A88E5F700D7C8E2 /* storeshadow.png */; };
    9F3107D71A88E5F700D7C8E2 /* storeshadow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104CD1A88E5F700D7C8E2 /* storeshadow@2x.png */; };
    9F3107D81A88E5F700D7C8E2 /* storeturkcellLogo.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104CE1A88E5F700D7C8E2 /* storeturkcellLogo.png */; };
    9F3107D91A88E5F700D7C8E2 /* storeturkcellLogo@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104CF1A88E5F700D7C8E2 /* storeturkcellLogo@2x.png */; };
    9F3107DA1A88E5F700D7C8E2 /* storeturkcellLogoTruncu.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104D01A88E5F700D7C8E2 /* storeturkcellLogoTruncu.png */; };
    9F3107DB1A88E5F700D7C8E2 /* storeturkcellLogoturuncu@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104D11A88E5F700D7C8E2 /* storeturkcellLogoturuncu@2x.png */; };
    9F3107DC1A88E5F700D7C8E2 /* TC_Map_Home.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104D21A88E5F700D7C8E2 /* TC_Map_Home.png */; };
    9F3107DD1A88E5F700D7C8E2 /* TC_Map_Home@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104D31A88E5F700D7C8E2 /* TC_Map_Home@2x.png */; };
    9F3107DE1A88E5F700D7C8E2 /* TC_pin.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104D41A88E5F700D7C8E2 /* TC_pin.png */; };
    9F3107DF1A88E5F700D7C8E2 /* TC_pin@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104D51A88E5F700D7C8E2 /* TC_pin@2x.png */; };
    9F3107E01A88E5F700D7C8E2 /* TC_SL_boxbigarrow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104D61A88E5F700D7C8E2 /* TC_SL_boxbigarrow.png */; };
    9F3107E11A88E5F700D7C8E2 /* TC_SL_boxbigarrow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104D71A88E5F700D7C8E2 /* TC_SL_boxbigarrow@2x.png */; };
    9F3107E81A88E5F700D7C8E2 /* TC_SL_locationpin.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104DE1A88E5F700D7C8E2 /* TC_SL_locationpin.png */; };
    9F3107E91A88E5F700D7C8E2 /* TC_SL_locationpin@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104DF1A88E5F700D7C8E2 /* TC_SL_locationpin@2x.png */; };
    9F3107EA1A88E5F700D7C8E2 /* TC_SL_pin.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E01A88E5F700D7C8E2 /* TC_SL_pin.png */; };
    9F3107EB1A88E5F700D7C8E2 /* TC_SL_pin@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E11A88E5F700D7C8E2 /* TC_SL_pin@2x.png */; };
    9F3107EC1A88E5F700D7C8E2 /* TC_SL_searchbox_blue.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E21A88E5F700D7C8E2 /* TC_SL_searchbox_blue.png */; };
    9F3107ED1A88E5F700D7C8E2 /* TC_SL_searchbox_blue@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E31A88E5F700D7C8E2 /* TC_SL_searchbox_blue@2x.png */; };
    9F3107EE1A88E5F700D7C8E2 /* TC_SL_searchbox_default.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E41A88E5F700D7C8E2 /* TC_SL_searchbox_default.png */; };
    9F3107EF1A88E5F700D7C8E2 /* Tc_SL_searchbox_default@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E51A88E5F700D7C8E2 /* Tc_SL_searchbox_default@2x.png */; };
    9F3107F01A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E61A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon.png */; };
    9F3107F11A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E71A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon@2x.png */; };
    9F3107F21A88E5F700D7C8E2 /* TC_SL_searchnearbybox.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E81A88E5F700D7C8E2 /* TC_SL_searchnearbybox.png */; };
    9F3107F31A88E5F700D7C8E2 /* TC_SL_searchnearbybox@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104E91A88E5F700D7C8E2 /* TC_SL_searchnearbybox@2x.png */; };
    9F3107F61A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104EC1A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1.png */; };
    9F3107F71A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104ED1A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1@2x.png */; };
    9F3107F81A88E5F700D7C8E2 /* turuncu.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104EE1A88E5F700D7C8E2 /* turuncu.png */; };
    9F3107F91A88E5F700D7C8E2 /* turuncu@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104EF1A88E5F700D7C8E2 /* turuncu@2x.png */; };
    9F3107FA1A88E5F700D7C8E2 /* turuncuB.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104F01A88E5F700D7C8E2 /* turuncuB.png */; };
    9F3107FB1A88E5F700D7C8E2 /* turuncuB@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104F11A88E5F700D7C8E2 /* turuncuB@2x.png */; };
    9F3107FC1A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104F41A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT.png */; };
    9F3107FD1A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104F51A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@2x.png */; };
    9F3107FE1A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104F61A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@3x.png */; };
    9F3107FF1A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104F71A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT.png */; };
    9F3108001A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104F81A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@2x.png */; };
    9F3108011A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104F91A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@3x.png */; };
    9F3108021A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104FA1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT.png */; };
    9F3108031A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104FB1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@2x.png */; };
    9F3108041A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104FC1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@3x.png */; };
    9F3108051A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104FD1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT.png */; };
    9F3108061A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104FE1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@2x.png */; };
    9F3108071A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3104FF1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@3x.png */; };
    9F3108081A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105001A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT.png */; };
    9F3108091A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105011A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@2x.png */; };
    9F31080A1A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105021A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@3x.png */; };
    9F31080B1A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105031A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT.png */; };
    9F31080C1A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105041A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@2x.png */; };
    9F31080D1A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105051A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@3x.png */; };
    9F31080E1A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105061A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT.png */; };
    9F31080F1A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105071A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@2x.png */; };
    9F3108101A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105081A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@3x.png */; };
    9F3108111A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105091A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT.png */; };
    9F3108121A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31050A1A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@2x.png */; };
    9F3108131A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31050B1A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@3x.png */; };
    9F3108141A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31050C1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT.png */; };
    9F3108151A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31050D1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@2x.png */; };
    9F3108161A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31050E1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@3x.png */; };
    9F3108171A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31050F1A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT.png */; };
    9F3108181A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105101A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@2x.png */; };
    9F3108191A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105111A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@3x.png */; };
    9F31081A1A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105121A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT.png */; };
    9F31081B1A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105131A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@2x.png */; };
    9F31081C1A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105141A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@3x.png */; };
    9F31081D1A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105151A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT.png */; };
    9F31081E1A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105161A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@2x.png */; };
    9F31081F1A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105171A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@3x.png */; };
    9F3108221A88E5F700D7C8E2 /* TC_tu_phone@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31051A1A88E5F700D7C8E2 /* TC_tu_phone@3x.png */; };
    9F3108231A88E5F700D7C8E2 /* RG_tu_arrow010_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31051C1A88E5F700D7C8E2 /* RG_tu_arrow010_UP.png */; };
    9F3108241A88E5F700D7C8E2 /* RG_tu_arrow010_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31051D1A88E5F700D7C8E2 /* RG_tu_arrow010_UP@2x.png */; };
    9F3108251A88E5F700D7C8E2 /* RG_tu_arrow010_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31051E1A88E5F700D7C8E2 /* RG_tu_arrow010_UP@3x.png */; };
    9F3108261A88E5F700D7C8E2 /* RG_tu_arrow011_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31051F1A88E5F700D7C8E2 /* RG_tu_arrow011_UP.png */; };
    9F3108271A88E5F700D7C8E2 /* RG_tu_arrow011_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105201A88E5F700D7C8E2 /* RG_tu_arrow011_UP@2x.png */; };
    9F3108281A88E5F700D7C8E2 /* RG_tu_arrow011_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105211A88E5F700D7C8E2 /* RG_tu_arrow011_UP@3x.png */; };
    9F3108291A88E5F700D7C8E2 /* RG_tu_arrow012_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105221A88E5F700D7C8E2 /* RG_tu_arrow012_UP.png */; };
    9F31082A1A88E5F700D7C8E2 /* RG_tu_arrow012_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105231A88E5F700D7C8E2 /* RG_tu_arrow012_UP@2x.png */; };
    9F31082B1A88E5F700D7C8E2 /* RG_tu_arrow012_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105241A88E5F700D7C8E2 /* RG_tu_arrow012_UP@3x.png */; };
    9F31082C1A88E5F700D7C8E2 /* RG_tu_arrow01_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105251A88E5F700D7C8E2 /* RG_tu_arrow01_UP.png */; };
    9F31082D1A88E5F700D7C8E2 /* RG_tu_arrow01_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105261A88E5F700D7C8E2 /* RG_tu_arrow01_UP@2x.png */; };
    9F31082E1A88E5F700D7C8E2 /* RG_tu_arrow01_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105271A88E5F700D7C8E2 /* RG_tu_arrow01_UP@3x.png */; };
    9F31082F1A88E5F700D7C8E2 /* RG_tu_arrow02_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105281A88E5F700D7C8E2 /* RG_tu_arrow02_UP.png */; };
    9F3108301A88E5F700D7C8E2 /* RG_tu_arrow02_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105291A88E5F700D7C8E2 /* RG_tu_arrow02_UP@2x.png */; };
    9F3108311A88E5F700D7C8E2 /* RG_tu_arrow02_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31052A1A88E5F700D7C8E2 /* RG_tu_arrow02_UP@3x.png */; };
    9F3108321A88E5F700D7C8E2 /* RG_tu_arrow03_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31052B1A88E5F700D7C8E2 /* RG_tu_arrow03_UP.png */; };
    9F3108331A88E5F700D7C8E2 /* RG_tu_arrow03_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31052C1A88E5F700D7C8E2 /* RG_tu_arrow03_UP@2x.png */; };
    9F3108341A88E5F700D7C8E2 /* RG_tu_arrow03_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31052D1A88E5F700D7C8E2 /* RG_tu_arrow03_UP@3x.png */; };
    9F3108351A88E5F700D7C8E2 /* RG_tu_arrow04_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31052E1A88E5F700D7C8E2 /* RG_tu_arrow04_UP.png */; };
    9F3108361A88E5F700D7C8E2 /* RG_tu_arrow04_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31052F1A88E5F700D7C8E2 /* RG_tu_arrow04_UP@2x.png */; };
    9F3108371A88E5F700D7C8E2 /* RG_tu_arrow04_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105301A88E5F700D7C8E2 /* RG_tu_arrow04_UP@3x.png */; };
    9F3108381A88E5F700D7C8E2 /* RG_tu_arrow05_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105311A88E5F700D7C8E2 /* RG_tu_arrow05_UP.png */; };
    9F3108391A88E5F700D7C8E2 /* RG_tu_arrow05_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105321A88E5F700D7C8E2 /* RG_tu_arrow05_UP@2x.png */; };
    9F31083A1A88E5F700D7C8E2 /* RG_tu_arrow05_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105331A88E5F700D7C8E2 /* RG_tu_arrow05_UP@3x.png */; };
    9F31083B1A88E5F700D7C8E2 /* RG_tu_arrow06_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105341A88E5F700D7C8E2 /* RG_tu_arrow06_UP.png */; };
    9F31083C1A88E5F700D7C8E2 /* RG_tu_arrow06_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105351A88E5F700D7C8E2 /* RG_tu_arrow06_UP@2x.png */; };
    9F31083D1A88E5F700D7C8E2 /* RG_tu_arrow06_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105361A88E5F700D7C8E2 /* RG_tu_arrow06_UP@3x.png */; };
    9F31083E1A88E5F700D7C8E2 /* RG_tu_arrow07_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105371A88E5F700D7C8E2 /* RG_tu_arrow07_UP.png */; };
    9F31083F1A88E5F700D7C8E2 /* RG_tu_arrow07_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105381A88E5F700D7C8E2 /* RG_tu_arrow07_UP@2x.png */; };
    9F3108401A88E5F700D7C8E2 /* RG_tu_arrow07_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105391A88E5F700D7C8E2 /* RG_tu_arrow07_UP@3x.png */; };
    9F3108411A88E5F700D7C8E2 /* RG_tu_arrow08_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31053A1A88E5F700D7C8E2 /* RG_tu_arrow08_UP.png */; };
    9F3108421A88E5F700D7C8E2 /* RG_tu_arrow08_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31053B1A88E5F700D7C8E2 /* RG_tu_arrow08_UP@2x.png */; };
    9F3108431A88E5F700D7C8E2 /* RG_tu_arrow08_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31053C1A88E5F700D7C8E2 /* RG_tu_arrow08_UP@3x.png */; };
    9F3108441A88E5F700D7C8E2 /* RG_tu_arrow09_UP.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31053D1A88E5F700D7C8E2 /* RG_tu_arrow09_UP.png */; };
    9F3108451A88E5F700D7C8E2 /* RG_tu_arrow09_UP@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31053E1A88E5F700D7C8E2 /* RG_tu_arrow09_UP@2x.png */; };
    9F3108461A88E5F700D7C8E2 /* RG_tu_arrow09_UP@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31053F1A88E5F700D7C8E2 /* RG_tu_arrow09_UP@3x.png */; };
    9F3108471A88E5F700D7C8E2 /* buttonGray.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105401A88E5F700D7C8E2 /* buttonGray.png */; };
    9F3108481A88E5F700D7C8E2 /* buttonGray@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105411A88E5F700D7C8E2 /* buttonGray@2x.png */; };
    9F3108491A88E5F700D7C8E2 /* buttonGray@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105421A88E5F700D7C8E2 /* buttonGray@3x.png */; };
    9F31084A1A88E5F700D7C8E2 /* buttonYellow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105431A88E5F700D7C8E2 /* buttonYellow.png */; };
    9F31084B1A88E5F700D7C8E2 /* buttonYellow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105441A88E5F700D7C8E2 /* buttonYellow@2x.png */; };
    9F31084C1A88E5F700D7C8E2 /* buttonYellow@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105451A88E5F700D7C8E2 /* buttonYellow@3x.png */; };
    9F31084D1A88E5F700D7C8E2 /* check.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105461A88E5F700D7C8E2 /* check.png */; };
    9F31084E1A88E5F700D7C8E2 /* check@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105471A88E5F700D7C8E2 /* check@2x.png */; };
    9F31084F1A88E5F700D7C8E2 /* check@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105481A88E5F700D7C8E2 /* check@3x.png */; };
    9F3108501A88E5F700D7C8E2 /* checkBox.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105491A88E5F700D7C8E2 /* checkBox.png */; };
    9F3108511A88E5F700D7C8E2 /* checkBox@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31054A1A88E5F700D7C8E2 /* checkBox@2x.png */; };
    9F3108521A88E5F700D7C8E2 /* checkBox@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31054B1A88E5F700D7C8E2 /* checkBox@3x.png */; };
    9F3108531A88E5F700D7C8E2 /* close_icon_blue.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31054C1A88E5F700D7C8E2 /* close_icon_blue.png */; };
    9F3108541A88E5F700D7C8E2 /* close_icon_blue@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31054D1A88E5F700D7C8E2 /* close_icon_blue@2x.png */; };
    9F3108551A88E5F700D7C8E2 /* close_icon_blue@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31054E1A88E5F700D7C8E2 /* close_icon_blue@3x.png */; };
    9F3108561A88E5F700D7C8E2 /* close_icon_gray.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31054F1A88E5F700D7C8E2 /* close_icon_gray.png */; };
    9F3108571A88E5F700D7C8E2 /* close_icon_gray@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105501A88E5F700D7C8E2 /* close_icon_gray@2x.png */; };
    9F3108581A88E5F700D7C8E2 /* close_icon_gray@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105511A88E5F700D7C8E2 /* close_icon_gray@3x.png */; };
    9F3108591A88E5F700D7C8E2 /* makePaymentButton.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105521A88E5F700D7C8E2 /* makePaymentButton.png */; };
    9F31085A1A88E5F700D7C8E2 /* makePaymentButton@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105531A88E5F700D7C8E2 /* makePaymentButton@2x.png */; };
    9F31085B1A88E5F700D7C8E2 /* 3G.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105551A88E5F700D7C8E2 /* 3G.png */; };
    9F31085C1A88E5F700D7C8E2 /* 3G2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105561A88E5F700D7C8E2 /* 3G2.png */; };
    9F31085D1A88E5F700D7C8E2 /* 3G2@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105571A88E5F700D7C8E2 /* 3G2@2x.png */; };
    9F31085E1A88E5F700D7C8E2 /* 3G2@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105581A88E5F700D7C8E2 /* 3G2@3x.png */; };
    9F31085F1A88E5F700D7C8E2 /* 3G@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105591A88E5F700D7C8E2 /* 3G@2x.png */; };
    9F3108601A88E5F700D7C8E2 /* 3G@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31055A1A88E5F700D7C8E2 /* 3G@3x.png */; };
    9F3108611A88E5F700D7C8E2 /* bilgisayar.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31055B1A88E5F700D7C8E2 /* bilgisayar.png */; };
    9F3108621A88E5F700D7C8E2 /* bilgisayar2.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31055C1A88E5F700D7C8E2 /* bilgisayar2.png */; };
    9F3108631A88E5F700D7C8E2 /* bilgisayar2@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31055D1A88E5F700D7C8E2 /* bilgisayar2@2x.png */; };
    9F3108641A88E5F700D7C8E2 /* bilgisayar2@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31055E1A88E5F700D7C8E2 /* bilgisayar2@3x.png */; };
    9F3108651A88E5F700D7C8E2 /* bilgisayar@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31055F1A88E5F700D7C8E2 /* bilgisayar@2x.png */; };
    9F3108661A88E5F700D7C8E2 /* bilgisayar@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105601A88E5F700D7C8E2 /* bilgisayar@3x.png */; };
    9F3108671A88E5F700D7C8E2 /* Nar_gri.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105611A88E5F700D7C8E2 /* Nar_gri.png */; };
    9F3108681A88E5F700D7C8E2 /* Nar_gri@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105621A88E5F700D7C8E2 /* Nar_gri@2x.png */; };
    9F3108691A88E5F700D7C8E2 /* Nar_gri@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105631A88E5F700D7C8E2 /* Nar_gri@3x.png */; };
    9F31086A1A88E5F700D7C8E2 /* Nar_mavi.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105641A88E5F700D7C8E2 /* Nar_mavi.png */; };
    9F31086B1A88E5F700D7C8E2 /* Nar_mavi@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105651A88E5F700D7C8E2 /* Nar_mavi@2x.png */; };
    9F31086C1A88E5F700D7C8E2 /* Nar_mavi@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105661A88E5F700D7C8E2 /* Nar_mavi@3x.png */; };
    9F31086D1A88E5F700D7C8E2 /* 3G2_t.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105681A88E5F700D7C8E2 /* 3G2_t.png */; };
    9F31086E1A88E5F700D7C8E2 /* 3G2_t@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105691A88E5F700D7C8E2 /* 3G2_t@2x.png */; };
    9F31086F1A88E5F700D7C8E2 /* 3G2_t@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31056A1A88E5F700D7C8E2 /* 3G2_t@3x.png */; };
    9F3108701A88E5F700D7C8E2 /* bilgisayar2_t.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31056B1A88E5F700D7C8E2 /* bilgisayar2_t.png */; };
    9F3108711A88E5F700D7C8E2 /* bilgisayar2_t@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31056C1A88E5F700D7C8E2 /* bilgisayar2_t@2x.png */; };
    9F3108721A88E5F700D7C8E2 /* bilgisayar2_t@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31056D1A88E5F700D7C8E2 /* bilgisayar2_t@3x.png */; };
    9F3108731A88E5F700D7C8E2 /* Nar_mavi_t.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31056E1A88E5F700D7C8E2 /* Nar_mavi_t.png */; };
    9F3108741A88E5F700D7C8E2 /* Nar_mavi_t@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31056F1A88E5F700D7C8E2 /* Nar_mavi_t@2x.png */; };
    9F3108751A88E5F700D7C8E2 /* Nar_mavi_t@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105701A88E5F700D7C8E2 /* Nar_mavi_t@3x.png */; };
    9F3108761A88E5F700D7C8E2 /* TL_beyaz_t.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105711A88E5F700D7C8E2 /* TL_beyaz_t.png */; };
    9F3108771A88E5F700D7C8E2 /* TL_beyaz_t@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105721A88E5F700D7C8E2 /* TL_beyaz_t@2x.png */; };
    9F3108781A88E5F700D7C8E2 /* TL_beyaz_t@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105731A88E5F700D7C8E2 /* TL_beyaz_t@3x.png */; };
    9F3108791A88E5F700D7C8E2 /* TL_mavi_t.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105741A88E5F700D7C8E2 /* TL_mavi_t.png */; };
    9F31087A1A88E5F700D7C8E2 /* TL_mavi_t@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105751A88E5F700D7C8E2 /* TL_mavi_t@2x.png */; };
    9F31087B1A88E5F700D7C8E2 /* TL_mavi_t@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105761A88E5F700D7C8E2 /* TL_mavi_t@3x.png */; };
    9F31087C1A88E5F700D7C8E2 /* TL_gri.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105771A88E5F700D7C8E2 /* TL_gri.png */; };
    9F31087D1A88E5F700D7C8E2 /* TL_gri@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105781A88E5F700D7C8E2 /* TL_gri@2x.png */; };
    9F31087E1A88E5F700D7C8E2 /* TL_gri@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105791A88E5F700D7C8E2 /* TL_gri@3x.png */; };
    9F31087F1A88E5F700D7C8E2 /* TL_mavi.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31057A1A88E5F700D7C8E2 /* TL_mavi.png */; };
    9F3108801A88E5F700D7C8E2 /* TL_mavi@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31057B1A88E5F700D7C8E2 /* TL_mavi@2x.png */; };
    9F3108811A88E5F700D7C8E2 /* TL_mavi@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31057C1A88E5F700D7C8E2 /* TL_mavi@3x.png */; };
    9F3108821A88E5F700D7C8E2 /* tc_address_book.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31057D1A88E5F700D7C8E2 /* tc_address_book.png */; };
    9F3108831A88E5F700D7C8E2 /* tc_address_book@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31057E1A88E5F700D7C8E2 /* tc_address_book@2x.png */; };
    9F3108841A88E5F700D7C8E2 /* tc_address_book@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31057F1A88E5F700D7C8E2 /* tc_address_book@3x.png */; };
    9F3108851A88E5F700D7C8E2 /* tc_amex.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105801A88E5F700D7C8E2 /* tc_amex.png */; };
    9F3108861A88E5F700D7C8E2 /* tc_amex@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105811A88E5F700D7C8E2 /* tc_amex@2x.png */; };
    9F3108871A88E5F700D7C8E2 /* tc_master.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105821A88E5F700D7C8E2 /* tc_master.png */; };
    9F3108881A88E5F700D7C8E2 /* tc_master@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105831A88E5F700D7C8E2 /* tc_master@2x.png */; };
    9F3108891A88E5F700D7C8E2 /* TC_To_Up_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105841A88E5F700D7C8E2 /* TC_To_Up_icon.png */; };
    9F31088A1A88E5F700D7C8E2 /* TC_To_Up_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105851A88E5F700D7C8E2 /* TC_To_Up_icon@2x.png */; };
    9F31088B1A88E5F700D7C8E2 /* TC_topup_contact_cell_bg.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105861A88E5F700D7C8E2 /* TC_topup_contact_cell_bg.png */; };
    9F31088C1A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105871A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@2x.png */; };
    9F31088D1A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105881A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@3x.png */; };
    9F3108911A88E5F700D7C8E2 /* TC_topup_success.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31058C1A88E5F700D7C8E2 /* TC_topup_success.png */; };
    9F3108921A88E5F700D7C8E2 /* TC_topup_success@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31058D1A88E5F700D7C8E2 /* TC_topup_success@2x.png */; };
    9F3108931A88E5F700D7C8E2 /* TC_topup_success@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31058E1A88E5F700D7C8E2 /* TC_topup_success@3x.png */; };
    9F3108941A88E5F700D7C8E2 /* TC_tu_back_arrow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31058F1A88E5F700D7C8E2 /* TC_tu_back_arrow.png */; };
    9F3108951A88E5F700D7C8E2 /* TC_tu_back_arrow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105901A88E5F700D7C8E2 /* TC_tu_back_arrow@2x.png */; };
    9F3108961A88E5F700D7C8E2 /* TC_tu_data_icon_OFF.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105911A88E5F700D7C8E2 /* TC_tu_data_icon_OFF.png */; };
    9F3108971A88E5F700D7C8E2 /* TC_tu_data_icon_OFF@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105921A88E5F700D7C8E2 /* TC_tu_data_icon_OFF@2x.png */; };
    9F3108981A88E5F700D7C8E2 /* TC_tu_data_icon_ON.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105931A88E5F700D7C8E2 /* TC_tu_data_icon_ON.png */; };
    9F3108991A88E5F700D7C8E2 /* TC_tu_data_icon_ON@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105941A88E5F700D7C8E2 /* TC_tu_data_icon_ON@2x.png */; };
    9F31089A1A88E5F700D7C8E2 /* TC_tu_default_profile.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105951A88E5F700D7C8E2 /* TC_tu_default_profile.png */; };
    9F31089B1A88E5F700D7C8E2 /* TC_tu_default_profile@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105961A88E5F700D7C8E2 /* TC_tu_default_profile@2x.png */; };
    9F31089C1A88E5F700D7C8E2 /* TC_tu_default_profile@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105971A88E5F700D7C8E2 /* TC_tu_default_profile@3x.png */; };
    9F31089D1A88E5F700D7C8E2 /* TC_tu_info_btn.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105981A88E5F700D7C8E2 /* TC_tu_info_btn.png */; };
    9F31089E1A88E5F700D7C8E2 /* TC_tu_info_btn@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105991A88E5F700D7C8E2 /* TC_tu_info_btn@2x.png */; };
    9F31089F1A88E5F700D7C8E2 /* TC_tu_main_btn.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31059A1A88E5F700D7C8E2 /* TC_tu_main_btn.png */; };
    9F3108A01A88E5F700D7C8E2 /* TC_tu_main_btn@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31059B1A88E5F700D7C8E2 /* TC_tu_main_btn@2x.png */; };
    9F3108A11A88E5F700D7C8E2 /* TC_tu_main_btn@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31059C1A88E5F700D7C8E2 /* TC_tu_main_btn@3x.png */; };
    9F3108A21A88E5F700D7C8E2 /* TC_tu_main_lable_btn1.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31059D1A88E5F700D7C8E2 /* TC_tu_main_lable_btn1.png */; };
    9F3108A31A88E5F700D7C8E2 /* TC_tu_main_lable_btn1@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31059E1A88E5F700D7C8E2 /* TC_tu_main_lable_btn1@2x.png */; };
    9F3108A41A88E5F700D7C8E2 /* TC_tu_main_lable_btn3.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F31059F1A88E5F700D7C8E2 /* TC_tu_main_lable_btn3.png */; };
    9F3108A51A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A01A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@2x.png */; };
    9F3108A61A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A11A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@3x.png */; };
    9F3108A71A88E5F700D7C8E2 /* TC_tu_mobile.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A21A88E5F700D7C8E2 /* TC_tu_mobile.png */; };
    9F3108A81A88E5F700D7C8E2 /* TC_tu_mobile@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A31A88E5F700D7C8E2 /* TC_tu_mobile@2x.png */; };
    9F3108A91A88E5F700D7C8E2 /* TC_tu_mobile@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A41A88E5F700D7C8E2 /* TC_tu_mobile@3x.png */; };
    9F3108AA1A88E5F700D7C8E2 /* TC_tu_type_value_arrow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A51A88E5F700D7C8E2 /* TC_tu_type_value_arrow.png */; };
    9F3108AB1A88E5F700D7C8E2 /* TC_tu_type_value_arrow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A61A88E5F700D7C8E2 /* TC_tu_type_value_arrow@2x.png */; };
    9F3108AC1A88E5F700D7C8E2 /* TC_tu_type_value_arrow@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A71A88E5F700D7C8E2 /* TC_tu_type_value_arrow@3x.png */; };
    9F3108AD1A88E5F700D7C8E2 /* tc_visa.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A81A88E5F700D7C8E2 /* tc_visa.png */; };
    9F3108AE1A88E5F700D7C8E2 /* tc_visa@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105A91A88E5F700D7C8E2 /* tc_visa@2x.png */; };
    9F3108AF1A88E5F700D7C8E2 /* topup_gray_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105AA1A88E5F700D7C8E2 /* topup_gray_icon.png */; };
    9F3108B01A88E5F700D7C8E2 /* topup_gray_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105AB1A88E5F700D7C8E2 /* topup_gray_icon@2x.png */; };
    9F3108B11A88E5F700D7C8E2 /* topup_gray_icon@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105AC1A88E5F700D7C8E2 /* topup_gray_icon@3x.png */; };
    9F3108B21A88E5F700D7C8E2 /* topup_selected_op.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105AD1A88E5F700D7C8E2 /* topup_selected_op.png */; };
    9F3108B31A88E5F700D7C8E2 /* topup_selected_op@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105AE1A88E5F700D7C8E2 /* topup_selected_op@2x.png */; };
    9F3108B41A88E5F700D7C8E2 /* topup_selected_op@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105AF1A88E5F700D7C8E2 /* topup_selected_op@3x.png */; };
    9F3108B51A88E5F700D7C8E2 /* topup_unselected_op.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B01A88E5F700D7C8E2 /* topup_unselected_op.png */; };
    9F3108B61A88E5F700D7C8E2 /* topup_unselected_op@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B11A88E5F700D7C8E2 /* topup_unselected_op@2x.png */; };
    9F3108B71A88E5F700D7C8E2 /* topup_unselected_op@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B21A88E5F700D7C8E2 /* topup_unselected_op@3x.png */; };
    9F3108B81A88E5F700D7C8E2 /* topup_white_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B31A88E5F700D7C8E2 /* topup_white_icon.png */; };
    9F3108B91A88E5F700D7C8E2 /* topup_white_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B41A88E5F700D7C8E2 /* topup_white_icon@2x.png */; };
    9F3108BA1A88E5F700D7C8E2 /* carpi.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B61A88E5F700D7C8E2 /* carpi.png */; };
    9F3108BB1A88E5F700D7C8E2 /* carpi@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B71A88E5F700D7C8E2 /* carpi@2x.png */; };
    9F3108BC1A88E5F700D7C8E2 /* filterCarpi.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B81A88E5F700D7C8E2 /* filterCarpi.png */; };
    9F3108BD1A88E5F700D7C8E2 /* filterCarpi@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105B91A88E5F700D7C8E2 /* filterCarpi@2x.png */; };
    9F3108BE1A88E5F700D7C8E2 /* filterGray.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105BA1A88E5F700D7C8E2 /* filterGray.png */; };
    9F3108BF1A88E5F700D7C8E2 /* filterGray@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105BB1A88E5F700D7C8E2 /* filterGray@2x.png */; };
    9F3108C01A88E5F700D7C8E2 /* filterSiyah.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105BC1A88E5F700D7C8E2 /* filterSiyah.png */; };
    9F3108C11A88E5F700D7C8E2 /* filterSiyah@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105BD1A88E5F700D7C8E2 /* filterSiyah@2x.png */; };
    9F3108C21A88E5F700D7C8E2 /* inceleme.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105BE1A88E5F700D7C8E2 /* inceleme.png */; };
    9F3108C31A88E5F700D7C8E2 /* inceleme@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105BF1A88E5F700D7C8E2 /* inceleme@2x.png */; };
    9F3108C41A88E5F700D7C8E2 /* mavi4Mnt.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105C01A88E5F700D7C8E2 /* mavi4Mnt.png */; };
    9F3108C51A88E5F700D7C8E2 /* mavi4Mnt@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105C11A88E5F700D7C8E2 /* mavi4Mnt@2x.png */; };
    9F3108C61A88E5F700D7C8E2 /* RadioButton-Selected.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105C21A88E5F700D7C8E2 /* RadioButton-Selected.png */; };
    9F3108C71A88E5F700D7C8E2 /* RadioButton-Selected@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105C31A88E5F700D7C8E2 /* RadioButton-Selected@2x.png */; };
    9F3108C81A88E5F700D7C8E2 /* RadioButton-Unselected.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105C41A88E5F700D7C8E2 /* RadioButton-Unselected.png */; };
    9F3108C91A88E5F700D7C8E2 /* RadioButton-Unselected@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105C51A88E5F700D7C8E2 /* RadioButton-Unselected@2x.png */; };
    9F3108CA1A88E5F700D7C8E2 /* search_white.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105C61A88E5F700D7C8E2 /* search_white.png */; };
    9F3108CB1A88E5F700D7C8E2 /* search_white@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105C71A88E5F700D7C8E2 /* search_white@2x.png */; };
    9F3108CE1A88E5F700D7C8E2 /* TC_SS_default_chaticon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105CA1A88E5F700D7C8E2 /* TC_SS_default_chaticon.png */; };
    9F3108CF1A88E5F700D7C8E2 /* TC_SS_default_chaticon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105CB1A88E5F700D7C8E2 /* TC_SS_default_chaticon@2x.png */; };
    9F3108D01A88E5F700D7C8E2 /* TC_SS_default_searchHL.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105CC1A88E5F700D7C8E2 /* TC_SS_default_searchHL.png */; };
    9F3108D11A88E5F700D7C8E2 /* TC_SS_default_searchHL@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105CD1A88E5F700D7C8E2 /* TC_SS_default_searchHL@2x.png */; };
    9F3108D21A88E5F800D7C8E2 /* validation_fail_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105CF1A88E5F700D7C8E2 /* validation_fail_icon.png */; };
    9F3108D31A88E5F800D7C8E2 /* validation_fail_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D01A88E5F700D7C8E2 /* validation_fail_icon@2x.png */; };
    9F3108D41A88E5F800D7C8E2 /* validation_ok_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D11A88E5F700D7C8E2 /* validation_ok_icon.png */; };
    9F3108D51A88E5F800D7C8E2 /* validation_ok_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D21A88E5F700D7C8E2 /* validation_ok_icon@2x.png */; };
    9F3108D61A88E5F800D7C8E2 /* TC_MWV_back_arrow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D41A88E5F700D7C8E2 /* TC_MWV_back_arrow.png */; };
    9F3108D71A88E5F800D7C8E2 /* TC_MWV_back_arrow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D51A88E5F700D7C8E2 /* TC_MWV_back_arrow@2x.png */; };
    9F3108D81A88E5F800D7C8E2 /* TC_MWV_back_arrow@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D61A88E5F700D7C8E2 /* TC_MWV_back_arrow@3x.png */; };
    9F3108D91A88E5F800D7C8E2 /* TC_MWV_forward_arrow.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D71A88E5F700D7C8E2 /* TC_MWV_forward_arrow.png */; };
    9F3108DA1A88E5F800D7C8E2 /* TC_MWV_forward_arrow@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D81A88E5F700D7C8E2 /* TC_MWV_forward_arrow@2x.png */; };
    9F3108DB1A88E5F800D7C8E2 /* TC_MWV_forward_arrow@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105D91A88E5F700D7C8E2 /* TC_MWV_forward_arrow@3x.png */; };
    9F3108DC1A88E5F800D7C8E2 /* TC_MWV_logo.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105DA1A88E5F700D7C8E2 /* TC_MWV_logo.png */; };
    9F3108DD1A88E5F800D7C8E2 /* TC_MWV_logo@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105DB1A88E5F700D7C8E2 /* TC_MWV_logo@2x.png */; };
    9F3108DE1A88E5F800D7C8E2 /* TC_MWV_logo@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105DC1A88E5F700D7C8E2 /* TC_MWV_logo@3x.png */; };
    9F3108DF1A88E5F800D7C8E2 /* TC_MWV_refresh_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105DD1A88E5F700D7C8E2 /* TC_MWV_refresh_icon.png */; };
    9F3108E01A88E5F800D7C8E2 /* TC_MWV_refresh_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105DE1A88E5F700D7C8E2 /* TC_MWV_refresh_icon@2x.png */; };
    9F3108E11A88E5F800D7C8E2 /* TC_MWV_refresh_icon@3x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105DF1A88E5F700D7C8E2 /* TC_MWV_refresh_icon@3x.png */; };
    9F3108E21A88E5F800D7C8E2 /* TC_MWV_share_icon.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E01A88E5F700D7C8E2 /* TC_MWV_share_icon.png */; };
    9F3108E31A88E5F800D7C8E2 /* TC_MWV_share_icon@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E11A88E5F700D7C8E2 /* TC_MWV_share_icon@2x.png */; };
    9F3108E41A88E5F800D7C8E2 /* Default-568h@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E31A88E5F700D7C8E2 /* Default-568h@2x.png */; };
    9F3108E51A88E5F800D7C8E2 /* Default.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E41A88E5F700D7C8E2 /* Default.png */; };
    9F3108E61A88E5F800D7C8E2 /* Default@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E51A88E5F700D7C8E2 /* Default@2x.png */; };
    9F3108E71A88E5F800D7C8E2 /* Maltepe_Location.gpx in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E61A88E5F700D7C8E2 /* Maltepe_Location.gpx */; };
    9F3108E81A88E5F800D7C8E2 /* MenuSearch.plist in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E71A88E5F700D7C8E2 /* MenuSearch.plist */; };
    9F3108E91A88E5F800D7C8E2 /* NotificationSettings.plist in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E81A88E5F700D7C8E2 /* NotificationSettings.plist */; };
    9F3108EA1A88E5F800D7C8E2 /* OneBox.plist in Resources */ = {isa = PBXBuildFile; fileRef = 9F3105E91A88E5F700D7C8E2 /* OneBox.plist */; };
    9F3108F11A88E81F00D7C8E2 /* BaseView.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3108ED1A88E81F00D7C8E2 /* BaseView.m */; };
    9F3108F21A88E81F00D7C8E2 /* PagingScrollContainer.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3108EF1A88E81F00D7C8E2 /* PagingScrollContainer.m */; };
    9F3108F31A88E81F00D7C8E2 /* PagingScrollContainer.xib in Resources */ = {isa = PBXBuildFile; fileRef = 9F3108F01A88E81F00D7C8E2 /* PagingScrollContainer.xib */; };
    9F3108F81A88F69500D7C8E2 /* MySettingsVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3108F51A88F69500D7C8E2 /* MySettingsVC.m */; };
    9F3108F91A88F69500D7C8E2 /* SettingsVC.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F3108F71A88F69500D7C8E2 /* SettingsVC.m */; };
    9F4B57661A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.nolimit.notice&key=myAccountDashboardPageManager&type=0 in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57521A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.nolimit.notice&key=myAccountDashboardPageManager&type=0 */; };
    9F4B57671A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.notice&key=myAccountDashboardPageManager&type=0 in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57531A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.notice&key=myAccountDashboardPageManager&type=0 */; };
    9F4B57681A4ABF0B0055582A /* cms.json?desiredKey=native.storelocator.free&key=commonPageManager&type=0 in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57541A4ABF0B0055582A /* cms.json?desiredKey=native.storelocator.free&key=commonPageManager&type=0 */; };
    9F4B57691A4ABF0B0055582A /* cms.json?desiredKey=topup.native.weburl.tl&key=topUpPageManager&type=2 in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57551A4ABF0B0055582A /* cms.json?desiredKey=topup.native.weburl.tl&key=topUpPageManager&type=2 */; };
    9F4B576A1A4ABF0B0055582A /* giris.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57561A4ABF0B0055582A /* giris.json */; };
    9F4B576B1A4ABF0B0055582A /* kampanyalar.json?size=6 in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57571A4ABF0B0055582A /* kampanyalar.json?size=6 */; };
    9F4B576C1A4ABF0B0055582A /* menu.json?custType=0&menuType=0 in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57581A4ABF0B0055582A /* menu.json?custType=0&menuType=0 */; };
    9F4B576D1A4ABF0B0055582A /* property.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57591A4ABF0B0055582A /* property.json */; };
    9F4B576E1A4ABF0B0055582A /* urun-ve-hizmetler.json?size=6 in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B575A1A4ABF0B0055582A /* urun-ve-hizmetler.json?size=6 */; };
    9F4B576F1A4ABF0B0055582A /* hat.json?settingType=1 in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B575D1A4ABF0B0055582A /* hat.json?settingType=1 */; };
    9F4B57701A4ABF0B0055582A /* hatmenu.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B575E1A4ABF0B0055582A /* hatmenu.json */; };
    9F4B57711A4ABF0B0055582A /* dataprocesscheck.json?logintype=MSISDN in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B575F1A4ABF0B0055582A /* dataprocesscheck.json?logintype=MSISDN */; };
    9F4B57721A4ABF0B0055582A /* analiz.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57611A4ABF0B0055582A /* analiz.json */; };
    9F4B57731A4ABF0B0055582A /* anasayfa.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57621A4ABF0B0055582A /* anasayfa.json */; };
    9F4B57741A4ABF0B0055582A /* hatmenu.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57631A4ABF0B0055582A /* hatmenu.json */; };
    9F4B57751A4ABF0B0055582A /* kalankullanim.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57641A4ABF0B0055582A /* kalankullanim.json */; };
    9F4B57761A4ABF0B0055582A /* serviceLogin.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F4B57651A4ABF0B0055582A /* serviceLogin.json */; };
    9F4B57791A4AFAC70055582A /* AdjustHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F4B57781A4AFAC70055582A /* AdjustHelper.m */; };
    9F75BE4B1B093991006A9356 /* yetkili_onayi@1x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F75BE491B093991006A9356 /* yetkili_onayi@1x.png */; };
    9F75BE4C1B093991006A9356 /* yetkili_onayi@2x.png in Resources */ = {isa = PBXBuildFile; fileRef = 9F75BE4A1B093991006A9356 /* yetkili_onayi@2x.png */; };
    9F77E6FC1ACAFFE500A5139F /* AdSupport.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = 9F77E6FB1ACAFFE500A5139F /* AdSupport.framework */; };
    9F77E6FF1ACB00ED00A5139F /* BeaconHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F77E6FE1ACB00ED00A5139F /* BeaconHelper.m */; };
    9F77E7021ACC0EA700A5139F /* NSData+Base64V2.m in Sources */ = {isa = PBXBuildFile; fileRef = 9F77E7011ACC0EA700A5139F /* NSData+Base64V2.m */; };
    9F8D6DED1A91E4A800AECEC9 /* mail-gonder.json in Resources */ = {isa = PBXBuildFile; fileRef = 9F8D6DEC1A91E4A800AECEC9 /* mail-gonder.json */; };
    9FF2DE901A4C40390016523F /* topup.json?productType=1&payment=kk in Resources */ = {isa = PBXBuildFile; fileRef = 9FF2DE8F1A4C40390016523F /* topup.json?productType=1&payment=kk */; };
    9FF2DE921A4C40650016523F /* topup.json?productType=7&payment=kk in Resources */ = {isa = PBXBuildFile; fileRef = 9FF2DE911A4C40650016523F /* topup.json?productType=7&payment=kk */; };
    9FF2DE941A4C40910016523F /* kk-odeme.json in Resources */ = {isa = PBXBuildFile; fileRef = 9FF2DE931A4C40910016523F /* kk-odeme.json */; };
    9FF2DE961A4C40EF0016523F /* topup.json?productType=4&payment=kk in Resources */ = {isa = PBXBuildFile; fileRef = 9FF2DE951A4C40EF0016523F /* topup.json?productType=4&payment=kk */; };
    9FF2DE981A4C410B0016523F /* topup.json?productType=2&payment=kk in Resources */ = {isa = PBXBuildFile; fileRef = 9FF2DE971A4C410B0016523F /* topup.json?productType=2&payment=kk */; };
    A51278A3191D1818002CFE51 /* SettingsPageMenuViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = A51278A2191D1818002CFE51 /* SettingsPageMenuViewCell.m */; };
    A51278B6191D1922002CFE51 /* OnePopulerServiceView.m in Sources */ = {isa = PBXBuildFile; fileRef = A51278B3191D1922002CFE51 /* OnePopulerServiceView.m */; };
    A51278B7191D1922002CFE51 /* PopulerServicesView.m in Sources */ = {isa = PBXBuildFile; fileRef = A51278B5191D1922002CFE51 /* PopulerServicesView.m */; };
    A51FA58A190815C500737236 /* NSMutableURLRequest+Cookie.m in Sources */ = {isa = PBXBuildFile; fileRef = A51FA589190815C500737236 /* NSMutableURLRequest+Cookie.m */; };
    EBE763982DED43219B5458E3 /* libPods.a in Frameworks */ = {isa = PBXBuildFile; fileRef = 3FDF25214F9849DAA5743F50 /* libPods.a */; };
    EC01E447181E411B00626834 /* MyUsageVC.m in Sources */ = {isa = PBXBuildFile; fileRef = EC01E446181E411B00626834 /* MyUsageVC.m */; };
    EC01E44A181E41DE00626834 /* UsageRest.m in Sources */ = {isa = PBXBuildFile; fileRef = EC01E449181E41DE00626834 /* UsageRest.m */; };
    EC01E44D181E41F300626834 /* UsageRESTHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = EC01E44C181E41F300626834 /* UsageRESTHelper.m */; };
    EC1A0DC518DB05CA00F4B769 /* AudioToolbox.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = EC1A0DC418DB05CA00F4B769 /* AudioToolbox.framework */; };
    EC261EB218759D4B001BBBE7 /* LoggingRest.m in Sources */ = {isa = PBXBuildFile; fileRef = EC261EB118759D4B001BBBE7 /* LoggingRest.m */; };
    EC261EB71876D630001BBBE7 /* NSException+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = EC261EB61876D630001BBBE7 /* NSException+Extensions.m */; };
    EC261EBA1876E3EB001BBBE7 /* CustomException.m in Sources */ = {isa = PBXBuildFile; fileRef = EC261EB91876E3EB001BBBE7 /* CustomException.m */; };
    EC261EBC187AB8C0001BBBE7 /* GoogleMaps.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = EC261EBB187AB8C0001BBBE7 /* GoogleMaps.framework */; settings = {ATTRIBUTES = (Required, ); }; };
    EC261EBE187AB8D4001BBBE7 /* GoogleMaps.bundle in Resources */ = {isa = PBXBuildFile; fileRef = EC261EBD187AB8D4001BBBE7 /* GoogleMaps.bundle */; };
    EC3A34D818487AA000CA941E /* UIApplication+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = EC3A34D718487AA000CA941E /* UIApplication+Extensions.m */; };
    EC3C116818589AF400E04224 /* CMSRest.m in Sources */ = {isa = PBXBuildFile; fileRef = EC3C116718589AF400E04224 /* CMSRest.m */; };
    EC479AD4183A3EE2003DAC62 /* NotificationsVC.m in Sources */ = {isa = PBXBuildFile; fileRef = EC479AD3183A3EE2003DAC62 /* NotificationsVC.m */; };
    EC479AD7183A4027003DAC62 /* NotificationTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = EC479AD6183A4027003DAC62 /* NotificationTableViewCell.m */; };
    EC5B601118C8655300485F7A /* NetmeraHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = EC5B601018C8655300485F7A /* NetmeraHelper.m */; };
    EC5B601318C894AE00485F7A /* Accounts.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = EC5B601218C894AE00485F7A /* Accounts.framework */; };
    EC5B601518C894B300485F7A /* Twitter.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = EC5B601418C894B300485F7A /* Twitter.framework */; };
    EC5E45731845DD5200B77E37 /* MenuItem.m in Sources */ = {isa = PBXBuildFile; fileRef = EC5E45721845DD5200B77E37 /* MenuItem.m */; };
    EC5E459F1845F6E300B77E37 /* MBProgressHUD.m in Sources */ = {isa = PBXBuildFile; fileRef = EC5E45861845F6E300B77E37 /* MBProgressHUD.m */; };
    EC5E45A01845F6E300B77E37 /* MLPAutoCompleteTextField.m in Sources */ = {isa = PBXBuildFile; fileRef = EC5E45891845F6E300B77E37 /* MLPAutoCompleteTextField.m */; };
    EC5E45A11845F6E300B77E37 /* NSString+Levenshtein.m in Sources */ = {isa = PBXBuildFile; fileRef = EC5E458E1845F6E300B77E37 /* NSString+Levenshtein.m */; };
    EC5E45A41845F6E300B77E37 /* RadioButton.m in Sources */ = {isa = PBXBuildFile; fileRef = EC5E45931845F6E300B77E37 /* RadioButton.m */; };
    EC5E45A51845F6E300B77E37 /* RTLabel.m in Sources */ = {isa = PBXBuildFile; fileRef = EC5E45961845F6E300B77E37 /* RTLabel.m */; settings = {COMPILER_FLAGS = "-w"; }; };
    EC65338118891FB900AB9756 /* Stats.m in Sources */ = {isa = PBXBuildFile; fileRef = EC65338018891FB900AB9756 /* Stats.m */; settings = {COMPILER_FLAGS = "-w"; }; };
    EC65338718896E3800AB9756 /* UIImage+NoCached.m in Sources */ = {isa = PBXBuildFile; fileRef = EC65338618896E3800AB9756 /* UIImage+NoCached.m */; settings = {COMPILER_FLAGS = "-fno-objc-arc"; }; };
    EC67D811188FFDC800911F61 /* CoreFoundation.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = EC67D810188FFDC800911F61 /* CoreFoundation.framework */; };
    EC67D8141890040900911F61 /* CustomURL.m in Sources */ = {isa = PBXBuildFile; fileRef = EC67D8131890040900911F61 /* CustomURL.m */; };
    EC684F7C186AC6E000AF894F /* HomeLoginView.m in Sources */ = {isa = PBXBuildFile; fileRef = EC684F7B186AC6E000AF894F /* HomeLoginView.m */; };
    EC684FCB186C4FB000AF894F /* CFNetwork.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = EC684FCA186C4FB000AF894F /* CFNetwork.framework */; };
    EC684FCF186C5B1A00AF894F /* UDHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = EC684FCE186C5B1A00AF894F /* UDHelper.m */; };
    EC6D433418D1E6F80036E4FA /* NSMutableDictionary+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = EC6D433318D1E6F80036E4FA /* NSMutableDictionary+Extensions.m */; };
    EC709C9818D71EEF00B47D93 /* OneProductAndService.m in Sources */ = {isa = PBXBuildFile; fileRef = EC709C9518D71EEF00B47D93 /* OneProductAndService.m */; };
    EC709C9918D71EEF00B47D93 /* ProductAndServicesView.m in Sources */ = {isa = PBXBuildFile; fileRef = EC709C9718D71EEF00B47D93 /* ProductAndServicesView.m */; };
    EC709CA018D87F0700B47D93 /* SHUncaughtExceptionHandler.m in Sources */ = {isa = PBXBuildFile; fileRef = EC709C9F18D87F0700B47D93 /* SHUncaughtExceptionHandler.m */; settings = {COMPILER_FLAGS = "-fno-objc-arc"; }; };
    EC709CA318D87FAF00B47D93 /* PropertyRest.m in Sources */ = {isa = PBXBuildFile; fileRef = EC709CA218D87FAF00B47D93 /* PropertyRest.m */; };
    EC768B7118C087C500313288 /* AXRatingView.m in Sources */ = {isa = PBXBuildFile; fileRef = EC768B7018C087C500313288 /* AXRatingView.m */; };
    EC768B7518C09A3700313288 /* RSWeakifySelf.m in Sources */ = {isa = PBXBuildFile; fileRef = EC768B7418C09A3700313288 /* RSWeakifySelf.m */; };
    EC782483189F8FEC00DACEFD /* FakeDataSourceHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = EC782480189F8FEC00DACEFD /* FakeDataSourceHelper.m */; };
    EC78249118A0ED4C00DACEFD /* CustomRefreshControl.m in Sources */ = {isa = PBXBuildFile; fileRef = EC78249018A0ED4C00DACEFD /* CustomRefreshControl.m */; };
    EC7B43A718B2451100FC0334 /* UIColor+SharedColors.m in Sources */ = {isa = PBXBuildFile; fileRef = EC7B43A618B2451100FC0334 /* UIColor+SharedColors.m */; };
    EC821F991871A65A006EB1D0 /* CommonButton.m in Sources */ = {isa = PBXBuildFile; fileRef = EC821F981871A65A006EB1D0 /* CommonButton.m */; };
    EC8DC59C18B5F73C00E2768C /* TabButton.m in Sources */ = {isa = PBXBuildFile; fileRef = EC8DC59B18B5F73C00E2768C /* TabButton.m */; };
    EC8E91D6181E4B660079F0CC /* UsageItemTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = EC8E91D5181E4B660079F0CC /* UsageItemTableViewCell.m */; };
    EC97ACBB1796BE4500AB780D /* AllowanceRESTHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = EC97ACB61796BE4500AB780D /* AllowanceRESTHelper.m */; };
    EC97ACBC1796BE4500AB780D /* BillRESTHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = EC97ACB81796BE4500AB780D /* BillRESTHelper.m */; };
    EC97ACBD1796BE4500AB780D /* NotificationRESTHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = EC97ACBA1796BE4500AB780D /* NotificationRESTHelper.m */; };
    ECA259CA185F02260030ECFD /* NSArray+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259C9185F02260030ECFD /* NSArray+Extensions.m */; };
    ECA259CF185F40BA0030ECFD /* BaseVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259CC185F40BA0030ECFD /* BaseVC.m */; };
    ECA259D0185F40BA0030ECFD /* MenuVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259CE185F40BA0030ECFD /* MenuVC.m */; };
    ECA259E6185F40EF0030ECFD /* HomeVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259DA185F40EF0030ECFD /* HomeVC.m */; };
    ECA259E7185F40EF0030ECFD /* AppTourView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259DC185F40EF0030ECFD /* AppTourView.m */; };
    ECA259E8185F40EF0030ECFD /* AnonymousHomeVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259DE185F40EF0030ECFD /* AnonymousHomeVC.m */; };
    ECA259EE185F417E0030ECFD /* AllowanceButton.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259ED185F417E0030ECFD /* AllowanceButton.m */; };
    ECA25A29185F45020030ECFD /* BillHistoryButton.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259F2185F45020030ECFD /* BillHistoryButton.m */; };
    ECA25A2A185F45020030ECFD /* BillMenuButton.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259F4185F45020030ECFD /* BillMenuButton.m */; };
    ECA25A2B185F45020030ECFD /* BillPageView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259F6185F45020030ECFD /* BillPageView.m */; };
    ECA25A2C185F45020030ECFD /* BillSummaryPageView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259F8185F45020030ECFD /* BillSummaryPageView.m */; };
    ECA25A2D185F45020030ECFD /* BillsVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259FA185F45020030ECFD /* BillsVC.m */; };
    ECA25A2E185F45020030ECFD /* InternalBillSummaryView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259FC185F45020030ECFD /* InternalBillSummaryView.m */; };
    ECA25A2F185F45020030ECFD /* InternalBillVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA259FE185F45020030ECFD /* InternalBillVC.m */; };
    ECA25A30185F45020030ECFD /* BillItemsView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A01185F45020030ECFD /* BillItemsView.m */; };
    ECA25A31185F45020030ECFD /* BillItemTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A03185F45020030ECFD /* BillItemTableViewCell.m */; };
    ECA25A32185F45020030ECFD /* FilterOption.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A05185F45020030ECFD /* FilterOption.m */; };
    ECA25A33185F45020030ECFD /* FilterOptionTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A07185F45020030ECFD /* FilterOptionTableViewCell.m */; };
    ECA25A34185F45020030ECFD /* ItemFilteringButton.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A09185F45020030ECFD /* ItemFilteringButton.m */; };
    ECA25A36185F45020030ECFD /* FilterHeaderView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A0D185F45020030ECFD /* FilterHeaderView.m */; };
    ECA25A37185F45020030ECFD /* ItemSearchTextField.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A0F185F45020030ECFD /* ItemSearchTextField.m */; };
    ECA25A39185F45020030ECFD /* BillPaymentTextField.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A14185F45020030ECFD /* BillPaymentTextField.m */; };
    ECA25A3A185F45020030ECFD /* PayBillVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A16185F45020030ECFD /* PayBillVC.m */; };
    ECA25A3B185F45020030ECFD /* BillStatButtonView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A19185F45020030ECFD /* BillStatButtonView.m */; };
    ECA25A3D185F45020030ECFD /* MostNoticeableStatView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A1D185F45020030ECFD /* MostNoticeableStatView.m */; };
    ECA25A3E185F45020030ECFD /* MyBillStatsView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A1F185F45020030ECFD /* MyBillStatsView.m */; };
    ECA25A3F185F45020030ECFD /* PeriodSliderView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A21185F45020030ECFD /* PeriodSliderView.m */; };
    ECA25A40185F45020030ECFD /* BillAnalysisDetailVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A23185F45020030ECFD /* BillAnalysisDetailVC.m */; };
    ECA25A41185F45020030ECFD /* BillSummaryCellView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A26185F45020030ECFD /* BillSummaryCellView.m */; };
    ECA25A42185F45020030ECFD /* ScrollCellView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A28185F45020030ECFD /* ScrollCellView.m */; };
    ECA25A5D185F4FC00030ECFD /* ComboBoxVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A5C185F4FC00030ECFD /* ComboBoxVC.m */; };
    ECA25A62186044910030ECFD /* AllowanceChartCenterView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A5F186044910030ECFD /* AllowanceChartCenterView.m */; };
    ECA25A63186044910030ECFD /* AllowanceChartInsideView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A61186044910030ECFD /* AllowanceChartInsideView.m */; };
    ECA25A6A1860474C0030ECFD /* MenuTableViewCell.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A681860474C0030ECFD /* MenuTableViewCell.m */; };
    ECA25A6E1860477D0030ECFD /* BillPageScrollView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A6D1860477D0030ECFD /* BillPageScrollView.m */; };
    ECA25A74186047930030ECFD /* HUDView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A71186047930030ECFD /* HUDView.m */; };
    ECA25A75186047930030ECFD /* LoadingProgressChartView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A73186047930030ECFD /* LoadingProgressChartView.m */; };
    ECA25A791860487C0030ECFD /* PageControl.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A781860487C0030ECFD /* PageControl.m */; };
    ECA25A7D1860489C0030ECFD /* ScrollThingyView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A7C1860489C0030ECFD /* ScrollThingyView.m */; };
    ECA25A811860499A0030ECFD /* NKColorSwitch.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A801860499A0030ECFD /* NKColorSwitch.m */; };
    ECA25A8518604C150030ECFD /* CommonGestureRecognizerDelegate.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A8418604C150030ECFD /* CommonGestureRecognizerDelegate.m */; };
    ECA25A8918607B4F0030ECFD /* CreditView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A8818607B4F0030ECFD /* CreditView.m */; };
    ECA25A951861D1C10030ECFD /* NSError+Extensions.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA25A941861D1C10030ECFD /* NSError+Extensions.m */; };
    ECA2EC1617C89E71005F66F7 /* CoreData.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = ECA2EC1517C89E70005F66F7 /* CoreData.framework */; };
    ECA2EC1B17C89EAF005F66F7 /* libz.dylib in Frameworks */ = {isa = PBXBuildFile; fileRef = ECA2EC1A17C89EAF005F66F7 /* libz.dylib */; };
    ECA2EC2017C8A759005F66F7 /* UIView+HUD.m in Sources */ = {isa = PBXBuildFile; fileRef = ECB618C717AB93BD0070D0BD /* UIView+HUD.m */; };
    ECA43515185216AC00119D25 /* KeychainItemWrapper.m in Sources */ = {isa = PBXBuildFile; fileRef = ECA43514185216AC00119D25 /* KeychainItemWrapper.m */; settings = {COMPILER_FLAGS = "-fno-objc-arc"; }; };
    ECB8214B189794380014532C /* FirstTimeAppTourView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECB8214A189794380014532C /* FirstTimeAppTourView.m */; };
    ECB821671897F3E70014532C /* UIView+Glow.m in Sources */ = {isa = PBXBuildFile; fileRef = ECB821661897F3E70014532C /* UIView+Glow.m */; };
    ECBE1D2D18CEFD9E002933C8 /* BaseSlidingVC.m in Sources */ = {isa = PBXBuildFile; fileRef = ECBE1D2C18CEFD9E002933C8 /* BaseSlidingVC.m */; };
    ECBE23F61849D2C60091329E /* NotificationCategory.m in Sources */ = {isa = PBXBuildFile; fileRef = ECBE23F51849D2C60091329E /* NotificationCategory.m */; };
    ECC8A24618C633C000DA52F4 /* main.m in Sources */ = {isa = PBXBuildFile; fileRef = ECC8A24118C633C000DA52F4 /* main.m */; };
    ECDCCB4618C728D20029680A /* FacebookSDK.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = ECDCCB4518C728D20029680A /* FacebookSDK.framework */; };
    ECF493E018A22BA700546E09 /* PNLineChart.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493DB18A22BA700546E09 /* PNLineChart.m */; };
    ECF493E118A22BA700546E09 /* PNLineChartData.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493DD18A22BA700546E09 /* PNLineChartData.m */; };
    ECF493E218A22BA700546E09 /* PNLineChartDataItem.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493DF18A22BA700546E09 /* PNLineChartDataItem.m */; };
    ECF493E718A22C6000546E09 /* PNChartLabel.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493E418A22C6000546E09 /* PNChartLabel.m */; };
    ECF493E818A22C6000546E09 /* PNColor.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493E618A22C6000546E09 /* PNColor.m */; };
    ECF493EB18A2712700546E09 /* UIHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493EA18A2712700546E09 /* UIHelper.m */; };
    ECF493EE18A2733700546E09 /* FontHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493ED18A2733700546E09 /* FontHelper.m */; };
    ECF493F118A2739700546E09 /* LocalNotificationsHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493F018A2739700546E09 /* LocalNotificationsHelper.m */; };
    ECF493F418A285CB00546E09 /* AlertHelper.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF493F318A285CB00546E09 /* AlertHelper.m */; };
    ECF6B57718AE0A1A0086C38B /* CircleView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF6B57618AE0A1A0086C38B /* CircleView.m */; };
    ECF6B59C18AE188B0086C38B /* FTAnimation+UIView.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF6B59318AE188B0086C38B /* FTAnimation+UIView.m */; settings = {COMPILER_FLAGS = "-fno-objc-arc"; }; };
    ECF6B59D18AE188B0086C38B /* FTAnimationManager.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF6B59618AE188B0086C38B /* FTAnimationManager.m */; settings = {COMPILER_FLAGS = "-fno-objc-arc"; }; };
    ECF6B59E18AE188B0086C38B /* FTUtils+NSObject.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF6B59818AE188B0086C38B /* FTUtils+NSObject.m */; settings = {COMPILER_FLAGS = "-fno-objc-arc"; }; };
    ECF6B59F18AE188B0086C38B /* FTUtils+UIGestureRecognizer.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF6B59A18AE188B0086C38B /* FTUtils+UIGestureRecognizer.m */; settings = {COMPILER_FLAGS = "-fno-objc-arc"; }; };
    ECF6D24E1817BA7000B281CB /* ExpireMonthYearActionSheetPicker.m in Sources */ = {isa = PBXBuildFile; fileRef = ECF6D24D1817BA7000B281CB /* ExpireMonthYearActionSheetPicker.m */; };
    ED20E4AE1933419D002ABE21 /* OMCCRest.m in Sources */ = {isa = PBXBuildFile; fileRef = ED20E4AD1933419D002ABE21 /* OMCCRest.m */; };
    F30B90F517BDF9CF002EDC98 /* NSObject+NullRemoving.m in Sources */ = {isa = PBXBuildFile; fileRef = F30B90F417BDF9CF002EDC98 /* NSObject+NullRemoving.m */; };
    F30B911917BDFAA3002EDC98 /* SearchRest.m in Sources */ = {isa = PBXBuildFile; fileRef = F30B911617BDFAA3002EDC98 /* SearchRest.m */; };
    F30B911A17BDFAA3002EDC98 /* StoreLocatorRest.m in Sources */ = {isa = PBXBuildFile; fileRef = F30B911817BDFAA3002EDC98 /* StoreLocatorRest.m */; };
    F30B912217BDFC8E002EDC98 /* CoreLocation.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = F30B912117BDFC8E002EDC98 /* CoreLocation.framework */; };
    F30B912517BDFD1B002EDC98 /* HomeRest.m in Sources */ = {isa = PBXBuildFile; fileRef = ECB618C317AB7BE70070D0BD /* HomeRest.m */; };
    F30B912617BDFD26002EDC98 /* ISO8601DateFormatter.m in Sources */ = {isa = PBXBuildFile; fileRef = EC79804A17ABF100007295BD /* ISO8601DateFormatter.m */; settings = {COMPILER_FLAGS = "-fno-objc-arc"; }; };
    F30B912A17BDFD62002EDC98 /* SettingsRest.m in Sources */ = {isa = PBXBuildFile; fileRef = ECCFE45A17A7D1940090B080 /* SettingsRest.m */; };
    F30B912C17BDFDCB002EDC98 /* DSBarChart.m in Sources */ = {isa = PBXBuildFile; fileRef = ECCFE44A17A792240090B080 /* DSBarChart.m */; };
    F30B912E17BDFDE2002EDC98 /* HMSegmentedControl.m in Sources */ = {isa = PBXBuildFile; fileRef = EC8009BF17A910220018D9A6 /* HMSegmentedControl.m */; };
    F30B913217BDFE37002EDC98 /* SBStackedBarChart.m in Sources */ = {isa = PBXBuildFile; fileRef = ECB618BC17AB7BC20070D0BD /* SBStackedBarChart.m */; };
    F33307A417A5096B00E8A9C1 /* AccountObject.m in Sources */ = {isa = PBXBuildFile; fileRef = F333079C17A5096B00E8A9C1 /* AccountObject.m */; };
    F33307A717A5096B00E8A9C1 /* ResponseStatus.m in Sources */ = {isa = PBXBuildFile; fileRef = F33307A317A5096B00E8A9C1 /* ResponseStatus.m */; };
    F33307C517A50C9900E8A9C1 /* PCSimpleLineChartView.m in Sources */ = {isa = PBXBuildFile; fileRef = F33307C417A50C9900E8A9C1 /* PCSimpleLineChartView.m */; };
    F34601D61793EC2C008D4164 /* AppSingletonObject.m in Sources */ = {isa = PBXBuildFile; fileRef = F34601D01793EC2C008D4164 /* AppSingletonObject.m */; };
    F34601D91793EC71008D4164 /* QuartzCore.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = F34601D81793EC71008D4164 /* QuartzCore.framework */; };
    F34601DB1793EC76008D4164 /* SystemConfiguration.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = F34601DA1793EC76008D4164 /* SystemConfiguration.framework */; };
    F34601DD1793ECA9008D4164 /* MobileCoreServices.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = F34601DC1793ECA9008D4164 /* MobileCoreServices.framework */; };
    F34601F81793F469008D4164 /* BaseHTTPClient.m in Sources */ = {isa = PBXBuildFile; fileRef = F34601F31793F469008D4164 /* BaseHTTPClient.m */; };
    F346F9511793E7CE008D4164 /* UIKit.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = F346F9501793E7CE008D4164 /* UIKit.framework */; settings = {ATTRIBUTES = (Weak, ); }; };
    F346F9531793E7CE008D4164 /* Foundation.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = F346F9521793E7CE008D4164 /* Foundation.framework */; settings = {ATTRIBUTES = (Required, ); }; };
    F346F9551793E7CE008D4164 /* CoreGraphics.framework in Frameworks */ = {isa = PBXBuildFile; fileRef = F346F9541793E7CE008D4164 /* CoreGraphics.framework */; };
    F346F9611793E7CE008D4164 /* AppDelegate.m in Sources */ = {isa = PBXBuildFile; fileRef = F346F9601793E7CE008D4164 /* AppDelegate.m */; };
    F346FDD71793EB73008D4164 /* UIImage+Tools.m in Sources */ = {isa = PBXBuildFile; fileRef = F346F9A01793EB70008D4164 /* UIImage+Tools.m */; };
    F346FDD91793EB73008D4164 /* UIView+Effects.m in Sources */ = {isa = PBXBuildFile; fileRef = F346F9A41793EB70008D4164 /* UIView+Effects.m */; };
    F346FDDA1793EB73008D4164 /* UIView+Layout.m in Sources */ = {isa = PBXBuildFile; fileRef = F346F9A61793EB70008D4164 /* UIView+Layout.m */; };
    F361E2B917BE37DE00C56475 /* TopUpRest.m in Sources */ = {isa = PBXBuildFile; fileRef = F361E2B817BE37DE00C56475 /* TopUpRest.m */; };
/* End PBXBuildFile section */

/* Begin PBXFileReference section */
    04C1A2BE1928D98C00411E4E /* readme.txt */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = readme.txt; sourceTree = "<group>"; };
    193D0C6257F69AC5FA196110 /* Pods.debug.xcconfig */ = {isa = PBXFileReference; includeInIndex = 1; lastKnownFileType = text.xcconfig; name = Pods.debug.xcconfig; path = "Pods/Target Support Files/Pods/Pods.debug.xcconfig"; sourceTree = "<group>"; };
    20D978DAB32014DE50218A14 /* Pods.release.xcconfig */ = {isa = PBXFileReference; includeInIndex = 1; lastKnownFileType = text.xcconfig; name = Pods.release.xcconfig; path = "Pods/Target Support Files/Pods/Pods.release.xcconfig"; sourceTree = "<group>"; };
    3FDF25214F9849DAA5743F50 /* libPods.a */ = {isa = PBXFileReference; explicitFileType = archive.ar; includeInIndex = 0; path = libPods.a; sourceTree = BUILT_PRODUCTS_DIR; };
    68018F9717EAD3DD00A9950A /* UpdateHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UpdateHelper.h; sourceTree = "<group>"; };
    68018F9817EAD3DD00A9950A /* UpdateHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UpdateHelper.m; sourceTree = "<group>"; };
    6803A5F417F98C4200EF94B0 /* SearchResultObject.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SearchResultObject.h; sourceTree = "<group>"; };
    6803A5F517F98C4200EF94B0 /* SearchResultObject.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SearchResultObject.m; sourceTree = "<group>"; };
    6809803417F0170800984FF5 /* AFHTTPRequestOperation+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "AFHTTPRequestOperation+Extensions.h"; sourceTree = "<group>"; };
    6809803517F0170800984FF5 /* AFHTTPRequestOperation+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "AFHTTPRequestOperation+Extensions.m"; sourceTree = "<group>"; };
    6809803617F0170800984FF5 /* NSData+JSONUtilities.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSData+JSONUtilities.h"; sourceTree = "<group>"; };
    6809803717F0170800984FF5 /* NSData+JSONUtilities.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSData+JSONUtilities.m"; sourceTree = "<group>"; };
    681123B01827C8D700EB716B /* CoreTelephony.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = CoreTelephony.framework; path = System/Library/Frameworks/CoreTelephony.framework; sourceTree = SDKROOT; };
    6817852417E83A150038C04B /* MyCLController.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MyCLController.h; sourceTree = "<group>"; };
    6817852517E83A150038C04B /* MyCLController.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MyCLController.m; sourceTree = "<group>"; };
    6824CCE41849D95500A24B84 /* TopBarNotificationView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = TopBarNotificationView.h; sourceTree = "<group>"; };
    6824CCE51849D95500A24B84 /* TopBarNotificationView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = TopBarNotificationView.m; sourceTree = "<group>"; };
    68297D0E1820398B00CC0DEC /* FilterVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterVC.h; sourceTree = "<group>"; };
    68297D0F1820398B00CC0DEC /* FilterVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterVC.m; sourceTree = "<group>"; };
    6829F3DA17F15F82002F3C48 /* GBAlertView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = GBAlertView.h; sourceTree = "<group>"; };
    6829F3DB17F15F82002F3C48 /* GBAlertView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = GBAlertView.m; sourceTree = "<group>"; };
    6829F3DC17F15F82002F3C48 /* GBCheckBox.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = GBCheckBox.h; sourceTree = "<group>"; };
    6829F3DD17F15F82002F3C48 /* GBCheckBox.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = GBCheckBox.m; sourceTree = "<group>"; };
    682B310B1843759000080490 /* SIAlertView.bundle */ = {isa = PBXFileReference; lastKnownFileType = "wrapper.plug-in"; path = SIAlertView.bundle; sourceTree = "<group>"; };
    682B310C1843759000080490 /* SIAlertView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SIAlertView.h; sourceTree = "<group>"; };
    682B310D1843759000080490 /* SIAlertView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SIAlertView.m; sourceTree = "<group>"; };
    682B310E1843759000080490 /* UIWindow+SIUtils.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIWindow+SIUtils.h"; sourceTree = "<group>"; };
    682B310F1843759000080490 /* UIWindow+SIUtils.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIWindow+SIUtils.m"; sourceTree = "<group>"; };
    682C208B17951F93004633EB /* MapKit.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = MapKit.framework; path = System/Library/Frameworks/MapKit.framework; sourceTree = SDKROOT; };
    683210C318213BFE00D5A10A /* StoreLocatorFilterVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = StoreLocatorFilterVC.h; sourceTree = "<group>"; };
    683210C418213BFE00D5A10A /* StoreLocatorFilterVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = StoreLocatorFilterVC.m; sourceTree = "<group>"; };
    683210C61821438B00D5A10A /* RSSearchView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RSSearchView.h; sourceTree = "<group>"; };
    683210C71821438B00D5A10A /* RSSearchView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RSSearchView.m; sourceTree = "<group>"; };
    6837BC6417F40A730035ED51 /* NextPrevView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NextPrevView.h; sourceTree = "<group>"; };
    6837BC6517F40A730035ED51 /* NextPrevView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NextPrevView.m; sourceTree = "<group>"; };
    68383181183FDC8D00A7F63B /* DeviceDetailVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = DeviceDetailVC.h; sourceTree = "<group>"; };
    68383182183FDC8D00A7F63B /* DeviceDetailVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = DeviceDetailVC.m; sourceTree = "<group>"; };
    683B70C417F1AA6D004180C9 /* MessageUI.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = MessageUI.framework; path = System/Library/Frameworks/MessageUI.framework; sourceTree = SDKROOT; };
    683E1F521794923100F5C42A /* UIView+GBAnimate.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIView+GBAnimate.h"; sourceTree = "<group>"; };
    683E1F531794923100F5C42A /* UIView+GBAnimate.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIView+GBAnimate.m"; sourceTree = "<group>"; };
    6841FB6618450EE70064F061 /* APNRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = APNRest.h; sourceTree = "<group>"; };
    6841FB6718450EE70064F061 /* APNRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = APNRest.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    6841FB69184515B60064F061 /* Security.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = Security.framework; path = System/Library/Frameworks/Security.framework; sourceTree = SDKROOT; };
    6845D1F1184B118F00A2A566 /* NSString+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSString+Extensions.h"; sourceTree = "<group>"; };
    6845D1F2184B118F00A2A566 /* NSString+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSString+Extensions.m"; sourceTree = "<group>"; };
    6845D1F3184B118F00A2A566 /* UIViewController+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIViewController+Extensions.h"; sourceTree = "<group>"; };
    6845D1F4184B118F00A2A566 /* UIViewController+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIViewController+Extensions.m"; sourceTree = "<group>"; };
    684C027817D9A9B700F432ED /* AbstractActionSheetPicker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AbstractActionSheetPicker.h; sourceTree = "<group>"; };
    684C027917D9A9B700F432ED /* AbstractActionSheetPicker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AbstractActionSheetPicker.m; sourceTree = "<group>"; };
    684C027A17D9A9B700F432ED /* ActionSheetCustomPicker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ActionSheetCustomPicker.h; sourceTree = "<group>"; };
    684C027B17D9A9B700F432ED /* ActionSheetCustomPicker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ActionSheetCustomPicker.m; sourceTree = "<group>"; };
    684C027C17D9A9B700F432ED /* ActionSheetCustomPickerDelegate.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ActionSheetCustomPickerDelegate.h; sourceTree = "<group>"; };
    684C027D17D9A9B700F432ED /* ActionSheetDatePicker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ActionSheetDatePicker.h; sourceTree = "<group>"; };
    684C027E17D9A9B700F432ED /* ActionSheetDatePicker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ActionSheetDatePicker.m; sourceTree = "<group>"; };
    684C027F17D9A9B700F432ED /* ActionSheetDistancePicker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ActionSheetDistancePicker.h; sourceTree = "<group>"; };
    684C028017D9A9B700F432ED /* ActionSheetDistancePicker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ActionSheetDistancePicker.m; sourceTree = "<group>"; };
    684C028117D9A9B700F432ED /* ActionSheetStringPicker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ActionSheetStringPicker.h; sourceTree = "<group>"; };
    684C028217D9A9B700F432ED /* ActionSheetStringPicker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ActionSheetStringPicker.m; sourceTree = "<group>"; };
    684C028317D9A9B700F432ED /* DistancePickerView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = DistancePickerView.h; sourceTree = "<group>"; };
    684C028417D9A9B700F432ED /* DistancePickerView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = DistancePickerView.m; sourceTree = "<group>"; };
    684C028517D9A9B700F432ED /* ExpireDateActionSheetPicker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ExpireDateActionSheetPicker.h; sourceTree = "<group>"; };
    684C028617D9A9B700F432ED /* ExpireDateActionSheetPicker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ExpireDateActionSheetPicker.m; sourceTree = "<group>"; };
    684C029B17D9EDAF00F432ED /* BaseRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BaseRest.h; sourceTree = "<group>"; };
    684C029C17D9EDAF00F432ED /* BaseRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BaseRest.m; sourceTree = "<group>"; };
    68542B6917F01695004DEFD7 /* AllowancesVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowancesVC.h; sourceTree = "<group>"; };
    68542B6A17F01695004DEFD7 /* AllowancesVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowancesVC.m; sourceTree = "<group>"; };
    68542BB917F01695004DEFD7 /* SearchSupportPageView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SearchSupportPageView.h; sourceTree = "<group>"; };
    68542BBA17F01695004DEFD7 /* SearchSupportPageView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = SearchSupportPageView.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    68542BBB17F01695004DEFD7 /* SearchSupportPageVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SearchSupportPageVC.h; sourceTree = "<group>"; };
    68542BBC17F01695004DEFD7 /* SearchSupportPageVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SearchSupportPageVC.m; sourceTree = "<group>"; };
    68542BCC17F01695004DEFD7 /* StoreDetailsVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = StoreDetailsVC.h; sourceTree = "<group>"; };
    68542BCD17F01695004DEFD7 /* StoreDetailsVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = StoreDetailsVC.m; sourceTree = "<group>"; };
    68542BCE17F01695004DEFD7 /* StoreLocatorVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = StoreLocatorVC.h; sourceTree = "<group>"; };
    68542BCF17F01695004DEFD7 /* StoreLocatorVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = StoreLocatorVC.m; sourceTree = "<group>"; };
    68542BD117F01695004DEFD7 /* PaymentSuccessVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PaymentSuccessVC.h; sourceTree = "<group>"; };
    68542BD217F01695004DEFD7 /* PaymentSuccessVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PaymentSuccessVC.m; sourceTree = "<group>"; };
    68542BD317F01695004DEFD7 /* PaymentSuccessVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = PaymentSuccessVC.xib; sourceTree = "<group>"; };
    68542BD417F01695004DEFD7 /* TopUpPaymentVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = TopUpPaymentVC.h; sourceTree = "<group>"; };
    68542BD517F01695004DEFD7 /* TopUpPaymentVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = TopUpPaymentVC.m; sourceTree = "<group>"; };
    68542BD617F01695004DEFD7 /* TopUpPaymentVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = TopUpPaymentVC.xib; sourceTree = "<group>"; };
    68542BD717F01695004DEFD7 /* TopUpVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = TopUpVC.h; sourceTree = "<group>"; };
    68542BD817F01695004DEFD7 /* TopUpVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = TopUpVC.m; sourceTree = "<group>"; };
    68542BD917F01695004DEFD7 /* TopUpVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = TopUpVC.xib; sourceTree = "<group>"; };
    68542C1717F016AA004DEFD7 /* AccountView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AccountView.h; sourceTree = "<group>"; };
    68542C1817F016AA004DEFD7 /* AccountView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AccountView.m; sourceTree = "<group>"; };
    68542C1D17F016AA004DEFD7 /* AllowanceChartElementView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowanceChartElementView.h; sourceTree = "<group>"; };
    68542C1E17F016AA004DEFD7 /* AllowanceChartElementView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowanceChartElementView.m; sourceTree = "<group>"; };
    68542C1F17F016AA004DEFD7 /* AllowancesScrollView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowancesScrollView.h; sourceTree = "<group>"; };
    68542C2017F016AA004DEFD7 /* AllowancesScrollView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowancesScrollView.m; sourceTree = "<group>"; };
    68542C2A17F016AA004DEFD7 /* TopUpTextField.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = TopUpTextField.h; sourceTree = "<group>"; };
    68542C2B17F016AA004DEFD7 /* TopUpTextField.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = TopUpTextField.m; sourceTree = "<group>"; };
    68542C3217F016AA004DEFD7 /* OneBillChartView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = OneBillChartView.h; sourceTree = "<group>"; };
    68542C3317F016AA004DEFD7 /* OneBillChartView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = OneBillChartView.m; sourceTree = "<group>"; };
    68542C3417F016AA004DEFD7 /* BillsScrollView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillsScrollView.h; sourceTree = "<group>"; };
    68542C3517F016AA004DEFD7 /* BillsScrollView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillsScrollView.m; sourceTree = "<group>"; };
    68542C3C17F016AA004DEFD7 /* SimplePieChartView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SimplePieChartView.h; sourceTree = "<group>"; };
    68542C3D17F016AA004DEFD7 /* SimplePieChartView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SimplePieChartView.m; sourceTree = "<group>"; };
    68542C5017F016AA004DEFD7 /* RSLabel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RSLabel.h; sourceTree = "<group>"; };
    68542C5117F016AA004DEFD7 /* RSLabel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RSLabel.m; sourceTree = "<group>"; };
    68542C5217F016AA004DEFD7 /* RSTextField.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RSTextField.h; sourceTree = "<group>"; };
    68542C5317F016AA004DEFD7 /* RSTextField.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RSTextField.m; sourceTree = "<group>"; };
    68542C5D17F016AA004DEFD7 /* ChartOverlay.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ChartOverlay.h; sourceTree = "<group>"; };
    68542C5E17F016AA004DEFD7 /* ChartOverlay.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ChartOverlay.m; sourceTree = "<group>"; };
    68542C6717F016AA004DEFD7 /* HomeSearchView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = HomeSearchView.h; sourceTree = "<group>"; };
    68542C6817F016AA004DEFD7 /* HomeSearchView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = HomeSearchView.m; sourceTree = "<group>"; };
    68542C6A17F016AA004DEFD7 /* SettingsPageView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SettingsPageView.h; sourceTree = "<group>"; };
    68542C6B17F016AA004DEFD7 /* SettingsPageView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = SettingsPageView.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    68542C6F17F016AA004DEFD7 /* CustomInfoView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CustomInfoView.h; sourceTree = "<group>"; };
    68542C7017F016AA004DEFD7 /* CustomInfoView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CustomInfoView.m; sourceTree = "<group>"; };
    68542C7117F016AA004DEFD7 /* EllipseView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = EllipseView.h; sourceTree = "<group>"; };
    68542C7217F016AA004DEFD7 /* EllipseView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = EllipseView.m; sourceTree = "<group>"; };
    68542C7317F016AA004DEFD7 /* GoogleMapView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = GoogleMapView.h; sourceTree = "<group>"; };
    68542C7417F016AA004DEFD7 /* GoogleMapView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = GoogleMapView.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    68542C7517F016AA004DEFD7 /* GoogleMarker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = GoogleMarker.h; sourceTree = "<group>"; };
    68542C7617F016AA004DEFD7 /* GoogleMarker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = GoogleMarker.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    68542C7717F016AA004DEFD7 /* MapSettings.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MapSettings.h; sourceTree = "<group>"; };
    68542C7817F016AA004DEFD7 /* MyMapView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MyMapView.h; sourceTree = "<group>"; };
    68542C7917F016AA004DEFD7 /* MyMapView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MyMapView.m; sourceTree = "<group>"; };
    68542C7A17F016AA004DEFD7 /* RGImageScrollCellView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RGImageScrollCellView.h; sourceTree = "<group>"; };
    68542C7B17F016AA004DEFD7 /* RGImageScrollCellView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RGImageScrollCellView.m; sourceTree = "<group>"; };
    68542C7C17F016AA004DEFD7 /* RGStoreAnnotation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RGStoreAnnotation.h; sourceTree = "<group>"; };
    68542C7D17F016AA004DEFD7 /* RGStoreAnnotation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = RGStoreAnnotation.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    68542C7E17F016AA004DEFD7 /* RGStoreAnnotationView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RGStoreAnnotationView.h; sourceTree = "<group>"; };
    68542C7F17F016AA004DEFD7 /* RGStoreAnnotationView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RGStoreAnnotationView.m; sourceTree = "<group>"; };
    68542C8017F016AA004DEFD7 /* StoreLocatorPageView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = StoreLocatorPageView.h; sourceTree = "<group>"; };
    68542C8117F016AA004DEFD7 /* StoreLocatorPageView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = StoreLocatorPageView.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    68542C8217F016AA004DEFD7 /* RGUserAnnotation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RGUserAnnotation.h; sourceTree = "<group>"; };
    68542C8317F016AA004DEFD7 /* RGUserAnnotation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RGUserAnnotation.m; sourceTree = "<group>"; };
    68542C8617F016AA004DEFD7 /* TimCalloutView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = TimCalloutView.h; sourceTree = "<group>"; };
    68542C8717F016AA004DEFD7 /* TimCalloutView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = TimCalloutView.m; sourceTree = "<group>"; };
    68542C8817F016AA004DEFD7 /* TimView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = TimView.h; sourceTree = "<group>"; };
    68542C8917F016AA004DEFD7 /* TimView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = TimView.m; sourceTree = "<group>"; };
    68544AD917ECCC7600B3A69D /* AddressBook.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = AddressBook.framework; path = System/Library/Frameworks/AddressBook.framework; sourceTree = SDKROOT; };
    68544ADB17ECCC9C00B3A69D /* AddressBookUI.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = AddressBookUI.framework; path = System/Library/Frameworks/AddressBookUI.framework; sourceTree = SDKROOT; };
    6858973917F56EB1000D763B /* AssetsLibrary.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = AssetsLibrary.framework; path = System/Library/Frameworks/AssetsLibrary.framework; sourceTree = SDKROOT; };
    685F84051830CC7900034364 /* MNTView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MNTView.h; sourceTree = "<group>"; };
    685F84061830CC7900034364 /* MNTView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MNTView.m; sourceTree = "<group>"; };
    685F8413183124C100034364 /* MNTREST.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MNTREST.h; sourceTree = "<group>"; };
    685F8414183124C100034364 /* MNTREST.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MNTREST.m; sourceTree = "<group>"; };
    685F841B1831491500034364 /* UploadRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UploadRest.h; sourceTree = "<group>"; };
    685F841C1831491500034364 /* UploadRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UploadRest.m; sourceTree = "<group>"; };
    6870978917F01814004836A6 /* BillRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillRest.h; sourceTree = "<group>"; };
    6870978A17F01814004836A6 /* BillRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillRest.m; sourceTree = "<group>"; };
    6870978D17F018D7004836A6 /* ECSlidingViewController.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ECSlidingViewController.h; sourceTree = "<group>"; };
    6870978E17F018D7004836A6 /* ECSlidingViewController.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ECSlidingViewController.m; sourceTree = "<group>"; };
    6870979117F018D7004836A6 /* UIImage+ImageWithUIView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIImage+ImageWithUIView.h"; sourceTree = "<group>"; };
    6870979217F018D7004836A6 /* UIImage+ImageWithUIView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIImage+ImageWithUIView.m"; sourceTree = "<group>"; };
    6871F8B7183CD7D10049F05A /* ChatRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ChatRest.h; sourceTree = "<group>"; };
    6871F8B8183CD7D10049F05A /* ChatRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ChatRest.m; sourceTree = "<group>"; };
    6878B54417FA95630008A26A /* MenuRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MenuRest.h; sourceTree = "<group>"; };
    6878B54517FA95630008A26A /* MenuRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MenuRest.m; sourceTree = "<group>"; };
    6878B58617FABDF70008A26A /* RATreeNode.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RATreeNode.h; sourceTree = "<group>"; };
    6878B58717FABDF70008A26A /* RATreeNode.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RATreeNode.m; sourceTree = "<group>"; };
    6878B58817FABDF70008A26A /* RATreeNodeCollectionController.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RATreeNodeCollectionController.h; sourceTree = "<group>"; };
    6878B58917FABDF70008A26A /* RATreeNodeCollectionController.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RATreeNodeCollectionController.m; sourceTree = "<group>"; };
    6878B58A17FABDF70008A26A /* RATreeNodeInfo+Private.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "RATreeNodeInfo+Private.h"; sourceTree = "<group>"; };
    6878B58B17FABDF70008A26A /* RATreeNodeInfo+Private.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "RATreeNodeInfo+Private.m"; sourceTree = "<group>"; };
    6878B58C17FABDF70008A26A /* RATreeNodeInfo.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RATreeNodeInfo.h; sourceTree = "<group>"; };
    6878B58D17FABDF70008A26A /* RATreeNodeInfo.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RATreeNodeInfo.m; sourceTree = "<group>"; };
    6878B58E17FABDF70008A26A /* RATreeView+Enums.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "RATreeView+Enums.h"; sourceTree = "<group>"; };
    6878B58F17FABDF70008A26A /* RATreeView+Enums.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "RATreeView+Enums.m"; sourceTree = "<group>"; };
    6878B59017FABDF70008A26A /* RATreeView+Private.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "RATreeView+Private.h"; sourceTree = "<group>"; };
    6878B59117FABDF70008A26A /* RATreeView+Private.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "RATreeView+Private.m"; sourceTree = "<group>"; };
    6878B59217FABDF70008A26A /* RATreeView+TableViewDataSource.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "RATreeView+TableViewDataSource.h"; sourceTree = "<group>"; };
    6878B59317FABDF70008A26A /* RATreeView+TableViewDataSource.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "RATreeView+TableViewDataSource.m"; sourceTree = "<group>"; };
    6878B59417FABDF70008A26A /* RATreeView+TableViewDelegate.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "RATreeView+TableViewDelegate.h"; sourceTree = "<group>"; };
    6878B59517FABDF70008A26A /* RATreeView+TableViewDelegate.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "RATreeView+TableViewDelegate.m"; sourceTree = "<group>"; };
    6878B59617FABDF70008A26A /* RATreeView+UIScrollView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "RATreeView+UIScrollView.h"; sourceTree = "<group>"; };
    6878B59717FABDF70008A26A /* RATreeView+UIScrollView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "RATreeView+UIScrollView.m"; sourceTree = "<group>"; };
    6878B59817FABDF70008A26A /* RATreeView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RATreeView.h; sourceTree = "<group>"; };
    6878B59917FABDF70008A26A /* RATreeView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RATreeView.m; sourceTree = "<group>"; };
    687F6D151805796B0040BF5D /* MKMapView+ZoomLevel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "MKMapView+ZoomLevel.h"; sourceTree = "<group>"; };
    687F6D161805796B0040BF5D /* MKMapView+ZoomLevel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "MKMapView+ZoomLevel.m"; sourceTree = "<group>"; };
    68860F6B17FC33B400985C71 /* LocationBasedOfferView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = LocationBasedOfferView.h; sourceTree = "<group>"; };
    68860F6C17FC33B400985C71 /* LocationBasedOfferView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = LocationBasedOfferView.m; sourceTree = "<group>"; };
    689D8880181FDA0700481CDA /* FilterButton.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterButton.h; sourceTree = "<group>"; };
    689D8881181FDA0700481CDA /* FilterButton.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterButton.m; sourceTree = "<group>"; };
    689ECE8017E2D4E90028BA0D /* iCarousel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = iCarousel.h; sourceTree = "<group>"; };
    689ECE8117E2D4E90028BA0D /* iCarousel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = iCarousel.m; sourceTree = "<group>"; };
    68ADD03517EB7D1100EDA98A /* CoreText.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = CoreText.framework; path = System/Library/Frameworks/CoreText.framework; sourceTree = SDKROOT; };
    68ADD03717EB7D1C00EDA98A /* GLKit.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = GLKit.framework; path = System/Library/Frameworks/GLKit.framework; sourceTree = SDKROOT; };
    68ADD03917EB7D2900EDA98A /* ImageIO.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = ImageIO.framework; path = System/Library/Frameworks/ImageIO.framework; sourceTree = SDKROOT; };
    68ADD03B17EB7D3A00EDA98A /* libc++.dylib */ = {isa = PBXFileReference; lastKnownFileType = "compiled.mach-o.dylib"; name = "libc++.dylib"; path = "usr/lib/libc++.dylib"; sourceTree = SDKROOT; };
    68ADD03D17EB7D5700EDA98A /* libicucore.dylib */ = {isa = PBXFileReference; lastKnownFileType = "compiled.mach-o.dylib"; name = libicucore.dylib; path = usr/lib/libicucore.dylib; sourceTree = SDKROOT; };
    68ADD03F17EB7D6800EDA98A /* OpenGLES.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = OpenGLES.framework; path = System/Library/Frameworks/OpenGLES.framework; sourceTree = SDKROOT; };
    68BA7D301822843400F951DB /* ValidationalTextField.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ValidationalTextField.h; sourceTree = "<group>"; };
    68BA7D311822843400F951DB /* ValidationalTextField.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ValidationalTextField.m; sourceTree = "<group>"; };
    68FB2EBB17F3072500EE1457 /* CampaignsView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CampaignsView.h; sourceTree = "<group>"; };
    68FB2EBC17F3072500EE1457 /* CampaignsView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CampaignsView.m; sourceTree = "<group>"; };
    68FB2EBE17F309AF00EE1457 /* OneCampaignView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = OneCampaignView.h; sourceTree = "<group>"; };
    68FB2EBF17F309AF00EE1457 /* OneCampaignView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = OneCampaignView.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    6D31CA061715B922730EAB8A /* Pods.enterprise.xcconfig */ = {isa = PBXFileReference; includeInIndex = 1; lastKnownFileType = text.xcconfig; name = Pods.enterprise.xcconfig; path = "Pods/Target Support Files/Pods/Pods.enterprise.xcconfig"; sourceTree = "<group>"; };
    88A112E81ACC76E000E79281 /* AFHTTPClient.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFHTTPClient.h; sourceTree = "<group>"; };
    88A112E91ACC76E000E79281 /* AFHTTPClient.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFHTTPClient.m; sourceTree = "<group>"; };
    88A112EA1ACC76E000E79281 /* AFHTTPRequestOperation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFHTTPRequestOperation.h; sourceTree = "<group>"; };
    88A112EB1ACC76E000E79281 /* AFHTTPRequestOperation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFHTTPRequestOperation.m; sourceTree = "<group>"; };
    88A112EC1ACC76E000E79281 /* AFHTTPRequestOperationLogger.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFHTTPRequestOperationLogger.h; sourceTree = "<group>"; };
    88A112ED1ACC76E000E79281 /* AFHTTPRequestOperationLogger.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFHTTPRequestOperationLogger.m; sourceTree = "<group>"; };
    88A112EE1ACC76E000E79281 /* AFImageRequestOperation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFImageRequestOperation.h; sourceTree = "<group>"; };
    88A112EF1ACC76E000E79281 /* AFImageRequestOperation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFImageRequestOperation.m; sourceTree = "<group>"; };
    88A112F01ACC76E000E79281 /* AFJSONRequestOperation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFJSONRequestOperation.h; sourceTree = "<group>"; };
    88A112F11ACC76E000E79281 /* AFJSONRequestOperation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFJSONRequestOperation.m; sourceTree = "<group>"; };
    88A112F21ACC76E000E79281 /* AFNetworkActivityIndicatorManager.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFNetworkActivityIndicatorManager.h; sourceTree = "<group>"; };
    88A112F31ACC76E000E79281 /* AFNetworkActivityIndicatorManager.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFNetworkActivityIndicatorManager.m; sourceTree = "<group>"; };
    88A112F41ACC76E000E79281 /* AFNetworking.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFNetworking.h; sourceTree = "<group>"; };
    88A112F51ACC76E000E79281 /* AFPropertyListRequestOperation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFPropertyListRequestOperation.h; sourceTree = "<group>"; };
    88A112F61ACC76E000E79281 /* AFPropertyListRequestOperation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFPropertyListRequestOperation.m; sourceTree = "<group>"; };
    88A112F71ACC76E000E79281 /* AFURLCache.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFURLCache.h; sourceTree = "<group>"; };
    88A112F81ACC76E000E79281 /* AFURLCache.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFURLCache.m; sourceTree = "<group>"; };
    88A112F91ACC76E000E79281 /* AFURLConnectionOperation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFURLConnectionOperation.h; sourceTree = "<group>"; };
    88A112FA1ACC76E000E79281 /* AFURLConnectionOperation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFURLConnectionOperation.m; sourceTree = "<group>"; };
    88A112FB1ACC76E000E79281 /* AFXMLRequestOperation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AFXMLRequestOperation.h; sourceTree = "<group>"; };
    88A112FC1ACC76E000E79281 /* AFXMLRequestOperation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AFXMLRequestOperation.m; sourceTree = "<group>"; };
    88A112FD1ACC76E000E79281 /* UIImageView+AFNetworking.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIImageView+AFNetworking.h"; sourceTree = "<group>"; };
    88A112FE1ACC76E000E79281 /* UIImageView+AFNetworking.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIImageView+AFNetworking.m"; sourceTree = "<group>"; };
    88A1130A1ACD2C1200E79281 /* ChangePasswordVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ChangePasswordVC.h; sourceTree = "<group>"; };
    88A1130B1ACD2C1200E79281 /* ChangePasswordVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ChangePasswordVC.m; sourceTree = "<group>"; };
    88A1130D1ACD2CB200E79281 /* LoginRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = LoginRest.h; sourceTree = "<group>"; };
    88A1130E1ACD2CB200E79281 /* LoginRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = LoginRest.m; sourceTree = "<group>"; };
    88A113181ACE862100E79281 /* Accelerate.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = Accelerate.framework; path = System/Library/Frameworks/Accelerate.framework; sourceTree = SDKROOT; };
    88BC06131B00EE5600276997 /* Entitlement.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; name = Entitlement.plist; path = ../Entitlement.plist; sourceTree = "<group>"; };
    88C4327F1B67775B00A17E55 /* TurkcellIDBundle.bundle */ = {isa = PBXFileReference; lastKnownFileType = "wrapper.plug-in"; path = TurkcellIDBundle.bundle; sourceTree = "<group>"; };
    88C432811B67785B00A17E55 /* TurkcellID.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; path = TurkcellID.framework; sourceTree = "<group>"; };
    88F476051B61456000207F7F /* Entitlement-AppStore.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = "Entitlement-AppStore.plist"; sourceTree = "<group>"; };
    88F476061B61456000207F7F /* Entitlement-Enterprise.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = "Entitlement-Enterprise.plist"; sourceTree = "<group>"; };
    8D2A3A711A94A0290073487B /* ADBMobile.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = ADBMobile.h; path = Omniture/ADBMobile.h; sourceTree = "<group>"; };
    8D2A3A721A94A0290073487B /* AdobeMobileLibrary.a */ = {isa = PBXFileReference; lastKnownFileType = archive.ar; name = AdobeMobileLibrary.a; path = Omniture/AdobeMobileLibrary.a; sourceTree = "<group>"; };
    8D2A3A741A94A7CA0073487B /* MNTVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MNTVC.h; sourceTree = "<group>"; };
    8D2A3A751A94A7CA0073487B /* MNTVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MNTVC.m; sourceTree = "<group>"; };
    8D2A3A761A94A7CA0073487B /* MNTVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = MNTVC.xib; sourceTree = "<group>"; };
    8D2D6BFD1A8F8534003FBB1A /* PeriodSliderView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = PeriodSliderView.xib; sourceTree = "<group>"; };
    8D3CACD0197921B000FE36C5 /* libsqlite3.dylib */ = {isa = PBXFileReference; lastKnownFileType = "compiled.mach-o.dylib"; name = libsqlite3.dylib; path = usr/lib/libsqlite3.dylib; sourceTree = SDKROOT; };
    8D44746219D224AF007DD48B /* ActionSheetLocalePicker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ActionSheetLocalePicker.h; sourceTree = "<group>"; };
    8D44746319D224AF007DD48B /* ActionSheetLocalePicker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ActionSheetLocalePicker.m; sourceTree = "<group>"; };
    8D44746419D224AF007DD48B /* SWActionSheet.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SWActionSheet.h; sourceTree = "<group>"; };
    8D44746519D224AF007DD48B /* SWActionSheet.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SWActionSheet.m; sourceTree = "<group>"; };
    8D495F591A8D62A700714784 /* FilterOptionTableViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FilterOptionTableViewCell.xib; sourceTree = "<group>"; };
    8D5456551A93634800C2F7B5 /* StoreWorkHoursCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = StoreWorkHoursCell.h; sourceTree = "<group>"; };
    8D5456561A93634800C2F7B5 /* StoreWorkHoursCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = StoreWorkHoursCell.m; sourceTree = "<group>"; };
    8D5456571A93634800C2F7B5 /* StoreWorkHoursCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = StoreWorkHoursCell.xib; sourceTree = "<group>"; };
    8D54565A1A93D9D400C2F7B5 /* StoreLocatorFilterVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = StoreLocatorFilterVC.xib; sourceTree = "<group>"; };
    8D54565C1A940FA600C2F7B5 /* TimView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = TimView.xib; sourceTree = "<group>"; };
    8D5F9BD51A8A8F850007CAEE /* BillDetailsView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillDetailsView.h; sourceTree = "<group>"; };
    8D5F9BD61A8A8F850007CAEE /* BillDetailsView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillDetailsView.m; sourceTree = "<group>"; };
    8D5F9BD81A8A8F950007CAEE /* BillDetailsView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillDetailsView.xib; sourceTree = "<group>"; };
    8D62E6FE1A92B985009B71F9 /* StoreLocatorVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = StoreLocatorVC.xib; sourceTree = "<group>"; };
    8D62E7001A92BA87009B71F9 /* StoreLocatorPageView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = StoreLocatorPageView.xib; sourceTree = "<group>"; };
    8D6908B519A1ED7400E7A427 /* iAd.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = iAd.framework; path = System/Library/Frameworks/iAd.framework; sourceTree = SDKROOT; };
    8D82341519F91C6A00E81A3C /* TurkcellUpdater.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; path = TurkcellUpdater.framework; sourceTree = "<group>"; };
    8D82341819F91FC000E81A3C /* GAI.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAI.h; path = GoogleAnalytics_3.09/GAI.h; sourceTree = "<group>"; };
    8D82341919F91FC000E81A3C /* GAIDictionaryBuilder.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAIDictionaryBuilder.h; path = GoogleAnalytics_3.09/GAIDictionaryBuilder.h; sourceTree = "<group>"; };
    8D82341A19F91FC000E81A3C /* GAIEcommerceFields.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAIEcommerceFields.h; path = GoogleAnalytics_3.09/GAIEcommerceFields.h; sourceTree = "<group>"; };
    8D82341B19F91FC000E81A3C /* GAIEcommerceProduct.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAIEcommerceProduct.h; path = GoogleAnalytics_3.09/GAIEcommerceProduct.h; sourceTree = "<group>"; };
    8D82341C19F91FC000E81A3C /* GAIEcommerceProductAction.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAIEcommerceProductAction.h; path = GoogleAnalytics_3.09/GAIEcommerceProductAction.h; sourceTree = "<group>"; };
    8D82341D19F91FC000E81A3C /* GAIEcommercePromotion.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAIEcommercePromotion.h; path = GoogleAnalytics_3.09/GAIEcommercePromotion.h; sourceTree = "<group>"; };
    8D82341E19F91FC000E81A3C /* GAIFields.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAIFields.h; path = GoogleAnalytics_3.09/GAIFields.h; sourceTree = "<group>"; };
    8D82341F19F91FC000E81A3C /* GAILogger.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAILogger.h; path = GoogleAnalytics_3.09/GAILogger.h; sourceTree = "<group>"; };
    8D82342019F91FC000E81A3C /* GAITrackedViewController.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAITrackedViewController.h; path = GoogleAnalytics_3.09/GAITrackedViewController.h; sourceTree = "<group>"; };
    8D82342119F91FC000E81A3C /* GAITracker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = GAITracker.h; path = GoogleAnalytics_3.09/GAITracker.h; sourceTree = "<group>"; };
    8D82342219F91FC000E81A3C /* libGoogleAnalyticsServices.a */ = {isa = PBXFileReference; lastKnownFileType = archive.ar; name = libGoogleAnalyticsServices.a; path = GoogleAnalytics_3.09/libGoogleAnalyticsServices.a; sourceTree = "<group>"; };
    8D88240C1A95F8040034D754 /* MySettingPUKTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MySettingPUKTableViewCell.h; sourceTree = "<group>"; };
    8D88240D1A95F8040034D754 /* MySettingPUKTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MySettingPUKTableViewCell.m; sourceTree = "<group>"; };
    8D88240E1A95F8040034D754 /* MySettingPUKTableViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = MySettingPUKTableViewCell.xib; sourceTree = "<group>"; };
    8D89BE591A975B300060B71A /* UIView+Badge.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIView+Badge.h"; sourceTree = "<group>"; };
    8D89BE5A1A975B300060B71A /* UIView+Badge.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIView+Badge.m"; sourceTree = "<group>"; };
    8D89BE7E1A9764E30060B71A /* NotificationsView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NotificationsView.h; sourceTree = "<group>"; };
    8D89BE7F1A9764E30060B71A /* NotificationsView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NotificationsView.m; sourceTree = "<group>"; };
    8D89BE811A9764EE0060B71A /* NotificationsView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = NotificationsView.xib; sourceTree = "<group>"; };
    8D89BE831A97688B0060B71A /* NotificationInfoView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NotificationInfoView.h; sourceTree = "<group>"; };
    8D89BE841A97688B0060B71A /* NotificationInfoView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NotificationInfoView.m; sourceTree = "<group>"; };
    8D89BE861A97689D0060B71A /* NotificationInfoView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = NotificationInfoView.xib; sourceTree = "<group>"; };
    8D8F9A891A9C8499003B0ACE /* Images.xcassets */ = {isa = PBXFileReference; lastKnownFileType = folder.assetcatalog; name = Images.xcassets; path = TurkcellHub/Images.xcassets; sourceTree = "<group>"; };
    8D8F9A8B1A9CA6E9003B0ACE /* NotificationsVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = NotificationsVC.xib; sourceTree = "<group>"; };
    8D8F9A8C1A9CA6E9003B0ACE /* NotificationTableViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = NotificationTableViewCell.xib; sourceTree = "<group>"; };
    8D943FEF1A8B65C200F6FE20 /* BillItemTableViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillItemTableViewCell.xib; sourceTree = "<group>"; };
    8D943FF11A8B811500F6FE20 /* BillDetailsFooterView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillDetailsFooterView.h; sourceTree = "<group>"; };
    8D943FF21A8B811500F6FE20 /* BillDetailsFooterView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillDetailsFooterView.m; sourceTree = "<group>"; };
    8D943FF41A8B812600F6FE20 /* BillDetailsFooterView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillDetailsFooterView.xib; sourceTree = "<group>"; };
    8D9784461A8F9B6D00918E3B /* MostNoticeableStatView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = MostNoticeableStatView.xib; sourceTree = "<group>"; };
    8D9879591A933862007C6356 /* StoreDetailsVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = StoreDetailsVC.xib; sourceTree = "<group>"; };
    8D9934B01A89F67F004BEF44 /* BillAnalysisViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillAnalysisViewModel.h; sourceTree = "<group>"; };
    8D9934B11A89F67F004BEF44 /* BillAnalysisViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillAnalysisViewModel.m; sourceTree = "<group>"; };
    8D9934B31A8A01BF004BEF44 /* BillStatButtonView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillStatButtonView.xib; sourceTree = "<group>"; };
    8D9934B51A8A3FDD004BEF44 /* BillCompareView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillCompareView.h; sourceTree = "<group>"; };
    8D9934B61A8A3FDD004BEF44 /* BillCompareView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillCompareView.m; sourceTree = "<group>"; };
    8D9934B81A8A3FEA004BEF44 /* BillCompareView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillCompareView.xib; sourceTree = "<group>"; };
    8D9934BA1A8A41C6004BEF44 /* BillCompareItemView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillCompareItemView.h; sourceTree = "<group>"; };
    8D9934BB1A8A41C6004BEF44 /* BillCompareItemView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillCompareItemView.m; sourceTree = "<group>"; };
    8D9934BD1A8A41D5004BEF44 /* BillCompareItemView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillCompareItemView.xib; sourceTree = "<group>"; };
    8D9AC82E19FA47580028664F /* CSApplicationState.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSApplicationState.h; sourceTree = "<group>"; };
    8D9AC82F19FA47580028664F /* CSCacheFlusher.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSCacheFlusher.h; sourceTree = "<group>"; };
    8D9AC83019FA47580028664F /* CSCensus.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSCensus.h; sourceTree = "<group>"; };
    8D9AC83119FA47580028664F /* CSComScore.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSComScore.h; sourceTree = "<group>"; };
    8D9AC83219FA47580028664F /* CSCore.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSCore.h; sourceTree = "<group>"; };
    8D9AC83319FA47580028664F /* CSEventType.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSEventType.h; sourceTree = "<group>"; };
    8D9AC83419FA47580028664F /* CSKeepAlive.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSKeepAlive.h; sourceTree = "<group>"; };
    8D9AC83519FA47580028664F /* CSMeasurementDispatcher.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSMeasurementDispatcher.h; sourceTree = "<group>"; };
    8D9AC83619FA47580028664F /* CSNotificationsObserver.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSNotificationsObserver.h; sourceTree = "<group>"; };
    8D9AC83719FA47580028664F /* CSOfflineCache.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSOfflineCache.h; sourceTree = "<group>"; };
    8D9AC83819FA47580028664F /* CSSessionState.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSSessionState.h; sourceTree = "<group>"; };
    8D9AC83919FA47580028664F /* CSStorage.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSStorage.h; sourceTree = "<group>"; };
    8D9AC83A19FA47580028664F /* CSTaskExecutor.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSTaskExecutor.h; sourceTree = "<group>"; };
    8D9AC83B19FA47580028664F /* CSTransmissionMode.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CSTransmissionMode.h; sourceTree = "<group>"; };
    8D9AC83C19FA47580028664F /* libcomScore.a */ = {isa = PBXFileReference; lastKnownFileType = archive.ar; path = libcomScore.a; sourceTree = "<group>"; };
    8D9F40D51A8B4ED4001503B5 /* BillDetailsViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillDetailsViewModel.h; sourceTree = "<group>"; };
    8D9F40D61A8B4ED4001503B5 /* BillDetailsViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillDetailsViewModel.m; sourceTree = "<group>"; };
    8D9F40D81A8B5D2C001503B5 /* BillDetailViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillDetailViewModel.h; sourceTree = "<group>"; };
    8D9F40D91A8B5D2C001503B5 /* BillDetailViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillDetailViewModel.m; sourceTree = "<group>"; };
    8DA035D81A8DF146006F8C88 /* FilterHeaderView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FilterHeaderView.xib; sourceTree = "<group>"; };
    8DA035DC1A8E036E006F8C88 /* BillFilterFooterView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillFilterFooterView.h; sourceTree = "<group>"; };
    8DA035DD1A8E036E006F8C88 /* BillFilterFooterView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillFilterFooterView.m; sourceTree = "<group>"; };
    8DA035DF1A8E0388006F8C88 /* BillFilterFooterView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillFilterFooterView.xib; sourceTree = "<group>"; };
    8DA035E11A8E268F006F8C88 /* BillAnalysisDetailVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillAnalysisDetailVC.xib; sourceTree = "<group>"; };
    8DA035E31A8E3132006F8C88 /* BillAnalysisDetailViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillAnalysisDetailViewModel.h; sourceTree = "<group>"; };
    8DA035E41A8E3132006F8C88 /* BillAnalysisDetailViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillAnalysisDetailViewModel.m; sourceTree = "<group>"; };
    8DB1001319C19185008CAE6C /* LocalAuthentication.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = LocalAuthentication.framework; path = System/Library/Frameworks/LocalAuthentication.framework; sourceTree = SDKROOT; };
    8DB500961A955FF700DE9728 /* NextPrevView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = NextPrevView.xib; sourceTree = "<group>"; };
    8DB500981A956D8300DE9728 /* InternalBillVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = InternalBillVC.xib; sourceTree = "<group>"; };
    8DB5009A1A95754B00DE9728 /* BillInvoiceDetailViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillInvoiceDetailViewModel.h; sourceTree = "<group>"; };
    8DB5009B1A95754B00DE9728 /* BillInvoiceDetailViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillInvoiceDetailViewModel.m; sourceTree = "<group>"; };
    8DEE2C1F19AB803A00A6F5E9 /* Crashlytics.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = Crashlytics.framework; path = Crashlytics/Crashlytics.framework; sourceTree = "<group>"; };
    9CF2B2A21B4FF9D20095FBBE /* Netmera.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; path = Netmera.framework; sourceTree = "<group>"; };
    9CF2B2A41B4FF9D20095FBBE /* NetmeraConfigurations.xcconfig */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.xcconfig; path = NetmeraConfigurations.xcconfig; sourceTree = "<group>"; };
    9CF2B2A51B4FF9D20095FBBE /* NetmeraLocalization.strings */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.strings; path = NetmeraLocalization.strings; sourceTree = "<group>"; };
    9CF2B2A61B4FF9D20095FBBE /* NetmeraSettings.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = NetmeraSettings.plist; sourceTree = "<group>"; };
    9CF2B2A71B4FF9D20095FBBE /* NMPushInboxCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NMPushInboxCell.h; sourceTree = "<group>"; };
    9CF2B2A81B4FF9D20095FBBE /* NMPushInboxCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NMPushInboxCell.m; sourceTree = "<group>"; };
    9CF2B2A91B4FF9D20095FBBE /* NMPushInboxCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = NMPushInboxCell.xib; sourceTree = "<group>"; };
    9CF2B2AA1B4FF9D20095FBBE /* NMPushInboxViewController.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NMPushInboxViewController.h; sourceTree = "<group>"; };
    9CF2B2AB1B4FF9D20095FBBE /* NMPushInboxViewController.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NMPushInboxViewController.m; sourceTree = "<group>"; };
    9CF2B2AC1B4FF9D20095FBBE /* NMPushInboxViewController.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = NMPushInboxViewController.xib; sourceTree = "<group>"; };
    9CF2B2AD1B4FF9D20095FBBE /* NMRichPushViewController.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NMRichPushViewController.h; sourceTree = "<group>"; };
    9CF2B2AE1B4FF9D20095FBBE /* NMRichPushViewController.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NMRichPushViewController.m; sourceTree = "<group>"; };
    9CF2B2AF1B4FF9D20095FBBE /* popupClose.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = popupClose.png; sourceTree = "<group>"; };
    9CF2B2B01B4FF9D20095FBBE /* popupClose@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "popupClose@2x.png"; sourceTree = "<group>"; };
    9CF2B2B11B4FF9D20095FBBE /* pushInboxEmptyImage.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = pushInboxEmptyImage.png; sourceTree = "<group>"; };
    9CF2B2B21B4FF9D20095FBBE /* pushInboxEmptyImage@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "pushInboxEmptyImage@2x.png"; sourceTree = "<group>"; };
    9CF2B2B31B4FF9D20095FBBE /* Silence.wav */ = {isa = PBXFileReference; lastKnownFileType = audio.wav; path = Silence.wav; sourceTree = "<group>"; };
    9F027D1D1A89FBCD007B0F0C /* Launch Screen.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; name = "Launch Screen.xib"; path = "TurkcellHub/Launch Screen.xib"; sourceTree = "<group>"; };
    9F027D1F1A8A3A10007B0F0C /* itemised.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = itemised.json; sourceTree = "<group>"; };
    9F027D201A8A3A10007B0F0C /* odeme.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = odeme.json; sourceTree = "<group>"; };
    9F027D211A8A3A10007B0F0C /* summary.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = summary.json; sourceTree = "<group>"; };
    9F027D251A8A3B10007B0F0C /* requestAuthToken.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = requestAuthToken.json; sourceTree = "<group>"; };
    9F027D291A8B5670007B0F0C /* PayBillVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = PayBillVC.xib; sourceTree = "<group>"; };
    9F2C30931AA49F8000C293EC /* CurioAction.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioAction.h; sourceTree = "<group>"; };
    9F2C30941AA49F8000C293EC /* CurioAction.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioAction.m; sourceTree = "<group>"; };
    9F2C30951AA49F8000C293EC /* CurioActionToolkit.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioActionToolkit.h; sourceTree = "<group>"; };
    9F2C30961AA49F8000C293EC /* CurioActionToolkit.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioActionToolkit.m; sourceTree = "<group>"; };
    9F2C30971AA49F8000C293EC /* CurioConstants.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioConstants.h; sourceTree = "<group>"; };
    9F2C30981AA49F8000C293EC /* CurioConstants.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioConstants.m; sourceTree = "<group>"; };
    9F2C30991AA49F8000C293EC /* CurioDB.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioDB.h; sourceTree = "<group>"; };
    9F2C309A1AA49F8000C293EC /* CurioDB.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioDB.m; sourceTree = "<group>"; };
    9F2C309B1AA49F8000C293EC /* CurioDBToolkit.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioDBToolkit.h; sourceTree = "<group>"; };
    9F2C309C1AA49F8000C293EC /* CurioDBToolkit.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioDBToolkit.m; sourceTree = "<group>"; };
    9F2C309D1AA49F8000C293EC /* CurioLocationData.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioLocationData.h; sourceTree = "<group>"; };
    9F2C309E1AA49F8000C293EC /* CurioLocationData.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioLocationData.m; sourceTree = "<group>"; };
    9F2C309F1AA49F8000C293EC /* CurioLocationManager.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioLocationManager.h; sourceTree = "<group>"; };
    9F2C30A01AA49F8000C293EC /* CurioLocationManager.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioLocationManager.m; sourceTree = "<group>"; };
    9F2C30A11AA49F8000C293EC /* CurioNetwork.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioNetwork.h; sourceTree = "<group>"; };
    9F2C30A21AA49F8000C293EC /* CurioNetwork.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioNetwork.m; sourceTree = "<group>"; };
    9F2C30A31AA49F8000C293EC /* CurioNotificationManager.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioNotificationManager.h; sourceTree = "<group>"; };
    9F2C30A41AA49F8000C293EC /* CurioNotificationManager.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioNotificationManager.m; sourceTree = "<group>"; };
    9F2C30A51AA49F8000C293EC /* CurioPostOffice.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioPostOffice.h; sourceTree = "<group>"; };
    9F2C30A61AA49F8000C293EC /* CurioPostOffice.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioPostOffice.m; sourceTree = "<group>"; };
    9F2C30A71AA49F8000C293EC /* CurioPushData.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioPushData.h; sourceTree = "<group>"; };
    9F2C30A81AA49F8000C293EC /* CurioPushData.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioPushData.m; sourceTree = "<group>"; };
    9F2C30A91AA49F8000C293EC /* CurioReachabilityEx.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioReachabilityEx.h; sourceTree = "<group>"; };
    9F2C30AA1AA49F8000C293EC /* CurioReachabilityEx.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioReachabilityEx.m; sourceTree = "<group>"; };
    9F2C30AB1AA49F8000C293EC /* CurioSDK-Prefix.pch */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "CurioSDK-Prefix.pch"; sourceTree = "<group>"; };
    9F2C30AC1AA49F8000C293EC /* CurioSDK.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioSDK.h; sourceTree = "<group>"; };
    9F2C30AD1AA49F8000C293EC /* CurioSDK.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioSDK.m; sourceTree = "<group>"; };
    9F2C30AE1AA49F8000C293EC /* CurioSettings.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioSettings.h; sourceTree = "<group>"; };
    9F2C30AF1AA49F8000C293EC /* CurioSettings.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioSettings.m; sourceTree = "<group>"; };
    9F2C30B01AA49F8000C293EC /* CurioUtil.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CurioUtil.h; sourceTree = "<group>"; };
    9F2C30B11AA49F8000C293EC /* CurioUtil.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CurioUtil.m; sourceTree = "<group>"; };
    9F3101911A88E23D00D7C8E2 /* XYPieChart.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = XYPieChart.h; sourceTree = "<group>"; };
    9F3101921A88E23D00D7C8E2 /* XYPieChart.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = XYPieChart.m; sourceTree = "<group>"; };
    9F3101941A88E24800D7C8E2 /* ProductAndServiceView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ProductAndServiceView.h; sourceTree = "<group>"; };
    9F3101951A88E24800D7C8E2 /* ProductAndServiceView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ProductAndServiceView.m; sourceTree = "<group>"; };
    9F3101961A88E24800D7C8E2 /* ProductAndServiceView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = ProductAndServiceView.xib; sourceTree = "<group>"; };
    9F3101971A88E24800D7C8E2 /* ProductAndServiceViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ProductAndServiceViewModel.h; sourceTree = "<group>"; };
    9F3101981A88E24800D7C8E2 /* ProductAndServiceViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ProductAndServiceViewModel.m; sourceTree = "<group>"; };
    9F31019D1A88E26900D7C8E2 /* AllowanceFooterView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowanceFooterView.h; sourceTree = "<group>"; };
    9F31019E1A88E26900D7C8E2 /* AllowanceFooterView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowanceFooterView.m; sourceTree = "<group>"; };
    9F31019F1A88E26900D7C8E2 /* AllowanceFooterView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = AllowanceFooterView.xib; sourceTree = "<group>"; };
    9F3101A01A88E26900D7C8E2 /* AllowanceModelView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowanceModelView.h; sourceTree = "<group>"; };
    9F3101A11A88E26900D7C8E2 /* AllowanceModelView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowanceModelView.m; sourceTree = "<group>"; };
    9F3101A21A88E26900D7C8E2 /* AllowancePurchaseView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowancePurchaseView.h; sourceTree = "<group>"; };
    9F3101A31A88E26900D7C8E2 /* AllowancePurchaseView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowancePurchaseView.m; sourceTree = "<group>"; };
    9F3101A41A88E26900D7C8E2 /* AllowancePurchaseView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = AllowancePurchaseView.xib; sourceTree = "<group>"; };
    9F3101A51A88E26900D7C8E2 /* BaseChartView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BaseChartView.h; sourceTree = "<group>"; };
    9F3101A61A88E26900D7C8E2 /* BaseChartView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BaseChartView.m; sourceTree = "<group>"; };
    9F3101A71A88E26900D7C8E2 /* BaseChartView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BaseChartView.xib; sourceTree = "<group>"; };
    9F3101A81A88E26900D7C8E2 /* BillFooterView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillFooterView.h; sourceTree = "<group>"; };
    9F3101A91A88E26900D7C8E2 /* BillFooterView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillFooterView.m; sourceTree = "<group>"; };
    9F3101AA1A88E26900D7C8E2 /* BillFooterView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillFooterView.xib; sourceTree = "<group>"; };
    9F3101AB1A88E26900D7C8E2 /* BillViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillViewModel.h; sourceTree = "<group>"; };
    9F3101AC1A88E26900D7C8E2 /* BillViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillViewModel.m; sourceTree = "<group>"; };
    9F3101AD1A88E26900D7C8E2 /* ChartView+DataHandler.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "ChartView+DataHandler.h"; sourceTree = "<group>"; };
    9F3101AE1A88E26900D7C8E2 /* ChartView+DataHandler.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "ChartView+DataHandler.m"; sourceTree = "<group>"; };
    9F3101AF1A88E26900D7C8E2 /* UILabel+NumberAnimation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UILabel+NumberAnimation.h"; sourceTree = "<group>"; };
    9F3101B01A88E26900D7C8E2 /* UILabel+NumberAnimation.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UILabel+NumberAnimation.m"; sourceTree = "<group>"; };
    9F3101BD1A88E28500D7C8E2 /* CreditView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = CreditView.xib; sourceTree = "<group>"; };
    9F3101BE1A88E28500D7C8E2 /* CreditViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CreditViewModel.h; sourceTree = "<group>"; };
    9F3101BF1A88E28500D7C8E2 /* CreditViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CreditViewModel.m; sourceTree = "<group>"; };
    9F3101C21A88E29100D7C8E2 /* ScrollThingyView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = ScrollThingyView.xib; sourceTree = "<group>"; };
    9F3101C41A88E2C200D7C8E2 /* AccountInfoView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AccountInfoView.h; sourceTree = "<group>"; };
    9F3101C51A88E2C200D7C8E2 /* AccountInfoView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AccountInfoView.m; sourceTree = "<group>"; };
    9F3101C61A88E2C200D7C8E2 /* AccountInfoView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = AccountInfoView.xib; sourceTree = "<group>"; };
    9F3101C71A88E2C200D7C8E2 /* AccountView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = AccountView.xib; sourceTree = "<group>"; };
    9F3101CB1A88E2E900D7C8E2 /* CampaignModelView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CampaignModelView.h; sourceTree = "<group>"; };
    9F3101CC1A88E2E900D7C8E2 /* CampaignModelView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CampaignModelView.m; sourceTree = "<group>"; };
    9F3101CD1A88E2E900D7C8E2 /* CampaignView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CampaignView.h; sourceTree = "<group>"; };
    9F3101CE1A88E2E900D7C8E2 /* CampaignView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CampaignView.m; sourceTree = "<group>"; };
    9F3101CF1A88E2E900D7C8E2 /* CampaignView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = CampaignView.xib; sourceTree = "<group>"; };
    9F3101D01A88E2E900D7C8E2 /* MNTView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = MNTView.xib; sourceTree = "<group>"; };
    9F3101D51A88E2F800D7C8E2 /* HomeLoginView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = HomeLoginView.xib; sourceTree = "<group>"; };
    9F3101DD1A88E31400D7C8E2 /* FilterButton.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FilterButton.xib; sourceTree = "<group>"; };
    9F3101DE1A88E31400D7C8E2 /* FilterDirectView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterDirectView.h; sourceTree = "<group>"; };
    9F3101DF1A88E31400D7C8E2 /* FilterDirectView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterDirectView.m; sourceTree = "<group>"; };
    9F3101E01A88E31400D7C8E2 /* FilterDirectView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FilterDirectView.xib; sourceTree = "<group>"; };
    9F3101E11A88E31400D7C8E2 /* FilterFooterView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterFooterView.h; sourceTree = "<group>"; };
    9F3101E21A88E31400D7C8E2 /* FilterFooterView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterFooterView.m; sourceTree = "<group>"; };
    9F3101E31A88E31400D7C8E2 /* FilterFooterView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FilterFooterView.xib; sourceTree = "<group>"; };
    9F3101E41A88E31400D7C8E2 /* FilterSectionHeaderView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterSectionHeaderView.h; sourceTree = "<group>"; };
    9F3101E51A88E31400D7C8E2 /* FilterSectionHeaderView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterSectionHeaderView.m; sourceTree = "<group>"; };
    9F3101E61A88E31400D7C8E2 /* FilterSectionHeaderView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FilterSectionHeaderView.xib; sourceTree = "<group>"; };
    9F3101E71A88E31400D7C8E2 /* HomeSearchView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = HomeSearchView.xib; sourceTree = "<group>"; };
    9F3101F31A88E32A00D7C8E2 /* ProfilePhotoActionView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ProfilePhotoActionView.h; sourceTree = "<group>"; };
    9F3101F41A88E32A00D7C8E2 /* ProfilePhotoActionView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ProfilePhotoActionView.m; sourceTree = "<group>"; };
    9F3101F51A88E32A00D7C8E2 /* ProfilePhotoActionView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = ProfilePhotoActionView.xib; sourceTree = "<group>"; };
    9F3101F61A88E32A00D7C8E2 /* SettingsPageHeaderView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SettingsPageHeaderView.h; sourceTree = "<group>"; };
    9F3101F71A88E32A00D7C8E2 /* SettingsPageHeaderView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SettingsPageHeaderView.m; sourceTree = "<group>"; };
    9F3101F81A88E32A00D7C8E2 /* SettingsPageHeaderView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SettingsPageHeaderView.xib; sourceTree = "<group>"; };
    9F3101F91A88E32A00D7C8E2 /* SettingsPageMenuViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SettingsPageMenuViewCell.xib; sourceTree = "<group>"; };
    9F3101FA1A88E32A00D7C8E2 /* SettingsPageView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SettingsPageView.xib; sourceTree = "<group>"; };
    9F3102011A88E33D00D7C8E2 /* GBAlertView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = GBAlertView.xib; sourceTree = "<group>"; };
    9F3102021A88E33D00D7C8E2 /* ScrollThingyItemView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ScrollThingyItemView.h; sourceTree = "<group>"; };
    9F3102031A88E33D00D7C8E2 /* ScrollThingyItemView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ScrollThingyItemView.m; sourceTree = "<group>"; };
    9F3102041A88E33D00D7C8E2 /* ScrollThingyItemView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = ScrollThingyItemView.xib; sourceTree = "<group>"; };
    9F3102081A88E34600D7C8E2 /* RSSearchView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = RSSearchView.xib; sourceTree = "<group>"; };
    9F3102221A88E41900D7C8E2 /* MySettingSelectionTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MySettingSelectionTableViewCell.h; sourceTree = "<group>"; };
    9F3102231A88E41900D7C8E2 /* MySettingSelectionTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MySettingSelectionTableViewCell.m; sourceTree = "<group>"; };
    9F3102241A88E41900D7C8E2 /* MySettingSelectionTableViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = MySettingSelectionTableViewCell.xib; sourceTree = "<group>"; };
    9F3102251A88E41900D7C8E2 /* MySettingsVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = MySettingsVC.xib; sourceTree = "<group>"; };
    9F3102261A88E41900D7C8E2 /* MySettingTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MySettingTableViewCell.h; sourceTree = "<group>"; };
    9F3102271A88E41900D7C8E2 /* MySettingTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MySettingTableViewCell.m; sourceTree = "<group>"; };
    9F3102281A88E41900D7C8E2 /* MySettingTableViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = MySettingTableViewCell.xib; sourceTree = "<group>"; };
    9F3102291A88E41900D7C8E2 /* SettingMainViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SettingMainViewModel.h; sourceTree = "<group>"; };
    9F31022A1A88E41900D7C8E2 /* SettingMainViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SettingMainViewModel.m; sourceTree = "<group>"; };
    9F31022B1A88E41900D7C8E2 /* SettingSubViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SettingSubViewModel.h; sourceTree = "<group>"; };
    9F31022C1A88E41900D7C8E2 /* SettingSubViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SettingSubViewModel.m; sourceTree = "<group>"; };
    9F31022D1A88E41900D7C8E2 /* SettingsVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SettingsVC.xib; sourceTree = "<group>"; };
    9F31022E1A88E41900D7C8E2 /* SettingViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SettingViewModel.h; sourceTree = "<group>"; };
    9F31022F1A88E41900D7C8E2 /* SettingViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SettingViewModel.m; sourceTree = "<group>"; };
    9F31023A1A88E44100D7C8E2 /* WebVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = WebVC.h; sourceTree = "<group>"; };
    9F31023B1A88E44100D7C8E2 /* WebVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = WebVC.m; sourceTree = "<group>"; };
    9F31023C1A88E44100D7C8E2 /* WebVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = WebVC.xib; sourceTree = "<group>"; };
    9F31023F1A88E46C00D7C8E2 /* BillAnalysisView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillAnalysisView.h; sourceTree = "<group>"; };
    9F3102401A88E46C00D7C8E2 /* BillAnalysisView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillAnalysisView.m; sourceTree = "<group>"; };
    9F3102411A88E46C00D7C8E2 /* BillAnalysisView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillAnalysisView.xib; sourceTree = "<group>"; };
    9F3102421A88E46C00D7C8E2 /* BillSummaryView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillSummaryView.h; sourceTree = "<group>"; };
    9F3102431A88E46C00D7C8E2 /* BillSummaryView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillSummaryView.m; sourceTree = "<group>"; };
    9F3102441A88E46C00D7C8E2 /* BillSummaryView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillSummaryView.xib; sourceTree = "<group>"; };
    9F3102451A88E46C00D7C8E2 /* BillsVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillsVC.xib; sourceTree = "<group>"; };
    9F3102461A88E46C00D7C8E2 /* FoldableListView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FoldableListView.h; sourceTree = "<group>"; };
    9F3102471A88E46C00D7C8E2 /* FoldableListView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FoldableListView.m; sourceTree = "<group>"; };
    9F3102481A88E46C00D7C8E2 /* FoldableListView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FoldableListView.xib; sourceTree = "<group>"; };
    9F3102501A88E47B00D7C8E2 /* BillSummaryCellView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = BillSummaryCellView.xib; sourceTree = "<group>"; };
    9F3102521A88E48300D7C8E2 /* AnonymousHomeVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = AnonymousHomeVC.xib; sourceTree = "<group>"; };
    9F3102531A88E48300D7C8E2 /* AppTourView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = AppTourView.xib; sourceTree = "<group>"; };
    9F3102541A88E48300D7C8E2 /* HomeVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = HomeVC.xib; sourceTree = "<group>"; };
    9F3102601A88E4A000D7C8E2 /* DateSelectorTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = DateSelectorTableViewCell.h; sourceTree = "<group>"; };
    9F3102611A88E4A000D7C8E2 /* DateSelectorTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = DateSelectorTableViewCell.m; sourceTree = "<group>"; };
    9F3102621A88E4A000D7C8E2 /* DateSelectorTableViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = DateSelectorTableViewCell.xib; sourceTree = "<group>"; };
    9F3102631A88E4A000D7C8E2 /* DateSelectorView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = DateSelectorView.h; sourceTree = "<group>"; };
    9F3102641A88E4A000D7C8E2 /* DateSelectorView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = DateSelectorView.m; sourceTree = "<group>"; };
    9F3102651A88E4A000D7C8E2 /* DateSelectorView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = DateSelectorView.xib; sourceTree = "<group>"; };
    9F3102661A88E4A000D7C8E2 /* MyUsageVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = MyUsageVC.xib; sourceTree = "<group>"; };
    9F3102671A88E4A000D7C8E2 /* UsageFooterView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UsageFooterView.h; sourceTree = "<group>"; };
    9F3102681A88E4A000D7C8E2 /* UsageFooterView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UsageFooterView.m; sourceTree = "<group>"; };
    9F3102691A88E4A000D7C8E2 /* UsageFooterView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = UsageFooterView.xib; sourceTree = "<group>"; };
    9F31026A1A88E4A000D7C8E2 /* UsageItemTableViewCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = UsageItemTableViewCell.xib; sourceTree = "<group>"; };
    9F31026B1A88E4A000D7C8E2 /* UsageViewModel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UsageViewModel.h; sourceTree = "<group>"; };
    9F31026C1A88E4A000D7C8E2 /* UsageViewModel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UsageViewModel.m; sourceTree = "<group>"; };
    9F3102761A88E4AC00D7C8E2 /* AllowancesVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = AllowancesVC.xib; sourceTree = "<group>"; };
    9F31027B1A88E4BA00D7C8E2 /* DeviceDetailVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = DeviceDetailVC.xib; sourceTree = "<group>"; };
    9F31027C1A88E4BA00D7C8E2 /* FilterItemCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterItemCell.h; sourceTree = "<group>"; };
    9F31027D1A88E4BA00D7C8E2 /* FilterItemCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterItemCell.m; sourceTree = "<group>"; };
    9F31027E1A88E4BA00D7C8E2 /* FilterItemCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FilterItemCell.xib; sourceTree = "<group>"; };
    9F31027F1A88E4BA00D7C8E2 /* FilterVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = FilterVC.xib; sourceTree = "<group>"; };
    9F3102801A88E4BA00D7C8E2 /* SearchResultCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SearchResultCell.h; sourceTree = "<group>"; };
    9F3102811A88E4BA00D7C8E2 /* SearchResultCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SearchResultCell.m; sourceTree = "<group>"; };
    9F3102821A88E4BA00D7C8E2 /* SearchResultCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SearchResultCell.xib; sourceTree = "<group>"; };
    9F3102831A88E4BA00D7C8E2 /* SearchResultInAppCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SearchResultInAppCell.h; sourceTree = "<group>"; };
    9F3102841A88E4BA00D7C8E2 /* SearchResultInAppCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SearchResultInAppCell.m; sourceTree = "<group>"; };
    9F3102851A88E4BA00D7C8E2 /* SearchResultInAppCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SearchResultInAppCell.xib; sourceTree = "<group>"; };
    9F3102861A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SearchResultLoadMoreCell.h; sourceTree = "<group>"; };
    9F3102871A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SearchResultLoadMoreCell.m; sourceTree = "<group>"; };
    9F3102881A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SearchResultLoadMoreCell.xib; sourceTree = "<group>"; };
    9F3102891A88E4BA00D7C8E2 /* SearchResultOneBoxCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SearchResultOneBoxCell.h; sourceTree = "<group>"; };
    9F31028A1A88E4BA00D7C8E2 /* SearchResultOneBoxCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SearchResultOneBoxCell.m; sourceTree = "<group>"; };
    9F31028B1A88E4BA00D7C8E2 /* SearchResultOneBoxCell.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SearchResultOneBoxCell.xib; sourceTree = "<group>"; };
    9F31028C1A88E4BA00D7C8E2 /* SearchSupportPageVC.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SearchSupportPageVC.xib; sourceTree = "<group>"; };
    9F31028D1A88E4BA00D7C8E2 /* SearchSupportPageView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = SearchSupportPageView.xib; sourceTree = "<group>"; };
    9F31029C1A88E4C700D7C8E2 /* LoadTLView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = LoadTLView.h; sourceTree = "<group>"; };
    9F31029D1A88E4C700D7C8E2 /* LoadTLView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = LoadTLView.m; sourceTree = "<group>"; };
    9F31029E1A88E4C700D7C8E2 /* LoadTLView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = LoadTLView.xib; sourceTree = "<group>"; };
    9F31029F1A88E4C700D7C8E2 /* PayWithCreditCardView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PayWithCreditCardView.h; sourceTree = "<group>"; };
    9F3102A01A88E4C700D7C8E2 /* PayWithCreditCardView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PayWithCreditCardView.m; sourceTree = "<group>"; };
    9F3102A11A88E4C700D7C8E2 /* PayWithCreditCardView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = PayWithCreditCardView.xib; sourceTree = "<group>"; };
    9F3102A21A88E4C700D7C8E2 /* PayWithTLCreditView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PayWithTLCreditView.h; sourceTree = "<group>"; };
    9F3102A31A88E4C700D7C8E2 /* PayWithTLCreditView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PayWithTLCreditView.m; sourceTree = "<group>"; };
    9F3102A41A88E4C700D7C8E2 /* PayWithTLCreditView.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = PayWithTLCreditView.xib; sourceTree = "<group>"; };
    9F3102AB1A88E50600D7C8E2 /* UINavigationBar+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UINavigationBar+Extensions.h"; sourceTree = "<group>"; };
    9F3102AC1A88E50600D7C8E2 /* UINavigationBar+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UINavigationBar+Extensions.m"; sourceTree = "<group>"; };
    9F3102AD1A88E50600D7C8E2 /* UITableView+Empty.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UITableView+Empty.h"; sourceTree = "<group>"; };
    9F3102AE1A88E50600D7C8E2 /* UITableView+Empty.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UITableView+Empty.m"; sourceTree = "<group>"; };
    9F3102AF1A88E50600D7C8E2 /* NSNull+Enumeration.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSNull+Enumeration.h"; sourceTree = "<group>"; };
    9F3102B01A88E50600D7C8E2 /* NSNull+Enumeration.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSNull+Enumeration.m"; sourceTree = "<group>"; };
    9F3102BA1A88E57900D7C8E2 /* AppStatics.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AppStatics.h; sourceTree = "<group>"; };
    9F3102BB1A88E57900D7C8E2 /* AppStatics.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AppStatics.m; sourceTree = "<group>"; };
    9F3102C51A88E5F600D7C8E2 /* RG_TU_backarrow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_TU_backarrow.png; sourceTree = "<group>"; };
    9F3102C61A88E5F600D7C8E2 /* RG_TU_backarrow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_TU_backarrow@2x.png"; sourceTree = "<group>"; };
    9F3102C71A88E5F600D7C8E2 /* RG_TU_backbtnarrow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_TU_backbtnarrow.png; sourceTree = "<group>"; };
    9F3102C81A88E5F600D7C8E2 /* RG_TU_backbtnarrow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_TU_backbtnarrow@2x.png"; sourceTree = "<group>"; };
    9F3102C91A88E5F600D7C8E2 /* RG_TU_dropdownarrow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_TU_dropdownarrow.png; sourceTree = "<group>"; };
    9F3102CA1A88E5F600D7C8E2 /* RG_TU_dropdownarrow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_TU_dropdownarrow@2x.png"; sourceTree = "<group>"; };
    9F3102CB1A88E5F600D7C8E2 /* RG_TU_mastercard.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_TU_mastercard.png; sourceTree = "<group>"; };
    9F3102CC1A88E5F600D7C8E2 /* RG_TU_mastercard@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_TU_mastercard@2x.png"; sourceTree = "<group>"; };
    9F3102CD1A88E5F600D7C8E2 /* RG_TU_phoneicone.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_TU_phoneicone.png; sourceTree = "<group>"; };
    9F3102CE1A88E5F600D7C8E2 /* RG_TU_phoneicone@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_TU_phoneicone@2x.png"; sourceTree = "<group>"; };
    9F3102CF1A88E5F600D7C8E2 /* RG_TU_securitydigits.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_TU_securitydigits.png; sourceTree = "<group>"; };
    9F3102D01A88E5F600D7C8E2 /* RG_TU_securitydigits@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_TU_securitydigits@2x.png"; sourceTree = "<group>"; };
    9F3102D11A88E5F600D7C8E2 /* RG_TU_tick.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_TU_tick.png; sourceTree = "<group>"; };
    9F3102D21A88E5F600D7C8E2 /* RG_TU_tick@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_TU_tick@2x.png"; sourceTree = "<group>"; };
    9F3102D51A88E5F600D7C8E2 /* RG_tu_close_info_btn.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_close_info_btn.png; sourceTree = "<group>"; };
    9F3102D61A88E5F600D7C8E2 /* RG_tu_close_info_btn@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_close_info_btn@2x.png"; sourceTree = "<group>"; };
    9F3102D71A88E5F600D7C8E2 /* RG_tu_default_profile.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_default_profile.png; sourceTree = "<group>"; };
    9F3102D81A88E5F600D7C8E2 /* RG_tu_default_profile@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_default_profile@2x.png"; sourceTree = "<group>"; };
    9F3102D91A88E5F600D7C8E2 /* RG_tu_info_btn.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_info_btn.png; sourceTree = "<group>"; };
    9F3102DA1A88E5F600D7C8E2 /* RG_tu_info_btn@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_info_btn@2x.png"; sourceTree = "<group>"; };
    9F3102DB1A88E5F600D7C8E2 /* RG_tu_textfield_OFF.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_textfield_OFF.png; sourceTree = "<group>"; };
    9F3102DC1A88E5F600D7C8E2 /* RG_tu_textfield_OFF@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_textfield_OFF@2x.png"; sourceTree = "<group>"; };
    9F3102DD1A88E5F600D7C8E2 /* RG_tu_textfield_OFF@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_textfield_OFF@3x.png"; sourceTree = "<group>"; };
    9F3102DE1A88E5F600D7C8E2 /* RG_tu_textfield_ON.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_textfield_ON.png; sourceTree = "<group>"; };
    9F3102DF1A88E5F600D7C8E2 /* RG_tu_textfield_ON@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_textfield_ON@2x.png"; sourceTree = "<group>"; };
    9F3102E01A88E5F600D7C8E2 /* RG_tu_textfield_ON@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_textfield_ON@3x.png"; sourceTree = "<group>"; };
    9F3102E21A88E5F600D7C8E2 /* RG_sett_iconavatar_tsON.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_sett_iconavatar_tsON.png; sourceTree = "<group>"; };
    9F3102E31A88E5F600D7C8E2 /* RG_sett_iconavatar_tsON@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_sett_iconavatar_tsON@2x.png"; sourceTree = "<group>"; };
    9F3102E41A88E5F600D7C8E2 /* RG_SS_default_header.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_SS_default_header.png; sourceTree = "<group>"; };
    9F3102E51A88E5F600D7C8E2 /* RG_SS_default_header@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_SS_default_header@2x.png"; sourceTree = "<group>"; };
    9F3102E91A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_SS_homepage_searchbox_active1.png; sourceTree = "<group>"; };
    9F3102EA1A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_SS_homepage_searchbox_active1@2x.png"; sourceTree = "<group>"; };
    9F3102EB1A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_SS_homepage_searchbox_active1@3x.png"; sourceTree = "<group>"; };
    9F3102F01A88E5F600D7C8E2 /* Turkcell Satura Bold Italic.ttf */ = {isa = PBXFileReference; lastKnownFileType = file; path = "Turkcell Satura Bold Italic.ttf"; sourceTree = "<group>"; };
    9F3102F11A88E5F600D7C8E2 /* Turkcell Satura Demi Italic.ttf */ = {isa = PBXFileReference; lastKnownFileType = file; path = "Turkcell Satura Demi Italic.ttf"; sourceTree = "<group>"; };
    9F3102F21A88E5F600D7C8E2 /* Turkcell Satura Demi.ttf */ = {isa = PBXFileReference; lastKnownFileType = file; path = "Turkcell Satura Demi.ttf"; sourceTree = "<group>"; };
    9F3102F31A88E5F600D7C8E2 /* Turkcell Satura Italic.ttf */ = {isa = PBXFileReference; lastKnownFileType = file; path = "Turkcell Satura Italic.ttf"; sourceTree = "<group>"; };
    9F3102F41A88E5F600D7C8E2 /* Turkcell Satura Medium Italic.ttf */ = {isa = PBXFileReference; lastKnownFileType = file; path = "Turkcell Satura Medium Italic.ttf"; sourceTree = "<group>"; };
    9F3102F51A88E5F600D7C8E2 /* Turkcell Satura Medium.ttf */ = {isa = PBXFileReference; lastKnownFileType = file; path = "Turkcell Satura Medium.ttf"; sourceTree = "<group>"; };
    9F3102F61A88E5F600D7C8E2 /* Turkcell Satura Regular.ttf */ = {isa = PBXFileReference; lastKnownFileType = file; path = "Turkcell Satura Regular.ttf"; sourceTree = "<group>"; };
    9F3102F71A88E5F600D7C8E2 /* TurkcellSaturaBold.ttf */ = {isa = PBXFileReference; lastKnownFileType = file; path = TurkcellSaturaBold.ttf; sourceTree = "<group>"; };
    9F3102F91A88E5F600D7C8E2 /* Icon_114.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Icon_114.png; sourceTree = "<group>"; };
    9F3102FA1A88E5F600D7C8E2 /* Icon_120.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Icon_120.png; sourceTree = "<group>"; };
    9F3102FB1A88E5F600D7C8E2 /* Icon_144.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Icon_144.png; sourceTree = "<group>"; };
    9F3102FC1A88E5F600D7C8E2 /* Icon_29.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Icon_29.png; sourceTree = "<group>"; };
    9F3102FD1A88E5F600D7C8E2 /* Icon_57.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Icon_57.png; sourceTree = "<group>"; };
    9F3102FE1A88E5F600D7C8E2 /* Icon_58.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Icon_58.png; sourceTree = "<group>"; };
    9F3102FF1A88E5F600D7C8E2 /* Icon_80.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Icon_80.png; sourceTree = "<group>"; };
    9F3103041A88E5F600D7C8E2 /* adamli.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = adamli.png; sourceTree = "<group>"; };
    9F3103051A88E5F600D7C8E2 /* adamli@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "adamli@2x.png"; sourceTree = "<group>"; };
    9F3103061A88E5F600D7C8E2 /* adamli@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "adamli@3x.png"; sourceTree = "<group>"; };
    9F3103071A88E5F600D7C8E2 /* photo_machine_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = photo_machine_icon.png; sourceTree = "<group>"; };
    9F3103081A88E5F600D7C8E2 /* photo_machine_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "photo_machine_icon@2x.png"; sourceTree = "<group>"; };
    9F3103091A88E5F600D7C8E2 /* TC_topnav_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_topnav_icon.png; sourceTree = "<group>"; };
    9F31030A1A88E5F600D7C8E2 /* TC_topnav_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_topnav_icon@2x.png"; sourceTree = "<group>"; };
    9F31030B1A88E5F600D7C8E2 /* tel.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = tel.png; sourceTree = "<group>"; };
    9F31030C1A88E5F600D7C8E2 /* tel@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "tel@2x.png"; sourceTree = "<group>"; };
    9F31030D1A88E5F600D7C8E2 /* tel@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "tel@3x.png"; sourceTree = "<group>"; };
    9F31030F1A88E5F600D7C8E2 /* Allowance_data_notification.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Allowance_data_notification.png; sourceTree = "<group>"; };
    9F3103101A88E5F600D7C8E2 /* Allowance_data_notification@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Allowance_data_notification@2x.png"; sourceTree = "<group>"; };
    9F3103111A88E5F600D7C8E2 /* Allowance_data_notification@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Allowance_data_notification@3x.png"; sourceTree = "<group>"; };
    9F3103121A88E5F600D7C8E2 /* AllowanceBill_Icon_Data.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = AllowanceBill_Icon_Data.png; sourceTree = "<group>"; };
    9F3103131A88E5F600D7C8E2 /* AllowanceBill_Icon_Data@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Data@2x.png"; sourceTree = "<group>"; };
    9F3103141A88E5F600D7C8E2 /* AllowanceBill_Icon_Data@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Data@3x.png"; sourceTree = "<group>"; };
    9F3103151A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = AllowanceBill_Icon_Data_selected.png; sourceTree = "<group>"; };
    9F3103161A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Data_selected@2x.png"; sourceTree = "<group>"; };
    9F3103171A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Data_selected@3x.png"; sourceTree = "<group>"; };
    9F3103181A88E5F600D7C8E2 /* AllowanceBill_Icon_Other.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = AllowanceBill_Icon_Other.png; sourceTree = "<group>"; };
    9F3103191A88E5F600D7C8E2 /* AllowanceBill_Icon_Other@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Other@2x.png"; sourceTree = "<group>"; };
    9F31031A1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Other@3x.png"; sourceTree = "<group>"; };
    9F31031B1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = AllowanceBill_Icon_Other_selected.png; sourceTree = "<group>"; };
    9F31031C1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Other_selected@2x.png"; sourceTree = "<group>"; };
    9F31031D1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Other_selected@3x.png"; sourceTree = "<group>"; };
    9F31031E1A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = AllowanceBill_Icon_SMS.png; sourceTree = "<group>"; };
    9F31031F1A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_SMS@2x.png"; sourceTree = "<group>"; };
    9F3103201A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_SMS@3x.png"; sourceTree = "<group>"; };
    9F3103211A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = AllowanceBill_Icon_SMS_selected.png; sourceTree = "<group>"; };
    9F3103221A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_SMS_selected@2x.png"; sourceTree = "<group>"; };
    9F3103231A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_SMS_selected@3x.png"; sourceTree = "<group>"; };
    9F3103241A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = AllowanceBill_Icon_Voice.png; sourceTree = "<group>"; };
    9F3103251A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Voice@2x.png"; sourceTree = "<group>"; };
    9F3103261A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Voice@3x.png"; sourceTree = "<group>"; };
    9F3103271A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = AllowanceBill_Icon_Voice_selected.png; sourceTree = "<group>"; };
    9F3103281A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Voice_selected@2x.png"; sourceTree = "<group>"; };
    9F3103291A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "AllowanceBill_Icon_Voice_selected@3x.png"; sourceTree = "<group>"; };
    9F31032B1A88E5F600D7C8E2 /* logo_only_phone_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = logo_only_phone_icon.png; sourceTree = "<group>"; };
    9F31032C1A88E5F600D7C8E2 /* logo_only_phone_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "logo_only_phone_icon@2x.png"; sourceTree = "<group>"; };
    9F31032D1A88E5F600D7C8E2 /* logo_only_phone_icon@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "logo_only_phone_icon@3x.png"; sourceTree = "<group>"; };
    9F31032E1A88E5F600D7C8E2 /* pusula.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = pusula.png; sourceTree = "<group>"; };
    9F31032F1A88E5F600D7C8E2 /* pusula@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "pusula@2x.png"; sourceTree = "<group>"; };
    9F3103311A88E5F600D7C8E2 /* cocuk1.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = cocuk1.png; sourceTree = "<group>"; };
    9F3103321A88E5F600D7C8E2 /* cocuk1@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "cocuk1@2x.png"; sourceTree = "<group>"; };
    9F3103331A88E5F600D7C8E2 /* cocuk2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = cocuk2.png; sourceTree = "<group>"; };
    9F3103341A88E5F600D7C8E2 /* cocuk2@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "cocuk2@2x.png"; sourceTree = "<group>"; };
    9F3103351A88E5F600D7C8E2 /* cocuk3.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = cocuk3.png; sourceTree = "<group>"; };
    9F3103361A88E5F600D7C8E2 /* cocuk3@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "cocuk3@2x.png"; sourceTree = "<group>"; };
    9F3103371A88E5F600D7C8E2 /* cocuk4.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = cocuk4.png; sourceTree = "<group>"; };
    9F3103381A88E5F600D7C8E2 /* cocuk4@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "cocuk4@2x.png"; sourceTree = "<group>"; };
    9F3103391A88E5F600D7C8E2 /* menu_icon_white_highlighted.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = menu_icon_white_highlighted.png; sourceTree = "<group>"; };
    9F31033A1A88E5F600D7C8E2 /* menu_icon_white_highlighted@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "menu_icon_white_highlighted@2x.png"; sourceTree = "<group>"; };
    9F31033B1A88E5F600D7C8E2 /* topup_white_icon_highlighted.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = topup_white_icon_highlighted.png; sourceTree = "<group>"; };
    9F31033C1A88E5F600D7C8E2 /* topup_white_icon_hightlighted@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "topup_white_icon_hightlighted@2x.png"; sourceTree = "<group>"; };
    9F31033D1A88E5F600D7C8E2 /* yellow_button_with_glow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = yellow_button_with_glow.png; sourceTree = "<group>"; };
    9F31033E1A88E5F600D7C8E2 /* yellow_button_with_glow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "yellow_button_with_glow@2x.png"; sourceTree = "<group>"; };
    9F3103401A88E5F600D7C8E2 /* Bill_details_button_bg.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Bill_details_button_bg.png; sourceTree = "<group>"; };
    9F3103411A88E5F600D7C8E2 /* Bill_details_button_bg@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Bill_details_button_bg@2x.png"; sourceTree = "<group>"; };
    9F3103421A88E5F600D7C8E2 /* Bill_details_button_bg@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Bill_details_button_bg@3x.png"; sourceTree = "<group>"; };
    9F3103451A88E5F600D7C8E2 /* Bill_paynow_button_bg.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Bill_paynow_button_bg.png; sourceTree = "<group>"; };
    9F3103461A88E5F600D7C8E2 /* Bill_paynow_button_bg@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Bill_paynow_button_bg@2x.png"; sourceTree = "<group>"; };
    9F3103471A88E5F600D7C8E2 /* Bill_paynow_button_bg@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Bill_paynow_button_bg@3x.png"; sourceTree = "<group>"; };
    9F3103481A88E5F600D7C8E2 /* close_icon_white.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = close_icon_white.png; sourceTree = "<group>"; };
    9F3103491A88E5F600D7C8E2 /* close_icon_white@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "close_icon_white@2x.png"; sourceTree = "<group>"; };
    9F31034A1A88E5F600D7C8E2 /* minus_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = minus_icon.png; sourceTree = "<group>"; };
    9F31034B1A88E5F600D7C8E2 /* minus_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "minus_icon@2x.png"; sourceTree = "<group>"; };
    9F31034C1A88E5F600D7C8E2 /* plus_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = plus_icon.png; sourceTree = "<group>"; };
    9F31034D1A88E5F600D7C8E2 /* plus_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "plus_icon@2x.png"; sourceTree = "<group>"; };
    9F31034E1A88E5F600D7C8E2 /* RG_Bill_payNowBtn_BIG.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_Bill_payNowBtn_BIG.png; sourceTree = "<group>"; };
    9F31034F1A88E5F600D7C8E2 /* RG_Bill_payNowBtn_BIG@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_Bill_payNowBtn_BIG@2x.png"; sourceTree = "<group>"; };
    9F3103501A88E5F600D7C8E2 /* RG_Bill_sendEmail_BIG.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_Bill_sendEmail_BIG.png; sourceTree = "<group>"; };
    9F3103511A88E5F600D7C8E2 /* RG_Bill_sendEmail_BIG@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_Bill_sendEmail_BIG@2x.png"; sourceTree = "<group>"; };
    9F3103521A88E5F600D7C8E2 /* RG_calendar_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_calendar_icon.png; sourceTree = "<group>"; };
    9F3103531A88E5F600D7C8E2 /* RG_calendar_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_calendar_icon@2x.png"; sourceTree = "<group>"; };
    9F3103541A88E5F600D7C8E2 /* RG_calendar_icon@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_calendar_icon@3x.png"; sourceTree = "<group>"; };
    9F3103551A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_arrow_icon_OFF.png; sourceTree = "<group>"; };
    9F3103561A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_arrow_icon_OFF@2x.png"; sourceTree = "<group>"; };
    9F3103571A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF_white.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_arrow_icon_OFF_white.png; sourceTree = "<group>"; };
    9F3103581A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF_white@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_arrow_icon_OFF_white@2x.png"; sourceTree = "<group>"; };
    9F3103591A88E5F600D7C8E2 /* RG_mb_arrow_icon_ON.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_arrow_icon_ON.png; sourceTree = "<group>"; };
    9F31035A1A88E5F600D7C8E2 /* RG_mb_arrow_icon_ON@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_arrow_icon_ON@2x.png"; sourceTree = "<group>"; };
    9F31035B1A88E5F600D7C8E2 /* RG_mb_itemised_icon_OFF.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_itemised_icon_OFF.png; sourceTree = "<group>"; };
    9F31035C1A88E5F600D7C8E2 /* RG_mb_itemised_icon_OFF@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_itemised_icon_OFF@2x.png"; sourceTree = "<group>"; };
    9F31035D1A88E5F600D7C8E2 /* RG_mb_itemised_icon_ON.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_itemised_icon_ON.png; sourceTree = "<group>"; };
    9F31035E1A88E5F600D7C8E2 /* RG_mb_itemised_icon_ON@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_itemised_icon_ON@2x.png"; sourceTree = "<group>"; };
    9F31035F1A88E5F600D7C8E2 /* RG_mb_stats_icon_OFF.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_stats_icon_OFF.png; sourceTree = "<group>"; };
    9F3103601A88E5F600D7C8E2 /* RG_mb_stats_icon_OFF@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_stats_icon_OFF@2x.png"; sourceTree = "<group>"; };
    9F3103611A88E5F600D7C8E2 /* RG_mb_stats_icon_ON.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_stats_icon_ON.png; sourceTree = "<group>"; };
    9F3103621A88E5F600D7C8E2 /* RG_mb_stats_icon_ON@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_stats_icon_ON@2x.png"; sourceTree = "<group>"; };
    9F3103631A88E5F600D7C8E2 /* RG_mb_summary_icon_OFF.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_summary_icon_OFF.png; sourceTree = "<group>"; };
    9F3103641A88E5F600D7C8E2 /* RG_mb_summary_icon_OFF@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_summary_icon_OFF@2x.png"; sourceTree = "<group>"; };
    9F3103651A88E5F600D7C8E2 /* RG_mb_summary_icon_ON.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_mb_summary_icon_ON.png; sourceTree = "<group>"; };
    9F3103661A88E5F600D7C8E2 /* RG_mb_summary_icon_ON@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_mb_summary_icon_ON@2x.png"; sourceTree = "<group>"; };
    9F3103711A88E5F600D7C8E2 /* flag_campaign.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = flag_campaign.png; sourceTree = "<group>"; };
    9F3103721A88E5F600D7C8E2 /* flag_campaign@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_campaign@2x.png"; sourceTree = "<group>"; };
    9F3103731A88E5F600D7C8E2 /* flag_campaign@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_campaign@3x.png"; sourceTree = "<group>"; };
    9F3103741A88E5F600D7C8E2 /* flag_campaign_and_new.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = flag_campaign_and_new.png; sourceTree = "<group>"; };
    9F3103751A88E5F600D7C8E2 /* flag_campaign_and_new@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_campaign_and_new@2x.png"; sourceTree = "<group>"; };
    9F3103761A88E5F600D7C8E2 /* flag_campaign_and_new@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_campaign_and_new@3x.png"; sourceTree = "<group>"; };
    9F3103771A88E5F600D7C8E2 /* flag_campaign_and_popular.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = flag_campaign_and_popular.png; sourceTree = "<group>"; };
    9F3103781A88E5F600D7C8E2 /* flag_campaign_and_popular@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_campaign_and_popular@2x.png"; sourceTree = "<group>"; };
    9F3103791A88E5F600D7C8E2 /* flag_campaign_and_popular@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_campaign_and_popular@3x.png"; sourceTree = "<group>"; };
    9F31037A1A88E5F600D7C8E2 /* flag_campaign_and_recommendation.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = flag_campaign_and_recommendation.png; sourceTree = "<group>"; };
    9F31037B1A88E5F600D7C8E2 /* flag_campaign_and_recommendation@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_campaign_and_recommendation@2x.png"; sourceTree = "<group>"; };
    9F31037C1A88E5F600D7C8E2 /* flag_campaign_and_recommendation@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_campaign_and_recommendation@3x.png"; sourceTree = "<group>"; };
    9F31037D1A88E5F600D7C8E2 /* flag_new.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = flag_new.png; sourceTree = "<group>"; };
    9F31037E1A88E5F600D7C8E2 /* flag_new@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_new@2x.png"; sourceTree = "<group>"; };
    9F31037F1A88E5F600D7C8E2 /* flag_new@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_new@3x.png"; sourceTree = "<group>"; };
    9F3103801A88E5F600D7C8E2 /* flag_popular.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = flag_popular.png; sourceTree = "<group>"; };
    9F3103811A88E5F600D7C8E2 /* flag_popular@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_popular@2x.png"; sourceTree = "<group>"; };
    9F3103821A88E5F600D7C8E2 /* flag_popular@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_popular@3x.png"; sourceTree = "<group>"; };
    9F3103831A88E5F600D7C8E2 /* flag_recommendation.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = flag_recommendation.png; sourceTree = "<group>"; };
    9F3103841A88E5F600D7C8E2 /* flag_recommendation@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_recommendation@2x.png"; sourceTree = "<group>"; };
    9F3103851A88E5F600D7C8E2 /* flag_recommendation@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "flag_recommendation@3x.png"; sourceTree = "<group>"; };
    9F3103871A88E5F600D7C8E2 /* big_shadow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = big_shadow.png; sourceTree = "<group>"; };
    9F3103881A88E5F600D7C8E2 /* big_shadow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "big_shadow@2x.png"; sourceTree = "<group>"; };
    9F3103891A88E5F600D7C8E2 /* big_shadow@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "big_shadow@3x.png"; sourceTree = "<group>"; };
    9F31038A1A88E5F600D7C8E2 /* close_keyboard_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = close_keyboard_icon.png; sourceTree = "<group>"; };
    9F31038B1A88E5F600D7C8E2 /* close_keyboard_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "close_keyboard_icon@2x.png"; sourceTree = "<group>"; };
    9F31038C1A88E5F600D7C8E2 /* finger_print.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = finger_print.png; sourceTree = "<group>"; };
    9F31038D1A88E5F600D7C8E2 /* finger_print@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "finger_print@2x.png"; sourceTree = "<group>"; };
    9F3103911A88E5F600D7C8E2 /* left_white_arrow_from_guideline.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = left_white_arrow_from_guideline.png; sourceTree = "<group>"; };
    9F3103921A88E5F600D7C8E2 /* left_white_arrow_from_guideline@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "left_white_arrow_from_guideline@2x.png"; sourceTree = "<group>"; };
    9F3103931A88E5F600D7C8E2 /* reload_icon_from_guideline.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = reload_icon_from_guideline.png; sourceTree = "<group>"; };
    9F3103941A88E5F600D7C8E2 /* reload_icon_from_guideline@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "reload_icon_from_guideline@2x.png"; sourceTree = "<group>"; };
    9F3103951A88E5F600D7C8E2 /* reload_icon_from_guideline@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "reload_icon_from_guideline@3x.png"; sourceTree = "<group>"; };
    9F3103961A88E5F600D7C8E2 /* right_white_arrow_from_guideline.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = right_white_arrow_from_guideline.png; sourceTree = "<group>"; };
    9F3103971A88E5F600D7C8E2 /* right_white_arrow_from_guideline@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "right_white_arrow_from_guideline@2x.png"; sourceTree = "<group>"; };
    9F3103981A88E5F600D7C8E2 /* search_icon_from_guideline.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = search_icon_from_guideline.png; sourceTree = "<group>"; };
    9F3103991A88E5F600D7C8E2 /* search_icon_from_guideline@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "search_icon_from_guideline@2x.png"; sourceTree = "<group>"; };
    9F31039A1A88E5F600D7C8E2 /* search_icon_from_guideline@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "search_icon_from_guideline@3x.png"; sourceTree = "<group>"; };
    9F3104271A88E5F700D7C8E2 /* RG_LS_intro_logo.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_LS_intro_logo.png; sourceTree = "<group>"; };
    9F3104281A88E5F700D7C8E2 /* RG_LS_intro_logo@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_LS_intro_logo@2x.png"; sourceTree = "<group>"; };
    9F3104291A88E5F700D7C8E2 /* RG_LS_intro_logo@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_LS_intro_logo@3x.png"; sourceTree = "<group>"; };
    9F31042A1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_LS_loader_SMALL_circle.png; sourceTree = "<group>"; };
    9F31042B1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_LS_loader_SMALL_circle@2x.png"; sourceTree = "<group>"; };
    9F31042C1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_LS_loader_SMALL_logo.png; sourceTree = "<group>"; };
    9F31042D1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_LS_loader_SMALL_logo@2x.png"; sourceTree = "<group>"; };
    9F31042F1A88E5F700D7C8E2 /* location_based_bg.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = location_based_bg.png; sourceTree = "<group>"; };
    9F3104301A88E5F700D7C8E2 /* location_based_bg@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "location_based_bg@2x.png"; sourceTree = "<group>"; };
    9F3104311A88E5F700D7C8E2 /* offer_button_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = offer_button_icon.png; sourceTree = "<group>"; };
    9F3104321A88E5F700D7C8E2 /* offer_button_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "offer_button_icon@2x.png"; sourceTree = "<group>"; };
    9F3104341A88E5F700D7C8E2 /* date_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = date_icon.png; sourceTree = "<group>"; };
    9F3104351A88E5F700D7C8E2 /* date_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "date_icon@2x.png"; sourceTree = "<group>"; };
    9F3104361A88E5F700D7C8E2 /* date_icon@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "date_icon@3x.png"; sourceTree = "<group>"; };
    9F3104371A88E5F700D7C8E2 /* home_login_avatar.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = home_login_avatar.png; sourceTree = "<group>"; };
    9F3104381A88E5F700D7C8E2 /* home_login_avatar@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "home_login_avatar@2x.png"; sourceTree = "<group>"; };
    9F3104391A88E5F700D7C8E2 /* home_login_avatar@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "home_login_avatar@3x.png"; sourceTree = "<group>"; };
    9F31043A1A88E5F700D7C8E2 /* hour_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = hour_icon.png; sourceTree = "<group>"; };
    9F31043B1A88E5F700D7C8E2 /* hour_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "hour_icon@2x.png"; sourceTree = "<group>"; };
    9F31043C1A88E5F700D7C8E2 /* hour_icon@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "hour_icon@3x.png"; sourceTree = "<group>"; };
    9F31043D1A88E5F700D7C8E2 /* login_facebook.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_facebook.png; sourceTree = "<group>"; };
    9F31043E1A88E5F700D7C8E2 /* login_facebook2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_facebook2.png; sourceTree = "<group>"; };
    9F31043F1A88E5F700D7C8E2 /* login_facebook2@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_facebook2@2x.png"; sourceTree = "<group>"; };
    9F3104401A88E5F700D7C8E2 /* login_facebook@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_facebook@2x.png"; sourceTree = "<group>"; };
    9F3104411A88E5F700D7C8E2 /* login_mobileimza.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_mobileimza.png; sourceTree = "<group>"; };
    9F3104421A88E5F700D7C8E2 /* login_mobileimza2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_mobileimza2.png; sourceTree = "<group>"; };
    9F3104431A88E5F700D7C8E2 /* login_mobileimza2@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_mobileimza2@2x.png"; sourceTree = "<group>"; };
    9F3104441A88E5F700D7C8E2 /* login_mobileimza@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_mobileimza@2x.png"; sourceTree = "<group>"; };
    9F3104451A88E5F700D7C8E2 /* login_sifreDegistir.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_sifreDegistir.png; sourceTree = "<group>"; };
    9F3104461A88E5F700D7C8E2 /* login_sifreDegistir@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_sifreDegistir@2x.png"; sourceTree = "<group>"; };
    9F3104471A88E5F700D7C8E2 /* login_sms_sending_image.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_sms_sending_image.png; sourceTree = "<group>"; };
    9F3104481A88E5F700D7C8E2 /* login_sms_sending_image@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_sms_sending_image@2x.png"; sourceTree = "<group>"; };
    9F3104491A88E5F700D7C8E2 /* login_telNoSifre.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_telNoSifre.png; sourceTree = "<group>"; };
    9F31044A1A88E5F700D7C8E2 /* login_telNoSifre@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_telNoSifre@2x.png"; sourceTree = "<group>"; };
    9F31044B1A88E5F700D7C8E2 /* login_tick_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_tick_icon.png; sourceTree = "<group>"; };
    9F31044C1A88E5F700D7C8E2 /* login_tick_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_tick_icon@2x.png"; sourceTree = "<group>"; };
    9F31044D1A88E5F700D7C8E2 /* login_tick_icon@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_tick_icon@3x.png"; sourceTree = "<group>"; };
    9F31044E1A88E5F700D7C8E2 /* login_turkcell.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_turkcell.png; sourceTree = "<group>"; };
    9F31044F1A88E5F700D7C8E2 /* login_turkcell2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = login_turkcell2.png; sourceTree = "<group>"; };
    9F3104501A88E5F700D7C8E2 /* login_turkcell2@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_turkcell2@2x.png"; sourceTree = "<group>"; };
    9F3104511A88E5F700D7C8E2 /* login_turkcell@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "login_turkcell@2x.png"; sourceTree = "<group>"; };
    9F3104521A88E5F700D7C8E2 /* signin.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = signin.png; sourceTree = "<group>"; };
    9F3104531A88E5F700D7C8E2 /* signin@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "signin@2x.png"; sourceTree = "<group>"; };
    9F3104541A88E5F700D7C8E2 /* signin@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "signin@3x.png"; sourceTree = "<group>"; };
    9F3104551A88E5F700D7C8E2 /* signout.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = signout.png; sourceTree = "<group>"; };
    9F3104561A88E5F700D7C8E2 /* signout@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "signout@2x.png"; sourceTree = "<group>"; };
    9F3104581A88E5F700D7C8E2 /* mnt.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = mnt.png; sourceTree = "<group>"; };
    9F3104591A88E5F700D7C8E2 /* mnt@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "mnt@2x.png"; sourceTree = "<group>"; };
    9F31045A1A88E5F700D7C8E2 /* mnt@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "mnt@3x.png"; sourceTree = "<group>"; };
    9F31045B1A88E5F700D7C8E2 /* mntOK.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = mntOK.png; sourceTree = "<group>"; };
    9F31045C1A88E5F700D7C8E2 /* mntOK@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "mntOK@2x.png"; sourceTree = "<group>"; };
    9F31045E1A88E5F700D7C8E2 /* alert_icon_confirm.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = alert_icon_confirm.png; sourceTree = "<group>"; };
    9F31045F1A88E5F700D7C8E2 /* alert_icon_confirm@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "alert_icon_confirm@2x.png"; sourceTree = "<group>"; };
    9F3104601A88E5F700D7C8E2 /* alert_icon_error.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = alert_icon_error.png; sourceTree = "<group>"; };
    9F3104611A88E5F700D7C8E2 /* alert_icon_error@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "alert_icon_error@2x.png"; sourceTree = "<group>"; };
    9F3104621A88E5F700D7C8E2 /* alert_icon_info.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = alert_icon_info.png; sourceTree = "<group>"; };
    9F3104631A88E5F700D7C8E2 /* alert_icon_info@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "alert_icon_info@2x.png"; sourceTree = "<group>"; };
    9F3104641A88E5F700D7C8E2 /* alert_icon_success.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = alert_icon_success.png; sourceTree = "<group>"; };
    9F3104651A88E5F700D7C8E2 /* alert_icon_success@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "alert_icon_success@2x.png"; sourceTree = "<group>"; };
    9F3104671A88E5F700D7C8E2 /* menu_back_icon_blue.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = menu_back_icon_blue.png; sourceTree = "<group>"; };
    9F3104681A88E5F700D7C8E2 /* menu_back_icon_blue@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "menu_back_icon_blue@2x.png"; sourceTree = "<group>"; };
    9F3104691A88E5F700D7C8E2 /* menu_back_icon_white.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = menu_back_icon_white.png; sourceTree = "<group>"; };
    9F31046A1A88E5F700D7C8E2 /* menu_back_icon_white@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "menu_back_icon_white@2x.png"; sourceTree = "<group>"; };
    9F31046B1A88E5F700D7C8E2 /* menu_icon_blue.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = menu_icon_blue.png; sourceTree = "<group>"; };
    9F31046C1A88E5F700D7C8E2 /* menu_icon_blue@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "menu_icon_blue@2x.png"; sourceTree = "<group>"; };
    9F31046D1A88E5F700D7C8E2 /* menu_icon_white.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = menu_icon_white.png; sourceTree = "<group>"; };
    9F31046E1A88E5F700D7C8E2 /* menu_icon_white@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "menu_icon_white@2x.png"; sourceTree = "<group>"; };
    9F3104701A88E5F700D7C8E2 /* notification_placeholder.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = notification_placeholder.png; sourceTree = "<group>"; };
    9F3104711A88E5F700D7C8E2 /* notification_placeholder@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "notification_placeholder@2x.png"; sourceTree = "<group>"; };
    9F3104741A88E5F700D7C8E2 /* TC_sett2_1.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett2_1.png; sourceTree = "<group>"; };
    9F3104751A88E5F700D7C8E2 /* TC_sett2_1@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett2_1@2x.png"; sourceTree = "<group>"; };
    9F3104791A88E5F700D7C8E2 /* displayBillAnalysisModule.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = displayBillAnalysisModule.png; sourceTree = "<group>"; };
    9F31047A1A88E5F700D7C8E2 /* displayBillAnalysisModule@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "displayBillAnalysisModule@2x.png"; sourceTree = "<group>"; };
    9F31047B1A88E5F700D7C8E2 /* displayBillModule.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = displayBillModule.png; sourceTree = "<group>"; };
    9F31047C1A88E5F700D7C8E2 /* displayBillModule@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "displayBillModule@2x.png"; sourceTree = "<group>"; };
    9F31047D1A88E5F700D7C8E2 /* displayNarModule.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = displayNarModule.png; sourceTree = "<group>"; };
    9F31047E1A88E5F700D7C8E2 /* displayNarModule@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "displayNarModule@2x.png"; sourceTree = "<group>"; };
    9F31047F1A88E5F700D7C8E2 /* displaySettingsModule.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = displaySettingsModule.png; sourceTree = "<group>"; };
    9F3104801A88E5F700D7C8E2 /* displaySettingsModule@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "displaySettingsModule@2x.png"; sourceTree = "<group>"; };
    9F3104811A88E5F700D7C8E2 /* displayTopUpModule.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = displayTopUpModule.png; sourceTree = "<group>"; };
    9F3104821A88E5F700D7C8E2 /* displayTopUpModule@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "displayTopUpModule@2x.png"; sourceTree = "<group>"; };
    9F3104831A88E5F700D7C8E2 /* displayUsageModule.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = displayUsageModule.png; sourceTree = "<group>"; };
    9F3104841A88E5F700D7C8E2 /* displayUsageModule@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "displayUsageModule@2x.png"; sourceTree = "<group>"; };
    9F3104851A88E5F700D7C8E2 /* one-box-default.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "one-box-default.png"; sourceTree = "<group>"; };
    9F3104891A88E5F700D7C8E2 /* arrowRightDirection.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = arrowRightDirection.png; sourceTree = "<group>"; };
    9F31048A1A88E5F700D7C8E2 /* arrowRightDirection@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "arrowRightDirection@2x.png"; sourceTree = "<group>"; };
    9F31048B1A88E5F700D7C8E2 /* arrowUpDirection.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = arrowUpDirection.png; sourceTree = "<group>"; };
    9F31048C1A88E5F700D7C8E2 /* arrowUpDirection@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "arrowUpDirection@2x.png"; sourceTree = "<group>"; };
    9F31048D1A88E5F700D7C8E2 /* face.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = face.png; sourceTree = "<group>"; };
    9F31048E1A88E5F700D7C8E2 /* face@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "face@2x.png"; sourceTree = "<group>"; };
    9F31048F1A88E5F700D7C8E2 /* fotoCarpi.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = fotoCarpi.png; sourceTree = "<group>"; };
    9F3104901A88E5F700D7C8E2 /* fotoCarpi@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "fotoCarpi@2x.png"; sourceTree = "<group>"; };
    9F3104911A88E5F700D7C8E2 /* fotoCek.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = fotoCek.png; sourceTree = "<group>"; };
    9F3104921A88E5F700D7C8E2 /* fotoCek@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "fotoCek@2x.png"; sourceTree = "<group>"; };
    9F3104931A88E5F700D7C8E2 /* fotoSec.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = fotoSec.png; sourceTree = "<group>"; };
    9F3104941A88E5F700D7C8E2 /* fotoSec@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "fotoSec@2x.png"; sourceTree = "<group>"; };
    9F3104951A88E5F700D7C8E2 /* grayphoneicon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = grayphoneicon.png; sourceTree = "<group>"; };
    9F3104961A88E5F700D7C8E2 /* grayphoneicon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "grayphoneicon@2x.png"; sourceTree = "<group>"; };
    9F3104971A88E5F700D7C8E2 /* iphone4_image.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = iphone4_image.png; sourceTree = "<group>"; };
    9F3104981A88E5F700D7C8E2 /* iphone4_image@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "iphone4_image@2x.png"; sourceTree = "<group>"; };
    9F3104991A88E5F700D7C8E2 /* iphone5_image.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = iphone5_image.png; sourceTree = "<group>"; };
    9F31049A1A88E5F700D7C8E2 /* iphone5_image@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "iphone5_image@2x.png"; sourceTree = "<group>"; };
    9F31049B1A88E5F700D7C8E2 /* iphone_image.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = iphone_image.png; sourceTree = "<group>"; };
    9F31049C1A88E5F700D7C8E2 /* iphone_image@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "iphone_image@2x.png"; sourceTree = "<group>"; };
    9F31049D1A88E5F700D7C8E2 /* kaydet.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = kaydet.png; sourceTree = "<group>"; };
    9F31049E1A88E5F700D7C8E2 /* kaydet@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "kaydet@2x.png"; sourceTree = "<group>"; };
    9F31049F1A88E5F700D7C8E2 /* RG_switch.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_switch.png; sourceTree = "<group>"; };
    9F3104A01A88E5F700D7C8E2 /* RG_switch@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_switch@2x.png"; sourceTree = "<group>"; };
    9F3104A11A88E5F700D7C8E2 /* TC_sett_call.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_call.png; sourceTree = "<group>"; };
    9F3104A21A88E5F700D7C8E2 /* TC_sett_call@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_call@2x.png"; sourceTree = "<group>"; };
    9F3104A31A88E5F700D7C8E2 /* TC_sett_data.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_data.png; sourceTree = "<group>"; };
    9F3104A41A88E5F700D7C8E2 /* TC_sett_data@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_data@2x.png"; sourceTree = "<group>"; };
    9F3104A51A88E5F700D7C8E2 /* TC_sett_iconavatarON.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_iconavatarON.png; sourceTree = "<group>"; };
    9F3104A61A88E5F700D7C8E2 /* TC_sett_iconavatarON@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_iconavatarON@2x.png"; sourceTree = "<group>"; };
    9F3104A71A88E5F700D7C8E2 /* TC_sett_line.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_line.png; sourceTree = "<group>"; };
    9F3104A81A88E5F700D7C8E2 /* TC_sett_line@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_line@2x.png"; sourceTree = "<group>"; };
    9F3104A91A88E5F700D7C8E2 /* TC_sett_linesett.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_linesett.png; sourceTree = "<group>"; };
    9F3104AA1A88E5F700D7C8E2 /* TC_sett_linesett@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_linesett@2x.png"; sourceTree = "<group>"; };
    9F3104AD1A88E5F700D7C8E2 /* TC_sett_notifications.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_notifications.png; sourceTree = "<group>"; };
    9F3104AE1A88E5F700D7C8E2 /* TC_sett_notifications@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_notifications@2x.png"; sourceTree = "<group>"; };
    9F3104AF1A88E5F700D7C8E2 /* TC_sett_password.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_password.png; sourceTree = "<group>"; };
    9F3104B01A88E5F700D7C8E2 /* TC_sett_password@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_password@2x.png"; sourceTree = "<group>"; };
    9F3104B11A88E5F700D7C8E2 /* TC_sett_sms.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_sms.png; sourceTree = "<group>"; };
    9F3104B21A88E5F700D7C8E2 /* TC_sett_sms@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_sms@2x.png"; sourceTree = "<group>"; };
    9F3104B31A88E5F700D7C8E2 /* TC_sett_tpay.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_sett_tpay.png; sourceTree = "<group>"; };
    9F3104B41A88E5F700D7C8E2 /* TC_sett_tpay@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_sett_tpay@2x.png"; sourceTree = "<group>"; };
    9F3104B51A88E5F700D7C8E2 /* togg_select.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = togg_select.png; sourceTree = "<group>"; };
    9F3104B61A88E5F700D7C8E2 /* togg_select@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "togg_select@2x.png"; sourceTree = "<group>"; };
    9F3104B71A88E5F700D7C8E2 /* togg_unselect.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = togg_unselect.png; sourceTree = "<group>"; };
    9F3104B81A88E5F700D7C8E2 /* togg_unselect@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "togg_unselect@2x.png"; sourceTree = "<group>"; };
    9F3104BA1A88E5F700D7C8E2 /* deepPurple.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = deepPurple.png; sourceTree = "<group>"; };
    9F3104BB1A88E5F700D7C8E2 /* deepPurple2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = deepPurple2.png; sourceTree = "<group>"; };
    9F3104BC1A88E5F700D7C8E2 /* deepPurple@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "deepPurple@2x.png"; sourceTree = "<group>"; };
    9F3104BD1A88E5F700D7C8E2 /* deepPurpleB.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = deepPurpleB.png; sourceTree = "<group>"; };
    9F3104BE1A88E5F700D7C8E2 /* deepPurpleB@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "deepPurpleB@2x.png"; sourceTree = "<group>"; };
    9F3104BF1A88E5F700D7C8E2 /* gri.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = gri.png; sourceTree = "<group>"; };
    9F3104C01A88E5F700D7C8E2 /* gri2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = gri2.png; sourceTree = "<group>"; };
    9F3104C11A88E5F700D7C8E2 /* gri@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "gri@2x.png"; sourceTree = "<group>"; };
    9F3104C21A88E5F700D7C8E2 /* griB.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = griB.png; sourceTree = "<group>"; };
    9F3104C31A88E5F700D7C8E2 /* griB@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "griB@2x.png"; sourceTree = "<group>"; };
    9F3104C61A88E5F700D7C8E2 /* mavi.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = mavi.png; sourceTree = "<group>"; };
    9F3104C71A88E5F700D7C8E2 /* mavi2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = mavi2.png; sourceTree = "<group>"; };
    9F3104C81A88E5F700D7C8E2 /* mavi@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "mavi@2x.png"; sourceTree = "<group>"; };
    9F3104C91A88E5F700D7C8E2 /* maviB.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = maviB.png; sourceTree = "<group>"; };
    9F3104CA1A88E5F700D7C8E2 /* maviB@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "maviB@2x.png"; sourceTree = "<group>"; };
    9F3104CC1A88E5F700D7C8E2 /* storeshadow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = storeshadow.png; sourceTree = "<group>"; };
    9F3104CD1A88E5F700D7C8E2 /* storeshadow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "storeshadow@2x.png"; sourceTree = "<group>"; };
    9F3104CE1A88E5F700D7C8E2 /* storeturkcellLogo.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = storeturkcellLogo.png; sourceTree = "<group>"; };
    9F3104CF1A88E5F700D7C8E2 /* storeturkcellLogo@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "storeturkcellLogo@2x.png"; sourceTree = "<group>"; };
    9F3104D01A88E5F700D7C8E2 /* storeturkcellLogoTruncu.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = storeturkcellLogoTruncu.png; sourceTree = "<group>"; };
    9F3104D11A88E5F700D7C8E2 /* storeturkcellLogoturuncu@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "storeturkcellLogoturuncu@2x.png"; sourceTree = "<group>"; };
    9F3104D21A88E5F700D7C8E2 /* TC_Map_Home.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_Map_Home.png; sourceTree = "<group>"; };
    9F3104D31A88E5F700D7C8E2 /* TC_Map_Home@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_Map_Home@2x.png"; sourceTree = "<group>"; };
    9F3104D41A88E5F700D7C8E2 /* TC_pin.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_pin.png; sourceTree = "<group>"; };
    9F3104D51A88E5F700D7C8E2 /* TC_pin@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_pin@2x.png"; sourceTree = "<group>"; };
    9F3104D61A88E5F700D7C8E2 /* TC_SL_boxbigarrow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SL_boxbigarrow.png; sourceTree = "<group>"; };
    9F3104D71A88E5F700D7C8E2 /* TC_SL_boxbigarrow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_SL_boxbigarrow@2x.png"; sourceTree = "<group>"; };
    9F3104DE1A88E5F700D7C8E2 /* TC_SL_locationpin.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SL_locationpin.png; sourceTree = "<group>"; };
    9F3104DF1A88E5F700D7C8E2 /* TC_SL_locationpin@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_SL_locationpin@2x.png"; sourceTree = "<group>"; };
    9F3104E01A88E5F700D7C8E2 /* TC_SL_pin.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SL_pin.png; sourceTree = "<group>"; };
    9F3104E11A88E5F700D7C8E2 /* TC_SL_pin@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_SL_pin@2x.png"; sourceTree = "<group>"; };
    9F3104E21A88E5F700D7C8E2 /* TC_SL_searchbox_blue.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SL_searchbox_blue.png; sourceTree = "<group>"; };
    9F3104E31A88E5F700D7C8E2 /* TC_SL_searchbox_blue@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_SL_searchbox_blue@2x.png"; sourceTree = "<group>"; };
    9F3104E41A88E5F700D7C8E2 /* TC_SL_searchbox_default.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SL_searchbox_default.png; sourceTree = "<group>"; };
    9F3104E51A88E5F700D7C8E2 /* Tc_SL_searchbox_default@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Tc_SL_searchbox_default@2x.png"; sourceTree = "<group>"; };
    9F3104E61A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Tc_SL_searchbox_default_without_icon.png; sourceTree = "<group>"; };
    9F3104E71A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Tc_SL_searchbox_default_without_icon@2x.png"; sourceTree = "<group>"; };
    9F3104E81A88E5F700D7C8E2 /* TC_SL_searchnearbybox.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SL_searchnearbybox.png; sourceTree = "<group>"; };
    9F3104E91A88E5F700D7C8E2 /* TC_SL_searchnearbybox@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_SL_searchnearbybox@2x.png"; sourceTree = "<group>"; };
    9F3104EC1A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SS_homepage_searchbox_active1.png; sourceTree = "<group>"; };
    9F3104ED1A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_SS_homepage_searchbox_active1@2x.png"; sourceTree = "<group>"; };
    9F3104EE1A88E5F700D7C8E2 /* turuncu.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = turuncu.png; sourceTree = "<group>"; };
    9F3104EF1A88E5F700D7C8E2 /* turuncu@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "turuncu@2x.png"; sourceTree = "<group>"; };
    9F3104F01A88E5F700D7C8E2 /* turuncuB.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = turuncuB.png; sourceTree = "<group>"; };
    9F3104F11A88E5F700D7C8E2 /* turuncuB@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "turuncuB@2x.png"; sourceTree = "<group>"; };
    9F3104F41A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow010_RIGHT.png; sourceTree = "<group>"; };
    9F3104F51A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow010_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3104F61A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow010_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3104F71A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow011_RIGHT.png; sourceTree = "<group>"; };
    9F3104F81A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow011_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3104F91A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow011_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3104FA1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow012_RIGHT.png; sourceTree = "<group>"; };
    9F3104FB1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow012_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3104FC1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow012_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3104FD1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow01_RIGHT.png; sourceTree = "<group>"; };
    9F3104FE1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow01_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3104FF1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow01_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3105001A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow02_RIGHT.png; sourceTree = "<group>"; };
    9F3105011A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow02_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3105021A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow02_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3105031A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow03_RIGHT.png; sourceTree = "<group>"; };
    9F3105041A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow03_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3105051A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow03_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3105061A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow04_RIGHT.png; sourceTree = "<group>"; };
    9F3105071A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow04_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3105081A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow04_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3105091A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow05_RIGHT.png; sourceTree = "<group>"; };
    9F31050A1A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow05_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F31050B1A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow05_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F31050C1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow06_RIGHT.png; sourceTree = "<group>"; };
    9F31050D1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow06_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F31050E1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow06_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F31050F1A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow07_RIGHT.png; sourceTree = "<group>"; };
    9F3105101A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow07_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3105111A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow07_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3105121A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow08_RIGHT.png; sourceTree = "<group>"; };
    9F3105131A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow08_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3105141A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow08_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3105151A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_arrow09_RIGHT.png; sourceTree = "<group>"; };
    9F3105161A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow09_RIGHT@2x.png"; sourceTree = "<group>"; };
    9F3105171A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_arrow09_RIGHT@3x.png"; sourceTree = "<group>"; };
    9F3105181A88E5F700D7C8E2 /* TC_tu_phone.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_phone.png; sourceTree = "<group>"; };
    9F3105191A88E5F700D7C8E2 /* TC_tu_phone@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_phone@2x.png"; sourceTree = "<group>"; };
    9F31051A1A88E5F700D7C8E2 /* TC_tu_phone@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_phone@3x.png"; sourceTree = "<group>"; };
    9F31051C1A88E5F700D7C8E2 /* RG_tu_arrow010_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow010_UP.png; sourceTree = "<group>"; };
    9F31051D1A88E5F700D7C8E2 /* RG_tu_arrow010_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow010_UP@2x.png"; sourceTree = "<group>"; };
    9F31051E1A88E5F700D7C8E2 /* RG_tu_arrow010_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow010_UP@3x.png"; sourceTree = "<group>"; };
    9F31051F1A88E5F700D7C8E2 /* RG_tu_arrow011_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow011_UP.png; sourceTree = "<group>"; };
    9F3105201A88E5F700D7C8E2 /* RG_tu_arrow011_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow011_UP@2x.png"; sourceTree = "<group>"; };
    9F3105211A88E5F700D7C8E2 /* RG_tu_arrow011_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow011_UP@3x.png"; sourceTree = "<group>"; };
    9F3105221A88E5F700D7C8E2 /* RG_tu_arrow012_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow012_UP.png; sourceTree = "<group>"; };
    9F3105231A88E5F700D7C8E2 /* RG_tu_arrow012_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow012_UP@2x.png"; sourceTree = "<group>"; };
    9F3105241A88E5F700D7C8E2 /* RG_tu_arrow012_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow012_UP@3x.png"; sourceTree = "<group>"; };
    9F3105251A88E5F700D7C8E2 /* RG_tu_arrow01_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow01_UP.png; sourceTree = "<group>"; };
    9F3105261A88E5F700D7C8E2 /* RG_tu_arrow01_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow01_UP@2x.png"; sourceTree = "<group>"; };
    9F3105271A88E5F700D7C8E2 /* RG_tu_arrow01_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow01_UP@3x.png"; sourceTree = "<group>"; };
    9F3105281A88E5F700D7C8E2 /* RG_tu_arrow02_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow02_UP.png; sourceTree = "<group>"; };
    9F3105291A88E5F700D7C8E2 /* RG_tu_arrow02_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow02_UP@2x.png"; sourceTree = "<group>"; };
    9F31052A1A88E5F700D7C8E2 /* RG_tu_arrow02_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow02_UP@3x.png"; sourceTree = "<group>"; };
    9F31052B1A88E5F700D7C8E2 /* RG_tu_arrow03_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow03_UP.png; sourceTree = "<group>"; };
    9F31052C1A88E5F700D7C8E2 /* RG_tu_arrow03_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow03_UP@2x.png"; sourceTree = "<group>"; };
    9F31052D1A88E5F700D7C8E2 /* RG_tu_arrow03_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow03_UP@3x.png"; sourceTree = "<group>"; };
    9F31052E1A88E5F700D7C8E2 /* RG_tu_arrow04_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow04_UP.png; sourceTree = "<group>"; };
    9F31052F1A88E5F700D7C8E2 /* RG_tu_arrow04_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow04_UP@2x.png"; sourceTree = "<group>"; };
    9F3105301A88E5F700D7C8E2 /* RG_tu_arrow04_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow04_UP@3x.png"; sourceTree = "<group>"; };
    9F3105311A88E5F700D7C8E2 /* RG_tu_arrow05_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow05_UP.png; sourceTree = "<group>"; };
    9F3105321A88E5F700D7C8E2 /* RG_tu_arrow05_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow05_UP@2x.png"; sourceTree = "<group>"; };
    9F3105331A88E5F700D7C8E2 /* RG_tu_arrow05_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow05_UP@3x.png"; sourceTree = "<group>"; };
    9F3105341A88E5F700D7C8E2 /* RG_tu_arrow06_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow06_UP.png; sourceTree = "<group>"; };
    9F3105351A88E5F700D7C8E2 /* RG_tu_arrow06_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow06_UP@2x.png"; sourceTree = "<group>"; };
    9F3105361A88E5F700D7C8E2 /* RG_tu_arrow06_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow06_UP@3x.png"; sourceTree = "<group>"; };
    9F3105371A88E5F700D7C8E2 /* RG_tu_arrow07_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow07_UP.png; sourceTree = "<group>"; };
    9F3105381A88E5F700D7C8E2 /* RG_tu_arrow07_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow07_UP@2x.png"; sourceTree = "<group>"; };
    9F3105391A88E5F700D7C8E2 /* RG_tu_arrow07_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow07_UP@3x.png"; sourceTree = "<group>"; };
    9F31053A1A88E5F700D7C8E2 /* RG_tu_arrow08_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow08_UP.png; sourceTree = "<group>"; };
    9F31053B1A88E5F700D7C8E2 /* RG_tu_arrow08_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow08_UP@2x.png"; sourceTree = "<group>"; };
    9F31053C1A88E5F700D7C8E2 /* RG_tu_arrow08_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow08_UP@3x.png"; sourceTree = "<group>"; };
    9F31053D1A88E5F700D7C8E2 /* RG_tu_arrow09_UP.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = RG_tu_arrow09_UP.png; sourceTree = "<group>"; };
    9F31053E1A88E5F700D7C8E2 /* RG_tu_arrow09_UP@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow09_UP@2x.png"; sourceTree = "<group>"; };
    9F31053F1A88E5F700D7C8E2 /* RG_tu_arrow09_UP@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RG_tu_arrow09_UP@3x.png"; sourceTree = "<group>"; };
    9F3105401A88E5F700D7C8E2 /* buttonGray.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = buttonGray.png; sourceTree = "<group>"; };
    9F3105411A88E5F700D7C8E2 /* buttonGray@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "buttonGray@2x.png"; sourceTree = "<group>"; };
    9F3105421A88E5F700D7C8E2 /* buttonGray@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "buttonGray@3x.png"; sourceTree = "<group>"; };
    9F3105431A88E5F700D7C8E2 /* buttonYellow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = buttonYellow.png; sourceTree = "<group>"; };
    9F3105441A88E5F700D7C8E2 /* buttonYellow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "buttonYellow@2x.png"; sourceTree = "<group>"; };
    9F3105451A88E5F700D7C8E2 /* buttonYellow@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "buttonYellow@3x.png"; sourceTree = "<group>"; };
    9F3105461A88E5F700D7C8E2 /* check.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = check.png; sourceTree = "<group>"; };
    9F3105471A88E5F700D7C8E2 /* check@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "check@2x.png"; sourceTree = "<group>"; };
    9F3105481A88E5F700D7C8E2 /* check@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "check@3x.png"; sourceTree = "<group>"; };
    9F3105491A88E5F700D7C8E2 /* checkBox.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = checkBox.png; sourceTree = "<group>"; };
    9F31054A1A88E5F700D7C8E2 /* checkBox@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "checkBox@2x.png"; sourceTree = "<group>"; };
    9F31054B1A88E5F700D7C8E2 /* checkBox@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "checkBox@3x.png"; sourceTree = "<group>"; };
    9F31054C1A88E5F700D7C8E2 /* close_icon_blue.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = close_icon_blue.png; sourceTree = "<group>"; };
    9F31054D1A88E5F700D7C8E2 /* close_icon_blue@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "close_icon_blue@2x.png"; sourceTree = "<group>"; };
    9F31054E1A88E5F700D7C8E2 /* close_icon_blue@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "close_icon_blue@3x.png"; sourceTree = "<group>"; };
    9F31054F1A88E5F700D7C8E2 /* close_icon_gray.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = close_icon_gray.png; sourceTree = "<group>"; };
    9F3105501A88E5F700D7C8E2 /* close_icon_gray@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "close_icon_gray@2x.png"; sourceTree = "<group>"; };
    9F3105511A88E5F700D7C8E2 /* close_icon_gray@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "close_icon_gray@3x.png"; sourceTree = "<group>"; };
    9F3105521A88E5F700D7C8E2 /* makePaymentButton.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = makePaymentButton.png; sourceTree = "<group>"; };
    9F3105531A88E5F700D7C8E2 /* makePaymentButton@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "makePaymentButton@2x.png"; sourceTree = "<group>"; };
    9F3105551A88E5F700D7C8E2 /* 3G.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = 3G.png; sourceTree = "<group>"; };
    9F3105561A88E5F700D7C8E2 /* 3G2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = 3G2.png; sourceTree = "<group>"; };
    9F3105571A88E5F700D7C8E2 /* 3G2@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "3G2@2x.png"; sourceTree = "<group>"; };
    9F3105581A88E5F700D7C8E2 /* 3G2@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "3G2@3x.png"; sourceTree = "<group>"; };
    9F3105591A88E5F700D7C8E2 /* 3G@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "3G@2x.png"; sourceTree = "<group>"; };
    9F31055A1A88E5F700D7C8E2 /* 3G@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "3G@3x.png"; sourceTree = "<group>"; };
    9F31055B1A88E5F700D7C8E2 /* bilgisayar.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = bilgisayar.png; sourceTree = "<group>"; };
    9F31055C1A88E5F700D7C8E2 /* bilgisayar2.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = bilgisayar2.png; sourceTree = "<group>"; };
    9F31055D1A88E5F700D7C8E2 /* bilgisayar2@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "bilgisayar2@2x.png"; sourceTree = "<group>"; };
    9F31055E1A88E5F700D7C8E2 /* bilgisayar2@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "bilgisayar2@3x.png"; sourceTree = "<group>"; };
    9F31055F1A88E5F700D7C8E2 /* bilgisayar@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "bilgisayar@2x.png"; sourceTree = "<group>"; };
    9F3105601A88E5F700D7C8E2 /* bilgisayar@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "bilgisayar@3x.png"; sourceTree = "<group>"; };
    9F3105611A88E5F700D7C8E2 /* Nar_gri.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Nar_gri.png; sourceTree = "<group>"; };
    9F3105621A88E5F700D7C8E2 /* Nar_gri@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Nar_gri@2x.png"; sourceTree = "<group>"; };
    9F3105631A88E5F700D7C8E2 /* Nar_gri@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Nar_gri@3x.png"; sourceTree = "<group>"; };
    9F3105641A88E5F700D7C8E2 /* Nar_mavi.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Nar_mavi.png; sourceTree = "<group>"; };
    9F3105651A88E5F700D7C8E2 /* Nar_mavi@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Nar_mavi@2x.png"; sourceTree = "<group>"; };
    9F3105661A88E5F700D7C8E2 /* Nar_mavi@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Nar_mavi@3x.png"; sourceTree = "<group>"; };
    9F3105681A88E5F700D7C8E2 /* 3G2_t.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = 3G2_t.png; sourceTree = "<group>"; };
    9F3105691A88E5F700D7C8E2 /* 3G2_t@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "3G2_t@2x.png"; sourceTree = "<group>"; };
    9F31056A1A88E5F700D7C8E2 /* 3G2_t@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "3G2_t@3x.png"; sourceTree = "<group>"; };
    9F31056B1A88E5F700D7C8E2 /* bilgisayar2_t.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = bilgisayar2_t.png; sourceTree = "<group>"; };
    9F31056C1A88E5F700D7C8E2 /* bilgisayar2_t@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "bilgisayar2_t@2x.png"; sourceTree = "<group>"; };
    9F31056D1A88E5F700D7C8E2 /* bilgisayar2_t@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "bilgisayar2_t@3x.png"; sourceTree = "<group>"; };
    9F31056E1A88E5F700D7C8E2 /* Nar_mavi_t.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Nar_mavi_t.png; sourceTree = "<group>"; };
    9F31056F1A88E5F700D7C8E2 /* Nar_mavi_t@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Nar_mavi_t@2x.png"; sourceTree = "<group>"; };
    9F3105701A88E5F700D7C8E2 /* Nar_mavi_t@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Nar_mavi_t@3x.png"; sourceTree = "<group>"; };
    9F3105711A88E5F700D7C8E2 /* TL_beyaz_t.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TL_beyaz_t.png; sourceTree = "<group>"; };
    9F3105721A88E5F700D7C8E2 /* TL_beyaz_t@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TL_beyaz_t@2x.png"; sourceTree = "<group>"; };
    9F3105731A88E5F700D7C8E2 /* TL_beyaz_t@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TL_beyaz_t@3x.png"; sourceTree = "<group>"; };
    9F3105741A88E5F700D7C8E2 /* TL_mavi_t.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TL_mavi_t.png; sourceTree = "<group>"; };
    9F3105751A88E5F700D7C8E2 /* TL_mavi_t@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TL_mavi_t@2x.png"; sourceTree = "<group>"; };
    9F3105761A88E5F700D7C8E2 /* TL_mavi_t@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TL_mavi_t@3x.png"; sourceTree = "<group>"; };
    9F3105771A88E5F700D7C8E2 /* TL_gri.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TL_gri.png; sourceTree = "<group>"; };
    9F3105781A88E5F700D7C8E2 /* TL_gri@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TL_gri@2x.png"; sourceTree = "<group>"; };
    9F3105791A88E5F700D7C8E2 /* TL_gri@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TL_gri@3x.png"; sourceTree = "<group>"; };
    9F31057A1A88E5F700D7C8E2 /* TL_mavi.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TL_mavi.png; sourceTree = "<group>"; };
    9F31057B1A88E5F700D7C8E2 /* TL_mavi@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TL_mavi@2x.png"; sourceTree = "<group>"; };
    9F31057C1A88E5F700D7C8E2 /* TL_mavi@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TL_mavi@3x.png"; sourceTree = "<group>"; };
    9F31057D1A88E5F700D7C8E2 /* tc_address_book.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = tc_address_book.png; sourceTree = "<group>"; };
    9F31057E1A88E5F700D7C8E2 /* tc_address_book@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "tc_address_book@2x.png"; sourceTree = "<group>"; };
    9F31057F1A88E5F700D7C8E2 /* tc_address_book@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "tc_address_book@3x.png"; sourceTree = "<group>"; };
    9F3105801A88E5F700D7C8E2 /* tc_amex.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = tc_amex.png; sourceTree = "<group>"; };
    9F3105811A88E5F700D7C8E2 /* tc_amex@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "tc_amex@2x.png"; sourceTree = "<group>"; };
    9F3105821A88E5F700D7C8E2 /* tc_master.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = tc_master.png; sourceTree = "<group>"; };
    9F3105831A88E5F700D7C8E2 /* tc_master@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "tc_master@2x.png"; sourceTree = "<group>"; };
    9F3105841A88E5F700D7C8E2 /* TC_To_Up_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_To_Up_icon.png; sourceTree = "<group>"; };
    9F3105851A88E5F700D7C8E2 /* TC_To_Up_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_To_Up_icon@2x.png"; sourceTree = "<group>"; };
    9F3105861A88E5F700D7C8E2 /* TC_topup_contact_cell_bg.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_topup_contact_cell_bg.png; sourceTree = "<group>"; };
    9F3105871A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_topup_contact_cell_bg@2x.png"; sourceTree = "<group>"; };
    9F3105881A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_topup_contact_cell_bg@3x.png"; sourceTree = "<group>"; };
    9F31058C1A88E5F700D7C8E2 /* TC_topup_success.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_topup_success.png; sourceTree = "<group>"; };
    9F31058D1A88E5F700D7C8E2 /* TC_topup_success@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_topup_success@2x.png"; sourceTree = "<group>"; };
    9F31058E1A88E5F700D7C8E2 /* TC_topup_success@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_topup_success@3x.png"; sourceTree = "<group>"; };
    9F31058F1A88E5F700D7C8E2 /* TC_tu_back_arrow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_back_arrow.png; sourceTree = "<group>"; };
    9F3105901A88E5F700D7C8E2 /* TC_tu_back_arrow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_back_arrow@2x.png"; sourceTree = "<group>"; };
    9F3105911A88E5F700D7C8E2 /* TC_tu_data_icon_OFF.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_data_icon_OFF.png; sourceTree = "<group>"; };
    9F3105921A88E5F700D7C8E2 /* TC_tu_data_icon_OFF@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_data_icon_OFF@2x.png"; sourceTree = "<group>"; };
    9F3105931A88E5F700D7C8E2 /* TC_tu_data_icon_ON.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_data_icon_ON.png; sourceTree = "<group>"; };
    9F3105941A88E5F700D7C8E2 /* TC_tu_data_icon_ON@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_data_icon_ON@2x.png"; sourceTree = "<group>"; };
    9F3105951A88E5F700D7C8E2 /* TC_tu_default_profile.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_default_profile.png; sourceTree = "<group>"; };
    9F3105961A88E5F700D7C8E2 /* TC_tu_default_profile@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_default_profile@2x.png"; sourceTree = "<group>"; };
    9F3105971A88E5F700D7C8E2 /* TC_tu_default_profile@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_default_profile@3x.png"; sourceTree = "<group>"; };
    9F3105981A88E5F700D7C8E2 /* TC_tu_info_btn.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_info_btn.png; sourceTree = "<group>"; };
    9F3105991A88E5F700D7C8E2 /* TC_tu_info_btn@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_info_btn@2x.png"; sourceTree = "<group>"; };
    9F31059A1A88E5F700D7C8E2 /* TC_tu_main_btn.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_main_btn.png; sourceTree = "<group>"; };
    9F31059B1A88E5F700D7C8E2 /* TC_tu_main_btn@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_main_btn@2x.png"; sourceTree = "<group>"; };
    9F31059C1A88E5F700D7C8E2 /* TC_tu_main_btn@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_main_btn@3x.png"; sourceTree = "<group>"; };
    9F31059D1A88E5F700D7C8E2 /* TC_tu_main_lable_btn1.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_main_lable_btn1.png; sourceTree = "<group>"; };
    9F31059E1A88E5F700D7C8E2 /* TC_tu_main_lable_btn1@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_main_lable_btn1@2x.png"; sourceTree = "<group>"; };
    9F31059F1A88E5F700D7C8E2 /* TC_tu_main_lable_btn3.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_main_lable_btn3.png; sourceTree = "<group>"; };
    9F3105A01A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_main_lable_btn3@2x.png"; sourceTree = "<group>"; };
    9F3105A11A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_main_lable_btn3@3x.png"; sourceTree = "<group>"; };
    9F3105A21A88E5F700D7C8E2 /* TC_tu_mobile.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_mobile.png; sourceTree = "<group>"; };
    9F3105A31A88E5F700D7C8E2 /* TC_tu_mobile@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_mobile@2x.png"; sourceTree = "<group>"; };
    9F3105A41A88E5F700D7C8E2 /* TC_tu_mobile@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_mobile@3x.png"; sourceTree = "<group>"; };
    9F3105A51A88E5F700D7C8E2 /* TC_tu_type_value_arrow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_tu_type_value_arrow.png; sourceTree = "<group>"; };
    9F3105A61A88E5F700D7C8E2 /* TC_tu_type_value_arrow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_type_value_arrow@2x.png"; sourceTree = "<group>"; };
    9F3105A71A88E5F700D7C8E2 /* TC_tu_type_value_arrow@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_tu_type_value_arrow@3x.png"; sourceTree = "<group>"; };
    9F3105A81A88E5F700D7C8E2 /* tc_visa.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = tc_visa.png; sourceTree = "<group>"; };
    9F3105A91A88E5F700D7C8E2 /* tc_visa@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "tc_visa@2x.png"; sourceTree = "<group>"; };
    9F3105AA1A88E5F700D7C8E2 /* topup_gray_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = topup_gray_icon.png; sourceTree = "<group>"; };
    9F3105AB1A88E5F700D7C8E2 /* topup_gray_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "topup_gray_icon@2x.png"; sourceTree = "<group>"; };
    9F3105AC1A88E5F700D7C8E2 /* topup_gray_icon@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "topup_gray_icon@3x.png"; sourceTree = "<group>"; };
    9F3105AD1A88E5F700D7C8E2 /* topup_selected_op.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = topup_selected_op.png; sourceTree = "<group>"; };
    9F3105AE1A88E5F700D7C8E2 /* topup_selected_op@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "topup_selected_op@2x.png"; sourceTree = "<group>"; };
    9F3105AF1A88E5F700D7C8E2 /* topup_selected_op@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "topup_selected_op@3x.png"; sourceTree = "<group>"; };
    9F3105B01A88E5F700D7C8E2 /* topup_unselected_op.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = topup_unselected_op.png; sourceTree = "<group>"; };
    9F3105B11A88E5F700D7C8E2 /* topup_unselected_op@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "topup_unselected_op@2x.png"; sourceTree = "<group>"; };
    9F3105B21A88E5F700D7C8E2 /* topup_unselected_op@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "topup_unselected_op@3x.png"; sourceTree = "<group>"; };
    9F3105B31A88E5F700D7C8E2 /* topup_white_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = topup_white_icon.png; sourceTree = "<group>"; };
    9F3105B41A88E5F700D7C8E2 /* topup_white_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "topup_white_icon@2x.png"; sourceTree = "<group>"; };
    9F3105B61A88E5F700D7C8E2 /* carpi.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = carpi.png; sourceTree = "<group>"; };
    9F3105B71A88E5F700D7C8E2 /* carpi@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "carpi@2x.png"; sourceTree = "<group>"; };
    9F3105B81A88E5F700D7C8E2 /* filterCarpi.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = filterCarpi.png; sourceTree = "<group>"; };
    9F3105B91A88E5F700D7C8E2 /* filterCarpi@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "filterCarpi@2x.png"; sourceTree = "<group>"; };
    9F3105BA1A88E5F700D7C8E2 /* filterGray.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = filterGray.png; sourceTree = "<group>"; };
    9F3105BB1A88E5F700D7C8E2 /* filterGray@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "filterGray@2x.png"; sourceTree = "<group>"; };
    9F3105BC1A88E5F700D7C8E2 /* filterSiyah.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = filterSiyah.png; sourceTree = "<group>"; };
    9F3105BD1A88E5F700D7C8E2 /* filterSiyah@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "filterSiyah@2x.png"; sourceTree = "<group>"; };
    9F3105BE1A88E5F700D7C8E2 /* inceleme.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = inceleme.png; sourceTree = "<group>"; };
    9F3105BF1A88E5F700D7C8E2 /* inceleme@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "inceleme@2x.png"; sourceTree = "<group>"; };
    9F3105C01A88E5F700D7C8E2 /* mavi4Mnt.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = mavi4Mnt.png; sourceTree = "<group>"; };
    9F3105C11A88E5F700D7C8E2 /* mavi4Mnt@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "mavi4Mnt@2x.png"; sourceTree = "<group>"; };
    9F3105C21A88E5F700D7C8E2 /* RadioButton-Selected.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RadioButton-Selected.png"; sourceTree = "<group>"; };
    9F3105C31A88E5F700D7C8E2 /* RadioButton-Selected@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RadioButton-Selected@2x.png"; sourceTree = "<group>"; };
    9F3105C41A88E5F700D7C8E2 /* RadioButton-Unselected.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RadioButton-Unselected.png"; sourceTree = "<group>"; };
    9F3105C51A88E5F700D7C8E2 /* RadioButton-Unselected@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "RadioButton-Unselected@2x.png"; sourceTree = "<group>"; };
    9F3105C61A88E5F700D7C8E2 /* search_white.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = search_white.png; sourceTree = "<group>"; };
    9F3105C71A88E5F700D7C8E2 /* search_white@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "search_white@2x.png"; sourceTree = "<group>"; };
    9F3105CA1A88E5F700D7C8E2 /* TC_SS_default_chaticon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SS_default_chaticon.png; sourceTree = "<group>"; };
    9F3105CB1A88E5F700D7C8E2 /* TC_SS_default_chaticon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_SS_default_chaticon@2x.png"; sourceTree = "<group>"; };
    9F3105CC1A88E5F700D7C8E2 /* TC_SS_default_searchHL.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_SS_default_searchHL.png; sourceTree = "<group>"; };
    9F3105CD1A88E5F700D7C8E2 /* TC_SS_default_searchHL@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_SS_default_searchHL@2x.png"; sourceTree = "<group>"; };
    9F3105CF1A88E5F700D7C8E2 /* validation_fail_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = validation_fail_icon.png; sourceTree = "<group>"; };
    9F3105D01A88E5F700D7C8E2 /* validation_fail_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "validation_fail_icon@2x.png"; sourceTree = "<group>"; };
    9F3105D11A88E5F700D7C8E2 /* validation_ok_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = validation_ok_icon.png; sourceTree = "<group>"; };
    9F3105D21A88E5F700D7C8E2 /* validation_ok_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "validation_ok_icon@2x.png"; sourceTree = "<group>"; };
    9F3105D41A88E5F700D7C8E2 /* TC_MWV_back_arrow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_MWV_back_arrow.png; sourceTree = "<group>"; };
    9F3105D51A88E5F700D7C8E2 /* TC_MWV_back_arrow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_back_arrow@2x.png"; sourceTree = "<group>"; };
    9F3105D61A88E5F700D7C8E2 /* TC_MWV_back_arrow@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_back_arrow@3x.png"; sourceTree = "<group>"; };
    9F3105D71A88E5F700D7C8E2 /* TC_MWV_forward_arrow.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_MWV_forward_arrow.png; sourceTree = "<group>"; };
    9F3105D81A88E5F700D7C8E2 /* TC_MWV_forward_arrow@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_forward_arrow@2x.png"; sourceTree = "<group>"; };
    9F3105D91A88E5F700D7C8E2 /* TC_MWV_forward_arrow@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_forward_arrow@3x.png"; sourceTree = "<group>"; };
    9F3105DA1A88E5F700D7C8E2 /* TC_MWV_logo.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_MWV_logo.png; sourceTree = "<group>"; };
    9F3105DB1A88E5F700D7C8E2 /* TC_MWV_logo@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_logo@2x.png"; sourceTree = "<group>"; };
    9F3105DC1A88E5F700D7C8E2 /* TC_MWV_logo@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_logo@3x.png"; sourceTree = "<group>"; };
    9F3105DD1A88E5F700D7C8E2 /* TC_MWV_refresh_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_MWV_refresh_icon.png; sourceTree = "<group>"; };
    9F3105DE1A88E5F700D7C8E2 /* TC_MWV_refresh_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_refresh_icon@2x.png"; sourceTree = "<group>"; };
    9F3105DF1A88E5F700D7C8E2 /* TC_MWV_refresh_icon@3x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_refresh_icon@3x.png"; sourceTree = "<group>"; };
    9F3105E01A88E5F700D7C8E2 /* TC_MWV_share_icon.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = TC_MWV_share_icon.png; sourceTree = "<group>"; };
    9F3105E11A88E5F700D7C8E2 /* TC_MWV_share_icon@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "TC_MWV_share_icon@2x.png"; sourceTree = "<group>"; };
    9F3105E31A88E5F700D7C8E2 /* Default-568h@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Default-568h@2x.png"; sourceTree = "<group>"; };
    9F3105E41A88E5F700D7C8E2 /* Default.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = Default.png; sourceTree = "<group>"; };
    9F3105E51A88E5F700D7C8E2 /* Default@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "Default@2x.png"; sourceTree = "<group>"; };
    9F3105E61A88E5F700D7C8E2 /* Maltepe_Location.gpx */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.xml; path = Maltepe_Location.gpx; sourceTree = "<group>"; };
    9F3105E71A88E5F700D7C8E2 /* MenuSearch.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = MenuSearch.plist; sourceTree = "<group>"; };
    9F3105E81A88E5F700D7C8E2 /* NotificationSettings.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = NotificationSettings.plist; sourceTree = "<group>"; };
    9F3105E91A88E5F700D7C8E2 /* OneBox.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = OneBox.plist; sourceTree = "<group>"; };
    9F3108EC1A88E81F00D7C8E2 /* BaseView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BaseView.h; sourceTree = "<group>"; };
    9F3108ED1A88E81F00D7C8E2 /* BaseView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BaseView.m; sourceTree = "<group>"; };
    9F3108EE1A88E81F00D7C8E2 /* PagingScrollContainer.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PagingScrollContainer.h; sourceTree = "<group>"; };
    9F3108EF1A88E81F00D7C8E2 /* PagingScrollContainer.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PagingScrollContainer.m; sourceTree = "<group>"; };
    9F3108F01A88E81F00D7C8E2 /* PagingScrollContainer.xib */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.xib; path = PagingScrollContainer.xib; sourceTree = "<group>"; };
    9F3108F41A88F69500D7C8E2 /* MySettingsVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MySettingsVC.h; sourceTree = "<group>"; };
    9F3108F51A88F69500D7C8E2 /* MySettingsVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MySettingsVC.m; sourceTree = "<group>"; };
    9F3108F61A88F69500D7C8E2 /* SettingsVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SettingsVC.h; sourceTree = "<group>"; };
    9F3108F71A88F69500D7C8E2 /* SettingsVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SettingsVC.m; sourceTree = "<group>"; };
    9F4B57521A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.nolimit.notice&key=myAccountDashboardPageManager&type=0 */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "cms.json?desiredKey=minidashboard.data.limitliss.nolimit.notice&key=myAccountDashboardPageManager&type=0"; sourceTree = "<group>"; };
    9F4B57531A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.notice&key=myAccountDashboardPageManager&type=0 */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "cms.json?desiredKey=minidashboard.data.limitliss.notice&key=myAccountDashboardPageManager&type=0"; sourceTree = "<group>"; };
    9F4B57541A4ABF0B0055582A /* cms.json?desiredKey=native.storelocator.free&key=commonPageManager&type=0 */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "cms.json?desiredKey=native.storelocator.free&key=commonPageManager&type=0"; sourceTree = "<group>"; };
    9F4B57551A4ABF0B0055582A /* cms.json?desiredKey=topup.native.weburl.tl&key=topUpPageManager&type=2 */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "cms.json?desiredKey=topup.native.weburl.tl&key=topUpPageManager&type=2"; sourceTree = "<group>"; };
    9F4B57561A4ABF0B0055582A /* giris.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = giris.json; sourceTree = "<group>"; };
    9F4B57571A4ABF0B0055582A /* kampanyalar.json?size=6 */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "kampanyalar.json?size=6"; sourceTree = "<group>"; };
    9F4B57581A4ABF0B0055582A /* menu.json?custType=0&menuType=0 */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "menu.json?custType=0&menuType=0"; sourceTree = "<group>"; };
    9F4B57591A4ABF0B0055582A /* property.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = property.json; sourceTree = "<group>"; };
    9F4B575A1A4ABF0B0055582A /* urun-ve-hizmetler.json?size=6 */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "urun-ve-hizmetler.json?size=6"; sourceTree = "<group>"; };
    9F4B575D1A4ABF0B0055582A /* hat.json?settingType=1 */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "hat.json?settingType=1"; sourceTree = "<group>"; };
    9F4B575E1A4ABF0B0055582A /* hatmenu.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = hatmenu.json; sourceTree = "<group>"; };
    9F4B575F1A4ABF0B0055582A /* dataprocesscheck.json?logintype=MSISDN */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "dataprocesscheck.json?logintype=MSISDN"; sourceTree = "<group>"; };
    9F4B57611A4ABF0B0055582A /* analiz.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = analiz.json; sourceTree = "<group>"; };
    9F4B57621A4ABF0B0055582A /* anasayfa.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = anasayfa.json; sourceTree = "<group>"; };
    9F4B57631A4ABF0B0055582A /* hatmenu.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = hatmenu.json; sourceTree = "<group>"; };
    9F4B57641A4ABF0B0055582A /* kalankullanim.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = kalankullanim.json; sourceTree = "<group>"; };
    9F4B57651A4ABF0B0055582A /* serviceLogin.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = serviceLogin.json; sourceTree = "<group>"; };
    9F4B57771A4AFAC70055582A /* AdjustHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AdjustHelper.h; sourceTree = "<group>"; };
    9F4B57781A4AFAC70055582A /* AdjustHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AdjustHelper.m; sourceTree = "<group>"; };
    9F75BE491B093991006A9356 /* yetkili_onayi@1x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "yetkili_onayi@1x.png"; sourceTree = "<group>"; };
    9F75BE4A1B093991006A9356 /* yetkili_onayi@2x.png */ = {isa = PBXFileReference; lastKnownFileType = image.png; path = "yetkili_onayi@2x.png"; sourceTree = "<group>"; };
    9F77E6F91ACAFFDF00A5139F /* CoreBluetooth.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = CoreBluetooth.framework; path = System/Library/Frameworks/CoreBluetooth.framework; sourceTree = SDKROOT; };
    9F77E6FB1ACAFFE500A5139F /* AdSupport.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = AdSupport.framework; path = System/Library/Frameworks/AdSupport.framework; sourceTree = SDKROOT; };
    9F77E6FD1ACB00EC00A5139F /* BeaconHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BeaconHelper.h; sourceTree = "<group>"; };
    9F77E6FE1ACB00ED00A5139F /* BeaconHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BeaconHelper.m; sourceTree = "<group>"; };
    9F77E7001ACC0EA700A5139F /* NSData+Base64V2.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSData+Base64V2.h"; sourceTree = "<group>"; };
    9F77E7011ACC0EA700A5139F /* NSData+Base64V2.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSData+Base64V2.m"; sourceTree = "<group>"; };
    9F8D6DEC1A91E4A800AECEC9 /* mail-gonder.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = "mail-gonder.json"; sourceTree = "<group>"; };
    9FF2DE8F1A4C40390016523F /* topup.json?productType=1&payment=kk */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "topup.json?productType=1&payment=kk"; sourceTree = "<group>"; };
    9FF2DE911A4C40650016523F /* topup.json?productType=7&payment=kk */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "topup.json?productType=7&payment=kk"; sourceTree = "<group>"; };
    9FF2DE931A4C40910016523F /* kk-odeme.json */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.json; path = "kk-odeme.json"; sourceTree = "<group>"; };
    9FF2DE951A4C40EF0016523F /* topup.json?productType=4&payment=kk */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "topup.json?productType=4&payment=kk"; sourceTree = "<group>"; };
    9FF2DE971A4C410B0016523F /* topup.json?productType=2&payment=kk */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text; path = "topup.json?productType=2&payment=kk"; sourceTree = "<group>"; };
    A51278A1191D1818002CFE51 /* SettingsPageMenuViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SettingsPageMenuViewCell.h; sourceTree = "<group>"; };
    A51278A2191D1818002CFE51 /* SettingsPageMenuViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SettingsPageMenuViewCell.m; sourceTree = "<group>"; };
    A51278B2191D1922002CFE51 /* OnePopulerServiceView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = OnePopulerServiceView.h; sourceTree = "<group>"; };
    A51278B3191D1922002CFE51 /* OnePopulerServiceView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = OnePopulerServiceView.m; sourceTree = "<group>"; };
    A51278B4191D1922002CFE51 /* PopulerServicesView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PopulerServicesView.h; sourceTree = "<group>"; };
    A51278B5191D1922002CFE51 /* PopulerServicesView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PopulerServicesView.m; sourceTree = "<group>"; };
    A51FA588190815C500737236 /* NSMutableURLRequest+Cookie.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSMutableURLRequest+Cookie.h"; sourceTree = "<group>"; };
    A51FA589190815C500737236 /* NSMutableURLRequest+Cookie.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSMutableURLRequest+Cookie.m"; sourceTree = "<group>"; };
    C7A0F729D97DDBE26C753F0F /* Pods.appstore.xcconfig */ = {isa = PBXFileReference; includeInIndex = 1; lastKnownFileType = text.xcconfig; name = Pods.appstore.xcconfig; path = "Pods/Target Support Files/Pods/Pods.appstore.xcconfig"; sourceTree = "<group>"; };
    EC01E445181E411B00626834 /* MyUsageVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MyUsageVC.h; sourceTree = "<group>"; };
    EC01E446181E411B00626834 /* MyUsageVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MyUsageVC.m; sourceTree = "<group>"; };
    EC01E448181E41DE00626834 /* UsageRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UsageRest.h; sourceTree = "<group>"; };
    EC01E449181E41DE00626834 /* UsageRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UsageRest.m; sourceTree = "<group>"; };
    EC01E44B181E41F300626834 /* UsageRESTHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UsageRESTHelper.h; sourceTree = "<group>"; };
    EC01E44C181E41F300626834 /* UsageRESTHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UsageRESTHelper.m; sourceTree = "<group>"; };
    EC1A0DC418DB05CA00F4B769 /* AudioToolbox.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = AudioToolbox.framework; path = System/Library/Frameworks/AudioToolbox.framework; sourceTree = SDKROOT; };
    EC1F684718CDF1F500DEAAC1 /* NetmeraTagEventSettings.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = NetmeraTagEventSettings.h; sourceTree = "<group>"; };
    EC261EB018759D4B001BBBE7 /* LoggingRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = LoggingRest.h; sourceTree = "<group>"; };
    EC261EB118759D4B001BBBE7 /* LoggingRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = LoggingRest.m; sourceTree = "<group>"; };
    EC261EB51876D630001BBBE7 /* NSException+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSException+Extensions.h"; sourceTree = "<group>"; };
    EC261EB61876D630001BBBE7 /* NSException+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSException+Extensions.m"; sourceTree = "<group>"; };
    EC261EB81876E3EB001BBBE7 /* CustomException.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CustomException.h; sourceTree = "<group>"; };
    EC261EB91876E3EB001BBBE7 /* CustomException.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CustomException.m; sourceTree = "<group>"; };
    EC261EBB187AB8C0001BBBE7 /* GoogleMaps.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; path = GoogleMaps.framework; sourceTree = "<group>"; };
    EC261EBD187AB8D4001BBBE7 /* GoogleMaps.bundle */ = {isa = PBXFileReference; lastKnownFileType = "wrapper.plug-in"; name = GoogleMaps.bundle; path = GoogleMaps.framework/Versions/A/Resources/GoogleMaps.bundle; sourceTree = "<group>"; };
    EC3A34D618487AA000CA941E /* UIApplication+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIApplication+Extensions.h"; sourceTree = "<group>"; };
    EC3A34D718487AA000CA941E /* UIApplication+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIApplication+Extensions.m"; sourceTree = "<group>"; };
    EC3C116618589AF400E04224 /* CMSRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CMSRest.h; sourceTree = "<group>"; };
    EC3C116718589AF400E04224 /* CMSRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CMSRest.m; sourceTree = "<group>"; };
    EC479AD2183A3EE2003DAC62 /* NotificationsVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NotificationsVC.h; sourceTree = "<group>"; };
    EC479AD3183A3EE2003DAC62 /* NotificationsVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NotificationsVC.m; sourceTree = "<group>"; };
    EC479AD5183A4027003DAC62 /* NotificationTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NotificationTableViewCell.h; sourceTree = "<group>"; };
    EC479AD6183A4027003DAC62 /* NotificationTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NotificationTableViewCell.m; sourceTree = "<group>"; };
    EC5B600F18C8655300485F7A /* NetmeraHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NetmeraHelper.h; sourceTree = "<group>"; };
    EC5B601018C8655300485F7A /* NetmeraHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NetmeraHelper.m; sourceTree = "<group>"; };
    EC5B601218C894AE00485F7A /* Accounts.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = Accounts.framework; path = System/Library/Frameworks/Accounts.framework; sourceTree = SDKROOT; };
    EC5B601418C894B300485F7A /* Twitter.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = Twitter.framework; path = System/Library/Frameworks/Twitter.framework; sourceTree = SDKROOT; };
    EC5E45711845DD5200B77E37 /* MenuItem.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MenuItem.h; sourceTree = "<group>"; };
    EC5E45721845DD5200B77E37 /* MenuItem.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MenuItem.m; sourceTree = "<group>"; };
    EC5E45851845F6E300B77E37 /* MBProgressHUD.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MBProgressHUD.h; sourceTree = "<group>"; };
    EC5E45861845F6E300B77E37 /* MBProgressHUD.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MBProgressHUD.m; sourceTree = "<group>"; };
    EC5E45881845F6E300B77E37 /* MLPAutoCompleteTextField.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MLPAutoCompleteTextField.h; sourceTree = "<group>"; };
    EC5E45891845F6E300B77E37 /* MLPAutoCompleteTextField.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MLPAutoCompleteTextField.m; sourceTree = "<group>"; };
    EC5E458A1845F6E300B77E37 /* MLPAutoCompleteTextFieldDataSource.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MLPAutoCompleteTextFieldDataSource.h; sourceTree = "<group>"; };
    EC5E458B1845F6E300B77E37 /* MLPAutoCompleteTextFieldDelegate.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MLPAutoCompleteTextFieldDelegate.h; sourceTree = "<group>"; };
    EC5E458C1845F6E300B77E37 /* MLPAutoCompletionObject.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MLPAutoCompletionObject.h; sourceTree = "<group>"; };
    EC5E458D1845F6E300B77E37 /* NSString+Levenshtein.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSString+Levenshtein.h"; sourceTree = "<group>"; };
    EC5E458E1845F6E300B77E37 /* NSString+Levenshtein.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSString+Levenshtein.m"; sourceTree = "<group>"; };
    EC5E45921845F6E300B77E37 /* RadioButton.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RadioButton.h; sourceTree = "<group>"; };
    EC5E45931845F6E300B77E37 /* RadioButton.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RadioButton.m; sourceTree = "<group>"; };
    EC5E45951845F6E300B77E37 /* RTLabel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RTLabel.h; sourceTree = "<group>"; };
    EC5E45961845F6E300B77E37 /* RTLabel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = RTLabel.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    EC65337F18891FB900AB9756 /* Stats.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = Stats.h; sourceTree = "<group>"; };
    EC65338018891FB900AB9756 /* Stats.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = Stats.m; sourceTree = "<group>"; };
    EC65338518896E3800AB9756 /* UIImage+NoCached.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIImage+NoCached.h"; sourceTree = "<group>"; };
    EC65338618896E3800AB9756 /* UIImage+NoCached.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIImage+NoCached.m"; sourceTree = "<group>"; };
    EC67D810188FFDC800911F61 /* CoreFoundation.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = CoreFoundation.framework; path = System/Library/Frameworks/CoreFoundation.framework; sourceTree = SDKROOT; };
    EC67D8121890040900911F61 /* CustomURL.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CustomURL.h; sourceTree = "<group>"; };
    EC67D8131890040900911F61 /* CustomURL.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CustomURL.m; sourceTree = "<group>"; };
    EC684F7A186AC6E000AF894F /* HomeLoginView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = HomeLoginView.h; sourceTree = "<group>"; };
    EC684F7B186AC6E000AF894F /* HomeLoginView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = HomeLoginView.m; sourceTree = "<group>"; };
    EC684FCA186C4FB000AF894F /* CFNetwork.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = CFNetwork.framework; path = System/Library/Frameworks/CFNetwork.framework; sourceTree = SDKROOT; };
    EC684FCD186C5B1A00AF894F /* UDHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UDHelper.h; sourceTree = "<group>"; };
    EC684FCE186C5B1A00AF894F /* UDHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UDHelper.m; sourceTree = "<group>"; };
    EC6D433218D1E6F80036E4FA /* NSMutableDictionary+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSMutableDictionary+Extensions.h"; sourceTree = "<group>"; };
    EC6D433318D1E6F80036E4FA /* NSMutableDictionary+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSMutableDictionary+Extensions.m"; sourceTree = "<group>"; };
    EC709C9218D4A22300B47D93 /* SDKKeys.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = SDKKeys.h; sourceTree = "<group>"; };
    EC709C9418D71EEF00B47D93 /* OneProductAndService.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = OneProductAndService.h; sourceTree = "<group>"; };
    EC709C9518D71EEF00B47D93 /* OneProductAndService.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = OneProductAndService.m; sourceTree = "<group>"; };
    EC709C9618D71EEF00B47D93 /* ProductAndServicesView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ProductAndServicesView.h; sourceTree = "<group>"; };
    EC709C9718D71EEF00B47D93 /* ProductAndServicesView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ProductAndServicesView.m; sourceTree = "<group>"; };
    EC709C9E18D87F0700B47D93 /* SHUncaughtExceptionHandler.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SHUncaughtExceptionHandler.h; sourceTree = "<group>"; };
    EC709C9F18D87F0700B47D93 /* SHUncaughtExceptionHandler.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SHUncaughtExceptionHandler.m; sourceTree = "<group>"; };
    EC709CA118D87FAF00B47D93 /* PropertyRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PropertyRest.h; sourceTree = "<group>"; };
    EC709CA218D87FAF00B47D93 /* PropertyRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PropertyRest.m; sourceTree = "<group>"; };
    EC768B6F18C087C500313288 /* AXRatingView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AXRatingView.h; sourceTree = "<group>"; };
    EC768B7018C087C500313288 /* AXRatingView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AXRatingView.m; sourceTree = "<group>"; };
    EC768B7318C09A3700313288 /* RSWeakifySelf.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = RSWeakifySelf.h; sourceTree = "<group>"; };
    EC768B7418C09A3700313288 /* RSWeakifySelf.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = RSWeakifySelf.m; sourceTree = "<group>"; };
    EC78247E189F8EC000DACEFD /* Settings.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = Settings.h; sourceTree = "<group>"; };
    EC78247F189F8FEC00DACEFD /* FakeDataSourceHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FakeDataSourceHelper.h; sourceTree = "<group>"; };
    EC782480189F8FEC00DACEFD /* FakeDataSourceHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FakeDataSourceHelper.m; sourceTree = "<group>"; };
    EC782488189F9CDE00DACEFD /* Colors.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = Colors.h; sourceTree = "<group>"; };
    EC782489189F9D4600DACEFD /* URLs.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = URLs.h; sourceTree = "<group>"; };
    EC78248A189FC3F400DACEFD /* AllowanceConstants.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = AllowanceConstants.h; sourceTree = "<group>"; };
    EC78248F18A0ED4C00DACEFD /* CustomRefreshControl.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CustomRefreshControl.h; sourceTree = "<group>"; };
    EC78249018A0ED4C00DACEFD /* CustomRefreshControl.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CustomRefreshControl.m; sourceTree = "<group>"; };
    EC79804917ABF100007295BD /* ISO8601DateFormatter.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ISO8601DateFormatter.h; sourceTree = "<group>"; };
    EC79804A17ABF100007295BD /* ISO8601DateFormatter.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ISO8601DateFormatter.m; sourceTree = "<group>"; };
    EC7B43A518B2451100FC0334 /* UIColor+SharedColors.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIColor+SharedColors.h"; sourceTree = "<group>"; };
    EC7B43A618B2451100FC0334 /* UIColor+SharedColors.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIColor+SharedColors.m"; sourceTree = "<group>"; };
    EC8009BE17A910220018D9A6 /* HMSegmentedControl.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = HMSegmentedControl.h; sourceTree = "<group>"; };
    EC8009BF17A910220018D9A6 /* HMSegmentedControl.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = HMSegmentedControl.m; sourceTree = "<group>"; };
    EC821F971871A65A006EB1D0 /* CommonButton.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CommonButton.h; sourceTree = "<group>"; };
    EC821F981871A65A006EB1D0 /* CommonButton.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CommonButton.m; sourceTree = "<group>"; };
    EC8DC59A18B5F73C00E2768C /* TabButton.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = TabButton.h; sourceTree = "<group>"; };
    EC8DC59B18B5F73C00E2768C /* TabButton.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = TabButton.m; sourceTree = "<group>"; };
    EC8E91D4181E4B660079F0CC /* UsageItemTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UsageItemTableViewCell.h; sourceTree = "<group>"; };
    EC8E91D5181E4B660079F0CC /* UsageItemTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UsageItemTableViewCell.m; sourceTree = "<group>"; };
    EC97ACB51796BE4500AB780D /* AllowanceRESTHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowanceRESTHelper.h; sourceTree = "<group>"; };
    EC97ACB61796BE4500AB780D /* AllowanceRESTHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowanceRESTHelper.m; sourceTree = "<group>"; };
    EC97ACB71796BE4500AB780D /* BillRESTHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillRESTHelper.h; sourceTree = "<group>"; };
    EC97ACB81796BE4500AB780D /* BillRESTHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillRESTHelper.m; sourceTree = "<group>"; };
    EC97ACB91796BE4500AB780D /* NotificationRESTHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NotificationRESTHelper.h; sourceTree = "<group>"; };
    EC97ACBA1796BE4500AB780D /* NotificationRESTHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NotificationRESTHelper.m; sourceTree = "<group>"; };
    ECA259C8185F02260030ECFD /* NSArray+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSArray+Extensions.h"; sourceTree = "<group>"; };
    ECA259C9185F02260030ECFD /* NSArray+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSArray+Extensions.m"; sourceTree = "<group>"; };
    ECA259CB185F40BA0030ECFD /* BaseVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BaseVC.h; sourceTree = "<group>"; };
    ECA259CC185F40BA0030ECFD /* BaseVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BaseVC.m; sourceTree = "<group>"; };
    ECA259CD185F40BA0030ECFD /* MenuVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MenuVC.h; sourceTree = "<group>"; };
    ECA259CE185F40BA0030ECFD /* MenuVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MenuVC.m; sourceTree = "<group>"; };
    ECA259D9185F40EF0030ECFD /* HomeVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = HomeVC.h; sourceTree = "<group>"; };
    ECA259DA185F40EF0030ECFD /* HomeVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = HomeVC.m; sourceTree = "<group>"; };
    ECA259DB185F40EF0030ECFD /* AppTourView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AppTourView.h; sourceTree = "<group>"; };
    ECA259DC185F40EF0030ECFD /* AppTourView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AppTourView.m; sourceTree = "<group>"; };
    ECA259DD185F40EF0030ECFD /* AnonymousHomeVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AnonymousHomeVC.h; sourceTree = "<group>"; };
    ECA259DE185F40EF0030ECFD /* AnonymousHomeVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AnonymousHomeVC.m; sourceTree = "<group>"; };
    ECA259EC185F417E0030ECFD /* AllowanceButton.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowanceButton.h; sourceTree = "<group>"; };
    ECA259ED185F417E0030ECFD /* AllowanceButton.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowanceButton.m; sourceTree = "<group>"; };
    ECA259F1185F45020030ECFD /* BillHistoryButton.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillHistoryButton.h; sourceTree = "<group>"; };
    ECA259F2185F45020030ECFD /* BillHistoryButton.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillHistoryButton.m; sourceTree = "<group>"; };
    ECA259F3185F45020030ECFD /* BillMenuButton.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillMenuButton.h; sourceTree = "<group>"; };
    ECA259F4185F45020030ECFD /* BillMenuButton.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillMenuButton.m; sourceTree = "<group>"; };
    ECA259F5185F45020030ECFD /* BillPageView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillPageView.h; sourceTree = "<group>"; };
    ECA259F6185F45020030ECFD /* BillPageView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillPageView.m; sourceTree = "<group>"; };
    ECA259F7185F45020030ECFD /* BillSummaryPageView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillSummaryPageView.h; sourceTree = "<group>"; };
    ECA259F8185F45020030ECFD /* BillSummaryPageView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillSummaryPageView.m; sourceTree = "<group>"; };
    ECA259F9185F45020030ECFD /* BillsVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillsVC.h; sourceTree = "<group>"; };
    ECA259FA185F45020030ECFD /* BillsVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillsVC.m; sourceTree = "<group>"; };
    ECA259FB185F45020030ECFD /* InternalBillSummaryView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = InternalBillSummaryView.h; sourceTree = "<group>"; };
    ECA259FC185F45020030ECFD /* InternalBillSummaryView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = InternalBillSummaryView.m; sourceTree = "<group>"; };
    ECA259FD185F45020030ECFD /* InternalBillVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = InternalBillVC.h; sourceTree = "<group>"; };
    ECA259FE185F45020030ECFD /* InternalBillVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = InternalBillVC.m; sourceTree = "<group>"; };
    ECA25A00185F45020030ECFD /* BillItemsView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillItemsView.h; sourceTree = "<group>"; };
    ECA25A01185F45020030ECFD /* BillItemsView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillItemsView.m; sourceTree = "<group>"; };
    ECA25A02185F45020030ECFD /* BillItemTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillItemTableViewCell.h; sourceTree = "<group>"; };
    ECA25A03185F45020030ECFD /* BillItemTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillItemTableViewCell.m; sourceTree = "<group>"; };
    ECA25A04185F45020030ECFD /* FilterOption.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterOption.h; sourceTree = "<group>"; };
    ECA25A05185F45020030ECFD /* FilterOption.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterOption.m; sourceTree = "<group>"; };
    ECA25A06185F45020030ECFD /* FilterOptionTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterOptionTableViewCell.h; sourceTree = "<group>"; };
    ECA25A07185F45020030ECFD /* FilterOptionTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterOptionTableViewCell.m; sourceTree = "<group>"; };
    ECA25A08185F45020030ECFD /* ItemFilteringButton.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ItemFilteringButton.h; sourceTree = "<group>"; };
    ECA25A09185F45020030ECFD /* ItemFilteringButton.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ItemFilteringButton.m; sourceTree = "<group>"; };
    ECA25A0C185F45020030ECFD /* FilterHeaderView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FilterHeaderView.h; sourceTree = "<group>"; };
    ECA25A0D185F45020030ECFD /* FilterHeaderView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FilterHeaderView.m; sourceTree = "<group>"; };
    ECA25A0E185F45020030ECFD /* ItemSearchTextField.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ItemSearchTextField.h; sourceTree = "<group>"; };
    ECA25A0F185F45020030ECFD /* ItemSearchTextField.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ItemSearchTextField.m; sourceTree = "<group>"; };
    ECA25A13185F45020030ECFD /* BillPaymentTextField.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillPaymentTextField.h; sourceTree = "<group>"; };
    ECA25A14185F45020030ECFD /* BillPaymentTextField.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillPaymentTextField.m; sourceTree = "<group>"; };
    ECA25A15185F45020030ECFD /* PayBillVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PayBillVC.h; sourceTree = "<group>"; };
    ECA25A16185F45020030ECFD /* PayBillVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PayBillVC.m; sourceTree = "<group>"; };
    ECA25A18185F45020030ECFD /* BillStatButtonView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillStatButtonView.h; sourceTree = "<group>"; };
    ECA25A19185F45020030ECFD /* BillStatButtonView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillStatButtonView.m; sourceTree = "<group>"; };
    ECA25A1C185F45020030ECFD /* MostNoticeableStatView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MostNoticeableStatView.h; sourceTree = "<group>"; };
    ECA25A1D185F45020030ECFD /* MostNoticeableStatView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MostNoticeableStatView.m; sourceTree = "<group>"; };
    ECA25A1E185F45020030ECFD /* MyBillStatsView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MyBillStatsView.h; sourceTree = "<group>"; };
    ECA25A1F185F45020030ECFD /* MyBillStatsView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MyBillStatsView.m; sourceTree = "<group>"; };
    ECA25A20185F45020030ECFD /* PeriodSliderView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PeriodSliderView.h; sourceTree = "<group>"; };
    ECA25A21185F45020030ECFD /* PeriodSliderView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PeriodSliderView.m; sourceTree = "<group>"; };
    ECA25A22185F45020030ECFD /* BillAnalysisDetailVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillAnalysisDetailVC.h; sourceTree = "<group>"; };
    ECA25A23185F45020030ECFD /* BillAnalysisDetailVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillAnalysisDetailVC.m; sourceTree = "<group>"; };
    ECA25A25185F45020030ECFD /* BillSummaryCellView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillSummaryCellView.h; sourceTree = "<group>"; };
    ECA25A26185F45020030ECFD /* BillSummaryCellView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillSummaryCellView.m; sourceTree = "<group>"; };
    ECA25A27185F45020030ECFD /* ScrollCellView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ScrollCellView.h; sourceTree = "<group>"; };
    ECA25A28185F45020030ECFD /* ScrollCellView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ScrollCellView.m; sourceTree = "<group>"; };
    ECA25A5B185F4FC00030ECFD /* ComboBoxVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ComboBoxVC.h; sourceTree = "<group>"; };
    ECA25A5C185F4FC00030ECFD /* ComboBoxVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ComboBoxVC.m; sourceTree = "<group>"; };
    ECA25A5E186044910030ECFD /* AllowanceChartCenterView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowanceChartCenterView.h; sourceTree = "<group>"; };
    ECA25A5F186044910030ECFD /* AllowanceChartCenterView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowanceChartCenterView.m; sourceTree = "<group>"; };
    ECA25A60186044910030ECFD /* AllowanceChartInsideView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AllowanceChartInsideView.h; sourceTree = "<group>"; };
    ECA25A61186044910030ECFD /* AllowanceChartInsideView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AllowanceChartInsideView.m; sourceTree = "<group>"; };
    ECA25A671860474C0030ECFD /* MenuTableViewCell.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = MenuTableViewCell.h; sourceTree = "<group>"; };
    ECA25A681860474C0030ECFD /* MenuTableViewCell.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = MenuTableViewCell.m; sourceTree = "<group>"; };
    ECA25A6C1860477D0030ECFD /* BillPageScrollView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BillPageScrollView.h; sourceTree = "<group>"; };
    ECA25A6D1860477D0030ECFD /* BillPageScrollView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BillPageScrollView.m; sourceTree = "<group>"; };
    ECA25A70186047930030ECFD /* HUDView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = HUDView.h; sourceTree = "<group>"; };
    ECA25A71186047930030ECFD /* HUDView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = HUDView.m; sourceTree = "<group>"; };
    ECA25A72186047930030ECFD /* LoadingProgressChartView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = LoadingProgressChartView.h; sourceTree = "<group>"; };
    ECA25A73186047930030ECFD /* LoadingProgressChartView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = LoadingProgressChartView.m; sourceTree = "<group>"; };
    ECA25A771860487C0030ECFD /* PageControl.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PageControl.h; sourceTree = "<group>"; };
    ECA25A781860487C0030ECFD /* PageControl.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PageControl.m; sourceTree = "<group>"; };
    ECA25A7B1860489C0030ECFD /* ScrollThingyView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ScrollThingyView.h; sourceTree = "<group>"; };
    ECA25A7C1860489C0030ECFD /* ScrollThingyView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ScrollThingyView.m; sourceTree = "<group>"; };
    ECA25A7F1860499A0030ECFD /* NKColorSwitch.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NKColorSwitch.h; sourceTree = "<group>"; };
    ECA25A801860499A0030ECFD /* NKColorSwitch.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NKColorSwitch.m; sourceTree = "<group>"; };
    ECA25A8318604C150030ECFD /* CommonGestureRecognizerDelegate.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CommonGestureRecognizerDelegate.h; sourceTree = "<group>"; };
    ECA25A8418604C150030ECFD /* CommonGestureRecognizerDelegate.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CommonGestureRecognizerDelegate.m; sourceTree = "<group>"; };
    ECA25A8718607B4F0030ECFD /* CreditView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CreditView.h; sourceTree = "<group>"; };
    ECA25A8818607B4F0030ECFD /* CreditView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CreditView.m; sourceTree = "<group>"; };
    ECA25A931861D1C10030ECFD /* NSError+Extensions.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSError+Extensions.h"; sourceTree = "<group>"; };
    ECA25A941861D1C10030ECFD /* NSError+Extensions.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSError+Extensions.m"; sourceTree = "<group>"; };
    ECA2EC1517C89E70005F66F7 /* CoreData.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = CoreData.framework; path = System/Library/Frameworks/CoreData.framework; sourceTree = SDKROOT; };
    ECA2EC1A17C89EAF005F66F7 /* libz.dylib */ = {isa = PBXFileReference; lastKnownFileType = "compiled.mach-o.dylib"; name = libz.dylib; path = usr/lib/libz.dylib; sourceTree = SDKROOT; };
    ECA43513185216AC00119D25 /* KeychainItemWrapper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = KeychainItemWrapper.h; sourceTree = "<group>"; };
    ECA43514185216AC00119D25 /* KeychainItemWrapper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = KeychainItemWrapper.m; sourceTree = "<group>"; };
    ECB618BB17AB7BC20070D0BD /* SBStackedBarChart.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SBStackedBarChart.h; sourceTree = "<group>"; };
    ECB618BC17AB7BC20070D0BD /* SBStackedBarChart.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SBStackedBarChart.m; sourceTree = "<group>"; };
    ECB618C217AB7BE70070D0BD /* HomeRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = HomeRest.h; sourceTree = "<group>"; };
    ECB618C317AB7BE70070D0BD /* HomeRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; lineEnding = 0; path = HomeRest.m; sourceTree = "<group>"; xcLanguageSpecificationIdentifier = xcode.lang.objc; };
    ECB618C617AB93BD0070D0BD /* UIView+HUD.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIView+HUD.h"; sourceTree = "<group>"; };
    ECB618C717AB93BD0070D0BD /* UIView+HUD.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIView+HUD.m"; sourceTree = "<group>"; };
    ECB82149189794380014532C /* FirstTimeAppTourView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FirstTimeAppTourView.h; sourceTree = "<group>"; };
    ECB8214A189794380014532C /* FirstTimeAppTourView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FirstTimeAppTourView.m; sourceTree = "<group>"; };
    ECB821651897F3E70014532C /* UIView+Glow.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIView+Glow.h"; sourceTree = "<group>"; };
    ECB821661897F3E70014532C /* UIView+Glow.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIView+Glow.m"; sourceTree = "<group>"; };
    ECBE1D2B18CEFD9E002933C8 /* BaseSlidingVC.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BaseSlidingVC.h; sourceTree = "<group>"; };
    ECBE1D2C18CEFD9E002933C8 /* BaseSlidingVC.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BaseSlidingVC.m; sourceTree = "<group>"; };
    ECBE23F41849D2C60091329E /* NotificationCategory.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = NotificationCategory.h; sourceTree = "<group>"; };
    ECBE23F51849D2C60091329E /* NotificationCategory.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = NotificationCategory.m; sourceTree = "<group>"; };
    ECC8A24118C633C000DA52F4 /* main.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = main.m; sourceTree = "<group>"; };
    ECC8A24218C633C000DA52F4 /* TurkcellHub-AppStore-Info.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = "TurkcellHub-AppStore-Info.plist"; sourceTree = "<group>"; };
    ECC8A24318C633C000DA52F4 /* TurkcellHub-Enterprise-Info.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = "TurkcellHub-Enterprise-Info.plist"; sourceTree = "<group>"; };
    ECC8A24418C633C000DA52F4 /* TurkcellHub-Info.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; path = "TurkcellHub-Info.plist"; sourceTree = "<group>"; };
    ECC8A24518C633C000DA52F4 /* TurkcellHub-Prefix.pch */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "TurkcellHub-Prefix.pch"; sourceTree = "<group>"; };
    ECCF71CA1796A91E00EC992B /* Enums.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = Enums.h; sourceTree = "<group>"; };
    ECCFE44917A792240090B080 /* DSBarChart.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = DSBarChart.h; sourceTree = "<group>"; };
    ECCFE44A17A792240090B080 /* DSBarChart.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = DSBarChart.m; sourceTree = "<group>"; };
    ECCFE45917A7D1930090B080 /* SettingsRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SettingsRest.h; sourceTree = "<group>"; };
    ECCFE45A17A7D1940090B080 /* SettingsRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SettingsRest.m; sourceTree = "<group>"; };
    ECDCCB4518C728D20029680A /* FacebookSDK.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; path = FacebookSDK.framework; sourceTree = "<group>"; };
    ECDCCB4918C747FE0029680A /* InfoPlistPreprocessorDefinitions.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = InfoPlistPreprocessorDefinitions.h; sourceTree = "<group>"; };
    ECF493D918A22BA700546E09 /* PNChartDelegate.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PNChartDelegate.h; sourceTree = "<group>"; };
    ECF493DA18A22BA700546E09 /* PNLineChart.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PNLineChart.h; sourceTree = "<group>"; };
    ECF493DB18A22BA700546E09 /* PNLineChart.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PNLineChart.m; sourceTree = "<group>"; };
    ECF493DC18A22BA700546E09 /* PNLineChartData.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PNLineChartData.h; sourceTree = "<group>"; };
    ECF493DD18A22BA700546E09 /* PNLineChartData.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PNLineChartData.m; sourceTree = "<group>"; };
    ECF493DE18A22BA700546E09 /* PNLineChartDataItem.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PNLineChartDataItem.h; sourceTree = "<group>"; };
    ECF493DF18A22BA700546E09 /* PNLineChartDataItem.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PNLineChartDataItem.m; sourceTree = "<group>"; };
    ECF493E318A22C6000546E09 /* PNChartLabel.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PNChartLabel.h; sourceTree = "<group>"; };
    ECF493E418A22C6000546E09 /* PNChartLabel.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PNChartLabel.m; sourceTree = "<group>"; };
    ECF493E518A22C6000546E09 /* PNColor.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PNColor.h; sourceTree = "<group>"; };
    ECF493E618A22C6000546E09 /* PNColor.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PNColor.m; sourceTree = "<group>"; };
    ECF493E918A2712700546E09 /* UIHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = UIHelper.h; sourceTree = "<group>"; };
    ECF493EA18A2712700546E09 /* UIHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = UIHelper.m; sourceTree = "<group>"; };
    ECF493EC18A2733700546E09 /* FontHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FontHelper.h; sourceTree = "<group>"; };
    ECF493ED18A2733700546E09 /* FontHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FontHelper.m; sourceTree = "<group>"; };
    ECF493EF18A2739700546E09 /* LocalNotificationsHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = LocalNotificationsHelper.h; sourceTree = "<group>"; };
    ECF493F018A2739700546E09 /* LocalNotificationsHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = LocalNotificationsHelper.m; sourceTree = "<group>"; };
    ECF493F218A285CB00546E09 /* AlertHelper.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AlertHelper.h; sourceTree = "<group>"; };
    ECF493F318A285CB00546E09 /* AlertHelper.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AlertHelper.m; sourceTree = "<group>"; };
    ECF6B57518AE0A1A0086C38B /* CircleView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = CircleView.h; sourceTree = "<group>"; };
    ECF6B57618AE0A1A0086C38B /* CircleView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = CircleView.m; sourceTree = "<group>"; };
    ECF6B59218AE188B0086C38B /* FTAnimation+UIView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "FTAnimation+UIView.h"; sourceTree = "<group>"; };
    ECF6B59318AE188B0086C38B /* FTAnimation+UIView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "FTAnimation+UIView.m"; sourceTree = "<group>"; };
    ECF6B59418AE188B0086C38B /* FTAnimation.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FTAnimation.h; sourceTree = "<group>"; };
    ECF6B59518AE188B0086C38B /* FTAnimationManager.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FTAnimationManager.h; sourceTree = "<group>"; };
    ECF6B59618AE188B0086C38B /* FTAnimationManager.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = FTAnimationManager.m; sourceTree = "<group>"; };
    ECF6B59718AE188B0086C38B /* FTUtils+NSObject.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "FTUtils+NSObject.h"; sourceTree = "<group>"; };
    ECF6B59818AE188B0086C38B /* FTUtils+NSObject.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "FTUtils+NSObject.m"; sourceTree = "<group>"; };
    ECF6B59918AE188B0086C38B /* FTUtils+UIGestureRecognizer.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "FTUtils+UIGestureRecognizer.h"; sourceTree = "<group>"; };
    ECF6B59A18AE188B0086C38B /* FTUtils+UIGestureRecognizer.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "FTUtils+UIGestureRecognizer.m"; sourceTree = "<group>"; };
    ECF6B59B18AE188B0086C38B /* FTUtils.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = FTUtils.h; sourceTree = "<group>"; };
    ECF6D24C1817BA7000B281CB /* ExpireMonthYearActionSheetPicker.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ExpireMonthYearActionSheetPicker.h; sourceTree = "<group>"; };
    ECF6D24D1817BA7000B281CB /* ExpireMonthYearActionSheetPicker.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ExpireMonthYearActionSheetPicker.m; sourceTree = "<group>"; };
    ED20E4AC1933419D002ABE21 /* OMCCRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = OMCCRest.h; sourceTree = "<group>"; };
    ED20E4AD1933419D002ABE21 /* OMCCRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = OMCCRest.m; sourceTree = "<group>"; };
    F30B90F317BDF9CF002EDC98 /* NSObject+NullRemoving.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "NSObject+NullRemoving.h"; sourceTree = "<group>"; };
    F30B90F417BDF9CF002EDC98 /* NSObject+NullRemoving.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "NSObject+NullRemoving.m"; sourceTree = "<group>"; };
    F30B911517BDFAA3002EDC98 /* SearchRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = SearchRest.h; sourceTree = "<group>"; };
    F30B911617BDFAA3002EDC98 /* SearchRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = SearchRest.m; sourceTree = "<group>"; };
    F30B911717BDFAA3002EDC98 /* StoreLocatorRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = StoreLocatorRest.h; sourceTree = "<group>"; };
    F30B911817BDFAA3002EDC98 /* StoreLocatorRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = StoreLocatorRest.m; sourceTree = "<group>"; };
    F30B912117BDFC8E002EDC98 /* CoreLocation.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = CoreLocation.framework; path = System/Library/Frameworks/CoreLocation.framework; sourceTree = SDKROOT; };
    F333079B17A5096B00E8A9C1 /* AccountObject.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AccountObject.h; sourceTree = "<group>"; };
    F333079C17A5096B00E8A9C1 /* AccountObject.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AccountObject.m; sourceTree = "<group>"; };
    F33307A217A5096B00E8A9C1 /* ResponseStatus.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = ResponseStatus.h; sourceTree = "<group>"; };
    F33307A317A5096B00E8A9C1 /* ResponseStatus.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = ResponseStatus.m; sourceTree = "<group>"; };
    F33307C317A50C9900E8A9C1 /* PCSimpleLineChartView.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = PCSimpleLineChartView.h; sourceTree = "<group>"; };
    F33307C417A50C9900E8A9C1 /* PCSimpleLineChartView.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = PCSimpleLineChartView.m; sourceTree = "<group>"; };
    F34601CE1793EC2C008D4164 /* Constants.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = Constants.h; sourceTree = "<group>"; };
    F34601D01793EC2C008D4164 /* AppSingletonObject.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = AppSingletonObject.m; sourceTree = "<group>"; };
    F34601D11793EC2C008D4164 /* AppSingletonObject.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = AppSingletonObject.h; sourceTree = "<group>"; };
    F34601D21793EC2C008D4164 /* Logging.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = Logging.h; sourceTree = "<group>"; };
    F34601D81793EC71008D4164 /* QuartzCore.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = QuartzCore.framework; path = System/Library/Frameworks/QuartzCore.framework; sourceTree = SDKROOT; };
    F34601DA1793EC76008D4164 /* SystemConfiguration.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = SystemConfiguration.framework; path = System/Library/Frameworks/SystemConfiguration.framework; sourceTree = SDKROOT; };
    F34601DC1793ECA9008D4164 /* MobileCoreServices.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = MobileCoreServices.framework; path = System/Library/Frameworks/MobileCoreServices.framework; sourceTree = SDKROOT; };
    F34601EF1793F469008D4164 /* BaseHTTPClient.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = BaseHTTPClient.h; sourceTree = "<group>"; };
    F34601F31793F469008D4164 /* BaseHTTPClient.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = BaseHTTPClient.m; sourceTree = "<group>"; };
    F346F94D1793E7CE008D4164 /* TurkcellHub.app */ = {isa = PBXFileReference; explicitFileType = wrapper.application; includeInIndex = 0; path = TurkcellHub.app; sourceTree = BUILT_PRODUCTS_DIR; };
    F346F9501793E7CE008D4164 /* UIKit.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = UIKit.framework; path = System/Library/Frameworks/UIKit.framework; sourceTree = SDKROOT; };
    F346F9521793E7CE008D4164 /* Foundation.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = Foundation.framework; path = System/Library/Frameworks/Foundation.framework; sourceTree = SDKROOT; };
    F346F9541793E7CE008D4164 /* CoreGraphics.framework */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = CoreGraphics.framework; path = System/Library/Frameworks/CoreGraphics.framework; sourceTree = SDKROOT; };
    F346F95F1793E7CE008D4164 /* AppDelegate.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = AppDelegate.h; sourceTree = "<group>"; };
    F346F9601793E7CE008D4164 /* AppDelegate.m */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.objc; path = AppDelegate.m; sourceTree = "<group>"; };
    F346F99F1793EB70008D4164 /* UIImage+Tools.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIImage+Tools.h"; sourceTree = "<group>"; };
    F346F9A01793EB70008D4164 /* UIImage+Tools.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIImage+Tools.m"; sourceTree = "<group>"; };
    F346F9A31793EB70008D4164 /* UIView+Effects.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIView+Effects.h"; sourceTree = "<group>"; };
    F346F9A41793EB70008D4164 /* UIView+Effects.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIView+Effects.m"; sourceTree = "<group>"; };
    F346F9A51793EB70008D4164 /* UIView+Layout.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = "UIView+Layout.h"; sourceTree = "<group>"; };
    F346F9A61793EB70008D4164 /* UIView+Layout.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = "UIView+Layout.m"; sourceTree = "<group>"; };
    F361E2B717BE37DE00C56475 /* TopUpRest.h */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; path = TopUpRest.h; sourceTree = "<group>"; };
    F361E2B817BE37DE00C56475 /* TopUpRest.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = TopUpRest.m; sourceTree = "<group>"; };
/* End PBXFileReference section */

/* Begin PBXFrameworksBuildPhase section */
    F346F94A1793E7CE008D4164 /* Frameworks */ = {
      isa = PBXFrameworksBuildPhase;
      buildActionMask = 2147483647;
      files = (
        9F77E6FC1ACAFFE500A5139F /* AdSupport.framework in Frameworks */,
        F34601DD1793ECA9008D4164 /* MobileCoreServices.framework in Frameworks */,
        88A113191ACE862100E79281 /* Accelerate.framework in Frameworks */,
        8DB1001419C19185008CAE6C /* LocalAuthentication.framework in Frameworks */,
        8D3CACD1197921B000FE36C5 /* libsqlite3.dylib in Frameworks */,
        88C432821B67785B00A17E55 /* TurkcellID.framework in Frameworks */,
        EC1A0DC518DB05CA00F4B769 /* AudioToolbox.framework in Frameworks */,
        EC5B601518C894B300485F7A /* Twitter.framework in Frameworks */,
        EC5B601318C894AE00485F7A /* Accounts.framework in Frameworks */,
        8D2A3A731A94A0290073487B /* AdobeMobileLibrary.a in Frameworks */,
        EC67D811188FFDC800911F61 /* CoreFoundation.framework in Frameworks */,
        EC684FCB186C4FB000AF894F /* CFNetwork.framework in Frameworks */,
        6841FB6A184515B60064F061 /* Security.framework in Frameworks */,
        681123B11827C8D700EB716B /* CoreTelephony.framework in Frameworks */,
        6858973A17F56EB1000D763B /* AssetsLibrary.framework in Frameworks */,
        683B70C517F1AA6D004180C9 /* MessageUI.framework in Frameworks */,
        68ADD03617EB7D1100EDA98A /* CoreText.framework in Frameworks */,
        68ADD03A17EB7D2900EDA98A /* ImageIO.framework in Frameworks */,
        8D82341619F91C6A00E81A3C /* TurkcellUpdater.framework in Frameworks */,
        9CF2B2B41B4FF9D30095FBBE /* Netmera.framework in Frameworks */,
        68ADD03817EB7D1C00EDA98A /* GLKit.framework in Frameworks */,
        68ADD03C17EB7D3A00EDA98A /* libc++.dylib in Frameworks */,
        68ADD03E17EB7D5700EDA98A /* libicucore.dylib in Frameworks */,
        68ADD04017EB7D6800EDA98A /* OpenGLES.framework in Frameworks */,
        68544ADC17ECCC9C00B3A69D /* AddressBookUI.framework in Frameworks */,
        68544ADA17ECCC7600B3A69D /* AddressBook.framework in Frameworks */,
        ECA2EC1B17C89EAF005F66F7 /* libz.dylib in Frameworks */,
        EC261EBC187AB8C0001BBBE7 /* GoogleMaps.framework in Frameworks */,
        ECA2EC1617C89E71005F66F7 /* CoreData.framework in Frameworks */,
        ECDCCB4618C728D20029680A /* FacebookSDK.framework in Frameworks */,
        F30B912217BDFC8E002EDC98 /* CoreLocation.framework in Frameworks */,
        8D82342319F91FC000E81A3C /* libGoogleAnalyticsServices.a in Frameworks */,
        8DEE2C2019AB803A00A6F5E9 /* Crashlytics.framework in Frameworks */,
        682C208C17951F93004633EB /* MapKit.framework in Frameworks */,
        F34601DB1793EC76008D4164 /* SystemConfiguration.framework in Frameworks */,
        F34601D91793EC71008D4164 /* QuartzCore.framework in Frameworks */,
        F346F9511793E7CE008D4164 /* UIKit.framework in Frameworks */,
        F346F9531793E7CE008D4164 /* Foundation.framework in Frameworks */,
        8D9AC83D19FA47580028664F /* libcomScore.a in Frameworks */,
        F346F9551793E7CE008D4164 /* CoreGraphics.framework in Frameworks */,
        EBE763982DED43219B5458E3 /* libPods.a in Frameworks */,
      );
      runOnlyForDeploymentPostprocessing = 0;
    };
/* End PBXFrameworksBuildPhase section */

/* Begin PBXGroup section */
    6809803317F0170800984FF5 /* REST */ = {
      isa = PBXGroup;
      children = (
        6809803417F0170800984FF5 /* AFHTTPRequestOperation+Extensions.h */,
        6809803517F0170800984FF5 /* AFHTTPRequestOperation+Extensions.m */,
        6809803617F0170800984FF5 /* NSData+JSONUtilities.h */,
        6809803717F0170800984FF5 /* NSData+JSONUtilities.m */,
      );
      path = REST;
      sourceTree = "<group>";
    };
    682B310A1843759000080490 /* SIAlertView */ = {
      isa = PBXGroup;
      children = (
        682B310B1843759000080490 /* SIAlertView.bundle */,
        682B310C1843759000080490 /* SIAlertView.h */,
        682B310D1843759000080490 /* SIAlertView.m */,
        682B310E1843759000080490 /* UIWindow+SIUtils.h */,
        682B310F1843759000080490 /* UIWindow+SIUtils.m */,
      );
      path = SIAlertView;
      sourceTree = "<group>";
    };
    684C027717D9A9B700F432ED /* Pickers */ = {
      isa = PBXGroup;
      children = (
        8D44746219D224AF007DD48B /* ActionSheetLocalePicker.h */,
        8D44746319D224AF007DD48B /* ActionSheetLocalePicker.m */,
        8D44746419D224AF007DD48B /* SWActionSheet.h */,
        8D44746519D224AF007DD48B /* SWActionSheet.m */,
        ECF6D24C1817BA7000B281CB /* ExpireMonthYearActionSheetPicker.h */,
        ECF6D24D1817BA7000B281CB /* ExpireMonthYearActionSheetPicker.m */,
        684C027817D9A9B700F432ED /* AbstractActionSheetPicker.h */,
        684C027917D9A9B700F432ED /* AbstractActionSheetPicker.m */,
        684C027A17D9A9B700F432ED /* ActionSheetCustomPicker.h */,
        684C027B17D9A9B700F432ED /* ActionSheetCustomPicker.m */,
        684C027C17D9A9B700F432ED /* ActionSheetCustomPickerDelegate.h */,
        684C027D17D9A9B700F432ED /* ActionSheetDatePicker.h */,
        684C027E17D9A9B700F432ED /* ActionSheetDatePicker.m */,
        684C027F17D9A9B700F432ED /* ActionSheetDistancePicker.h */,
        684C028017D9A9B700F432ED /* ActionSheetDistancePicker.m */,
        684C028117D9A9B700F432ED /* ActionSheetStringPicker.h */,
        684C028217D9A9B700F432ED /* ActionSheetStringPicker.m */,
        684C028317D9A9B700F432ED /* DistancePickerView.h */,
        684C028417D9A9B700F432ED /* DistancePickerView.m */,
        684C028517D9A9B700F432ED /* ExpireDateActionSheetPicker.h */,
        684C028617D9A9B700F432ED /* ExpireDateActionSheetPicker.m */,
      );
      path = Pickers;
      sourceTree = "<group>";
    };
    68542B6717F01695004DEFD7 /* Controllers */ = {
      isa = PBXGroup;
      children = (
        9F3102391A88E44100D7C8E2 /* webview */,
        9F3102211A88E41900D7C8E2 /* settings */,
        8D3EE50819C094E200E2F699 /* TouchID */,
        ECA259EF185F45020030ECFD /* Bills */,
        ECA259D8185F40EF0030ECFD /* Home */,
        ECA259DF185F40EF0030ECFD /* Login */,
        ECA259D1185F40C00030ECFD /* MNT */,
        EC479AD1183A3ED4003DAC62 /* Notifications */,
        EC01E444181E410A00626834 /* Usage */,
        68542B6817F01695004DEFD7 /* Allowance */,
        68542B6F17F01695004DEFD7 /* Basic */,
        68542BB617F01695004DEFD7 /* SearchSupport */,
        68542BCB17F01695004DEFD7 /* StoreLocator */,
        68542BD017F01695004DEFD7 /* Topup */,
      );
      path = Controllers;
      sourceTree = "<group>";
    };
    68542B6817F01695004DEFD7 /* Allowance */ = {
      isa = PBXGroup;
      children = (
        9F3102761A88E4AC00D7C8E2 /* AllowancesVC.xib */,
        68542B6917F01695004DEFD7 /* AllowancesVC.h */,
        68542B6A17F01695004DEFD7 /* AllowancesVC.m */,
      );
      path = Allowance;
      sourceTree = "<group>";
    };
    68542B6F17F01695004DEFD7 /* Basic */ = {
      isa = PBXGroup;
      children = (
        ECBE1D2B18CEFD9E002933C8 /* BaseSlidingVC.h */,
        ECBE1D2C18CEFD9E002933C8 /* BaseSlidingVC.m */,
        ECA259CB185F40BA0030ECFD /* BaseVC.h */,
        ECA259CC185F40BA0030ECFD /* BaseVC.m */,
        ECA259CD185F40BA0030ECFD /* MenuVC.h */,
        ECA259CE185F40BA0030ECFD /* MenuVC.m */,
      );
      path = Basic;
      sourceTree = "<group>";
    };
    68542BB617F01695004DEFD7 /* SearchSupport */ = {
      isa = PBXGroup;
      children = (
        9F31027C1A88E4BA00D7C8E2 /* FilterItemCell.h */,
        9F31027D1A88E4BA00D7C8E2 /* FilterItemCell.m */,
        9F31027E1A88E4BA00D7C8E2 /* FilterItemCell.xib */,
        9F3102801A88E4BA00D7C8E2 /* SearchResultCell.h */,
        9F3102811A88E4BA00D7C8E2 /* SearchResultCell.m */,
        9F3102821A88E4BA00D7C8E2 /* SearchResultCell.xib */,
        9F3102831A88E4BA00D7C8E2 /* SearchResultInAppCell.h */,
        9F3102841A88E4BA00D7C8E2 /* SearchResultInAppCell.m */,
        9F3102851A88E4BA00D7C8E2 /* SearchResultInAppCell.xib */,
        9F3102861A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.h */,
        9F3102871A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.m */,
        9F3102881A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.xib */,
        9F3102891A88E4BA00D7C8E2 /* SearchResultOneBoxCell.h */,
        9F31028A1A88E4BA00D7C8E2 /* SearchResultOneBoxCell.m */,
        9F31028B1A88E4BA00D7C8E2 /* SearchResultOneBoxCell.xib */,
        68542BB917F01695004DEFD7 /* SearchSupportPageView.h */,
        68542BBA17F01695004DEFD7 /* SearchSupportPageView.m */,
        9F31028D1A88E4BA00D7C8E2 /* SearchSupportPageView.xib */,
        68542BBB17F01695004DEFD7 /* SearchSupportPageVC.h */,
        68542BBC17F01695004DEFD7 /* SearchSupportPageVC.m */,
        9F31028C1A88E4BA00D7C8E2 /* SearchSupportPageVC.xib */,
        68297D0E1820398B00CC0DEC /* FilterVC.h */,
        68297D0F1820398B00CC0DEC /* FilterVC.m */,
        9F31027F1A88E4BA00D7C8E2 /* FilterVC.xib */,
        68383181183FDC8D00A7F63B /* DeviceDetailVC.h */,
        68383182183FDC8D00A7F63B /* DeviceDetailVC.m */,
        9F31027B1A88E4BA00D7C8E2 /* DeviceDetailVC.xib */,
      );
      path = SearchSupport;
      sourceTree = "<group>";
    };
    68542BCB17F01695004DEFD7 /* StoreLocator */ = {
      isa = PBXGroup;
      children = (
        68542BCC17F01695004DEFD7 /* StoreDetailsVC.h */,
        68542BCD17F01695004DEFD7 /* StoreDetailsVC.m */,
        8D9879591A933862007C6356 /* StoreDetailsVC.xib */,
        8D5456551A93634800C2F7B5 /* StoreWorkHoursCell.h */,
        8D5456561A93634800C2F7B5 /* StoreWorkHoursCell.m */,
        8D5456571A93634800C2F7B5 /* StoreWorkHoursCell.xib */,
        68542BCE17F01695004DEFD7 /* StoreLocatorVC.h */,
        68542BCF17F01695004DEFD7 /* StoreLocatorVC.m */,
        8D62E6FE1A92B985009B71F9 /* StoreLocatorVC.xib */,
        683210C318213BFE00D5A10A /* StoreLocatorFilterVC.h */,
        683210C418213BFE00D5A10A /* StoreLocatorFilterVC.m */,
        8D54565A1A93D9D400C2F7B5 /* StoreLocatorFilterVC.xib */,
      );
      path = StoreLocator;
      sourceTree = "<group>";
    };
    68542BD017F01695004DEFD7 /* Topup */ = {
      isa = PBXGroup;
      children = (
        9F31029C1A88E4C700D7C8E2 /* LoadTLView.h */,
        9F31029D1A88E4C700D7C8E2 /* LoadTLView.m */,
        9F31029E1A88E4C700D7C8E2 /* LoadTLView.xib */,
        9F31029F1A88E4C700D7C8E2 /* PayWithCreditCardView.h */,
        9F3102A01A88E4C700D7C8E2 /* PayWithCreditCardView.m */,
        9F3102A11A88E4C700D7C8E2 /* PayWithCreditCardView.xib */,
        9F3102A21A88E4C700D7C8E2 /* PayWithTLCreditView.h */,
        9F3102A31A88E4C700D7C8E2 /* PayWithTLCreditView.m */,
        9F3102A41A88E4C700D7C8E2 /* PayWithTLCreditView.xib */,
        68542BD117F01695004DEFD7 /* PaymentSuccessVC.h */,
        68542BD217F01695004DEFD7 /* PaymentSuccessVC.m */,
        68542BD317F01695004DEFD7 /* PaymentSuccessVC.xib */,
        68542BD417F01695004DEFD7 /* TopUpPaymentVC.h */,
        68542BD517F01695004DEFD7 /* TopUpPaymentVC.m */,
        68542BD617F01695004DEFD7 /* TopUpPaymentVC.xib */,
        68542BD717F01695004DEFD7 /* TopUpVC.h */,
        68542BD817F01695004DEFD7 /* TopUpVC.m */,
        68542BD917F01695004DEFD7 /* TopUpVC.xib */,
      );
      path = Topup;
      sourceTree = "<group>";
    };
    68542C1517F016AA004DEFD7 /* Views */ = {
      isa = PBXGroup;
      children = (
        9F3108EB1A88E81F00D7C8E2 /* Common */,
        9F31019C1A88E26900D7C8E2 /* Chart */,
        9F3101911A88E23D00D7C8E2 /* XYPieChart.h */,
        9F3101921A88E23D00D7C8E2 /* XYPieChart.m */,
        EC709C9318D71EEF00B47D93 /* ProductAndServices */,
        ECB82148189793FD0014532C /* FirstTimeAppTour */,
        ECA25A8618607B390030ECFD /* Credit */,
        ECA25A7A1860489C0030ECFD /* ScrollThingyView */,
        ECA25A761860487C0030ECFD /* PageControl */,
        ECA25A6F186047930030ECFD /* Loading */,
        ECA25A641860474C0030ECFD /* Menu */,
        ECF6D24F181A5F5100B281CB /* Custom */,
        68542C1617F016AA004DEFD7 /* AccountView */,
        68542C1B17F016AA004DEFD7 /* Allowance */,
        68542C2717F016AA004DEFD7 /* Basic */,
        68542C2E17F016AA004DEFD7 /* Bills */,
        68542C3817F016AA004DEFD7 /* Campaign */,
        68542C3B17F016AA004DEFD7 /* Charts */,
        68542C4917F016AA004DEFD7 /* Login */,
        68542C5417F016AA004DEFD7 /* NotificationView */,
        68542C5C17F016AA004DEFD7 /* Overlay */,
        68542C6617F016AA004DEFD7 /* Search */,
        68542C6917F016AA004DEFD7 /* SettingView */,
        A51278AB191D188D002CFE51 /* PopulerServices */,
        68542C6E17F016AA004DEFD7 /* StoreLocator */,
        68542C9217F016AA004DEFD7 /* Topup */,
      );
      path = Views;
      sourceTree = "<group>";
    };
    68542C1617F016AA004DEFD7 /* AccountView */ = {
      isa = PBXGroup;
      children = (
        9F3101C41A88E2C200D7C8E2 /* AccountInfoView.h */,
        9F3101C51A88E2C200D7C8E2 /* AccountInfoView.m */,
        9F3101C61A88E2C200D7C8E2 /* AccountInfoView.xib */,
        9F3101C71A88E2C200D7C8E2 /* AccountView.xib */,
        68542C1717F016AA004DEFD7 /* AccountView.h */,
        68542C1817F016AA004DEFD7 /* AccountView.m */,
      );
      path = AccountView;
      sourceTree = "<group>";
    };
    68542C1B17F016AA004DEFD7 /* Allowance */ = {
      isa = PBXGroup;
      children = (
        68542C1C17F016AA004DEFD7 /* Element */,
        68542C1F17F016AA004DEFD7 /* AllowancesScrollView.h */,
        68542C2017F016AA004DEFD7 /* AllowancesScrollView.m */,
        ECA259EC185F417E0030ECFD /* AllowanceButton.h */,
        ECA259ED185F417E0030ECFD /* AllowanceButton.m */,
        EC78248A189FC3F400DACEFD /* AllowanceConstants.h */,
      );
      path = Allowance;
      sourceTree = "<group>";
    };
    68542C1C17F016AA004DEFD7 /* Element */ = {
      isa = PBXGroup;
      children = (
        68542C1D17F016AA004DEFD7 /* AllowanceChartElementView.h */,
        68542C1E17F016AA004DEFD7 /* AllowanceChartElementView.m */,
        ECA25A5E186044910030ECFD /* AllowanceChartCenterView.h */,
        ECA25A5F186044910030ECFD /* AllowanceChartCenterView.m */,
        ECA25A60186044910030ECFD /* AllowanceChartInsideView.h */,
        ECA25A61186044910030ECFD /* AllowanceChartInsideView.m */,
      );
      path = Element;
      sourceTree = "<group>";
    };
    68542C2717F016AA004DEFD7 /* Basic */ = {
      isa = PBXGroup;
      children = (
        EC8DC59A18B5F73C00E2768C /* TabButton.h */,
        EC8DC59B18B5F73C00E2768C /* TabButton.m */,
        68542C2A17F016AA004DEFD7 /* TopUpTextField.h */,
        68542C2B17F016AA004DEFD7 /* TopUpTextField.m */,
        EC821F971871A65A006EB1D0 /* CommonButton.h */,
        EC821F981871A65A006EB1D0 /* CommonButton.m */,
      );
      path = Basic;
      sourceTree = "<group>";
    };
    68542C2E17F016AA004DEFD7 /* Bills */ = {
      isa = PBXGroup;
      children = (
        ECA25A6B1860477D0030ECFD /* Page */,
        68542C3217F016AA004DEFD7 /* OneBillChartView.h */,
        68542C3317F016AA004DEFD7 /* OneBillChartView.m */,
        68542C3417F016AA004DEFD7 /* BillsScrollView.h */,
        68542C3517F016AA004DEFD7 /* BillsScrollView.m */,
      );
      path = Bills;
      sourceTree = "<group>";
    };
    68542C3817F016AA004DEFD7 /* Campaign */ = {
      isa = PBXGroup;
      children = (
        9F3101CB1A88E2E900D7C8E2 /* CampaignModelView.h */,
        9F3101CC1A88E2E900D7C8E2 /* CampaignModelView.m */,
        9F3101CD1A88E2E900D7C8E2 /* CampaignView.h */,
        9F3101CE1A88E2E900D7C8E2 /* CampaignView.m */,
        9F3101CF1A88E2E900D7C8E2 /* CampaignView.xib */,
        9F3101D01A88E2E900D7C8E2 /* MNTView.xib */,
        68860F6B17FC33B400985C71 /* LocationBasedOfferView.h */,
        68860F6C17FC33B400985C71 /* LocationBasedOfferView.m */,
        68FB2EBB17F3072500EE1457 /* CampaignsView.h */,
        68FB2EBC17F3072500EE1457 /* CampaignsView.m */,
        68FB2EBE17F309AF00EE1457 /* OneCampaignView.h */,
        68FB2EBF17F309AF00EE1457 /* OneCampaignView.m */,
        685F84051830CC7900034364 /* MNTView.h */,
        685F84061830CC7900034364 /* MNTView.m */,
      );
      path = Campaign;
      sourceTree = "<group>";
    };
    68542C3B17F016AA004DEFD7 /* Charts */ = {
      isa = PBXGroup;
      children = (
        68542C3C17F016AA004DEFD7 /* SimplePieChartView.h */,
        68542C3D17F016AA004DEFD7 /* SimplePieChartView.m */,
      );
      path = Charts;
      sourceTree = "<group>";
    };
    68542C4917F016AA004DEFD7 /* Login */ = {
      isa = PBXGroup;
      children = (
        9F3101D51A88E2F800D7C8E2 /* HomeLoginView.xib */,
        68542C5017F016AA004DEFD7 /* RSLabel.h */,
        68542C5117F016AA004DEFD7 /* RSLabel.m */,
        68542C5217F016AA004DEFD7 /* RSTextField.h */,
        68542C5317F016AA004DEFD7 /* RSTextField.m */,
        EC684F7A186AC6E000AF894F /* HomeLoginView.h */,
        EC684F7B186AC6E000AF894F /* HomeLoginView.m */,
      );
      path = Login;
      sourceTree = "<group>";
    };
    68542C5417F016AA004DEFD7 /* NotificationView */ = {
      isa = PBXGroup;
      children = (
        8D89BE7E1A9764E30060B71A /* NotificationsView.h */,
        8D89BE7F1A9764E30060B71A /* NotificationsView.m */,
        8D89BE811A9764EE0060B71A /* NotificationsView.xib */,
        8D89BE831A97688B0060B71A /* NotificationInfoView.h */,
        8D89BE841A97688B0060B71A /* NotificationInfoView.m */,
        8D89BE861A97689D0060B71A /* NotificationInfoView.xib */,
      );
      path = NotificationView;
      sourceTree = "<group>";
    };
    68542C5C17F016AA004DEFD7 /* Overlay */ = {
      isa = PBXGroup;
      children = (
        68542C5D17F016AA004DEFD7 /* ChartOverlay.h */,
        68542C5E17F016AA004DEFD7 /* ChartOverlay.m */,
      );
      path = Overlay;
      sourceTree = "<group>";
    };
    68542C6617F016AA004DEFD7 /* Search */ = {
      isa = PBXGroup;
      children = (
        9F3101DE1A88E31400D7C8E2 /* FilterDirectView.h */,
        9F3101DF1A88E31400D7C8E2 /* FilterDirectView.m */,
        9F3101E01A88E31400D7C8E2 /* FilterDirectView.xib */,
        9F3101E11A88E31400D7C8E2 /* FilterFooterView.h */,
        9F3101E21A88E31400D7C8E2 /* FilterFooterView.m */,
        9F3101E31A88E31400D7C8E2 /* FilterFooterView.xib */,
        9F3101E41A88E31400D7C8E2 /* FilterSectionHeaderView.h */,
        9F3101E51A88E31400D7C8E2 /* FilterSectionHeaderView.m */,
        9F3101E61A88E31400D7C8E2 /* FilterSectionHeaderView.xib */,
        68542C6717F016AA004DEFD7 /* HomeSearchView.h */,
        68542C6817F016AA004DEFD7 /* HomeSearchView.m */,
        9F3101E71A88E31400D7C8E2 /* HomeSearchView.xib */,
        689D8880181FDA0700481CDA /* FilterButton.h */,
        689D8881181FDA0700481CDA /* FilterButton.m */,
        9F3101DD1A88E31400D7C8E2 /* FilterButton.xib */,
      );
      path = Search;
      sourceTree = "<group>";
    };
    68542C6917F016AA004DEFD7 /* SettingView */ = {
      isa = PBXGroup;
      children = (
        9F3101F31A88E32A00D7C8E2 /* ProfilePhotoActionView.h */,
        9F3101F41A88E32A00D7C8E2 /* ProfilePhotoActionView.m */,
        9F3101F51A88E32A00D7C8E2 /* ProfilePhotoActionView.xib */,
        9F3101F61A88E32A00D7C8E2 /* SettingsPageHeaderView.h */,
        9F3101F71A88E32A00D7C8E2 /* SettingsPageHeaderView.m */,
        9F3101F81A88E32A00D7C8E2 /* SettingsPageHeaderView.xib */,
        9F3101F91A88E32A00D7C8E2 /* SettingsPageMenuViewCell.xib */,
        9F3101FA1A88E32A00D7C8E2 /* SettingsPageView.xib */,
        68542C6A17F016AA004DEFD7 /* SettingsPageView.h */,
        68542C6B17F016AA004DEFD7 /* SettingsPageView.m */,
        6824CCE41849D95500A24B84 /* TopBarNotificationView.h */,
        6824CCE51849D95500A24B84 /* TopBarNotificationView.m */,
        A51278A1191D1818002CFE51 /* SettingsPageMenuViewCell.h */,
        A51278A2191D1818002CFE51 /* SettingsPageMenuViewCell.m */,
      );
      path = SettingView;
      sourceTree = "<group>";
    };
    68542C6E17F016AA004DEFD7 /* StoreLocator */ = {
      isa = PBXGroup;
      children = (
        68542C6F17F016AA004DEFD7 /* CustomInfoView.h */,
        68542C7017F016AA004DEFD7 /* CustomInfoView.m */,
        68542C7117F016AA004DEFD7 /* EllipseView.h */,
        68542C7217F016AA004DEFD7 /* EllipseView.m */,
        68542C7317F016AA004DEFD7 /* GoogleMapView.h */,
        68542C7417F016AA004DEFD7 /* GoogleMapView.m */,
        68542C7517F016AA004DEFD7 /* GoogleMarker.h */,
        68542C7617F016AA004DEFD7 /* GoogleMarker.m */,
        68542C7717F016AA004DEFD7 /* MapSettings.h */,
        68542C7817F016AA004DEFD7 /* MyMapView.h */,
        68542C7917F016AA004DEFD7 /* MyMapView.m */,
        68542C7A17F016AA004DEFD7 /* RGImageScrollCellView.h */,
        68542C7B17F016AA004DEFD7 /* RGImageScrollCellView.m */,
        68542C7C17F016AA004DEFD7 /* RGStoreAnnotation.h */,
        68542C7D17F016AA004DEFD7 /* RGStoreAnnotation.m */,
        68542C7E17F016AA004DEFD7 /* RGStoreAnnotationView.h */,
        68542C7F17F016AA004DEFD7 /* RGStoreAnnotationView.m */,
        68542C8017F016AA004DEFD7 /* StoreLocatorPageView.h */,
        68542C8117F016AA004DEFD7 /* StoreLocatorPageView.m */,
        8D62E7001A92BA87009B71F9 /* StoreLocatorPageView.xib */,
        68542C8217F016AA004DEFD7 /* RGUserAnnotation.h */,
        68542C8317F016AA004DEFD7 /* RGUserAnnotation.m */,
        68542C8617F016AA004DEFD7 /* TimCalloutView.h */,
        68542C8717F016AA004DEFD7 /* TimCalloutView.m */,
        68542C8817F016AA004DEFD7 /* TimView.h */,
        68542C8917F016AA004DEFD7 /* TimView.m */,
        8D54565C1A940FA600C2F7B5 /* TimView.xib */,
        6837BC6417F40A730035ED51 /* NextPrevView.h */,
        6837BC6517F40A730035ED51 /* NextPrevView.m */,
        8DB500961A955FF700DE9728 /* NextPrevView.xib */,
        683210C61821438B00D5A10A /* RSSearchView.h */,
        683210C71821438B00D5A10A /* RSSearchView.m */,
        9F3102081A88E34600D7C8E2 /* RSSearchView.xib */,
      );
      path = StoreLocator;
      sourceTree = "<group>";
    };
    68542C9217F016AA004DEFD7 /* Topup */ = {
      isa = PBXGroup;
      children = (
        6829F3DA17F15F82002F3C48 /* GBAlertView.h */,
        6829F3DB17F15F82002F3C48 /* GBAlertView.m */,
        6829F3DC17F15F82002F3C48 /* GBCheckBox.h */,
        6829F3DD17F15F82002F3C48 /* GBCheckBox.m */,
      );
      path = Topup;
      sourceTree = "<group>";
    };
    6870978C17F018D7004836A6 /* ECSlidingViewController */ = {
      isa = PBXGroup;
      children = (
        6870978D17F018D7004836A6 /* ECSlidingViewController.h */,
        6870978E17F018D7004836A6 /* ECSlidingViewController.m */,
        6870979117F018D7004836A6 /* UIImage+ImageWithUIView.h */,
        6870979217F018D7004836A6 /* UIImage+ImageWithUIView.m */,
      );
      path = ECSlidingViewController;
      sourceTree = "<group>";
    };
    6878B58517FABDF70008A26A /* RATreeView */ = {
      isa = PBXGroup;
      children = (
        6878B58617FABDF70008A26A /* RATreeNode.h */,
        6878B58717FABDF70008A26A /* RATreeNode.m */,
        6878B58817FABDF70008A26A /* RATreeNodeCollectionController.h */,
        6878B58917FABDF70008A26A /* RATreeNodeCollectionController.m */,
        6878B58A17FABDF70008A26A /* RATreeNodeInfo+Private.h */,
        6878B58B17FABDF70008A26A /* RATreeNodeInfo+Private.m */,
        6878B58C17FABDF70008A26A /* RATreeNodeInfo.h */,
        6878B58D17FABDF70008A26A /* RATreeNodeInfo.m */,
        6878B58E17FABDF70008A26A /* RATreeView+Enums.h */,
        6878B58F17FABDF70008A26A /* RATreeView+Enums.m */,
        6878B59017FABDF70008A26A /* RATreeView+Private.h */,
        6878B59117FABDF70008A26A /* RATreeView+Private.m */,
        6878B59217FABDF70008A26A /* RATreeView+TableViewDataSource.h */,
        6878B59317FABDF70008A26A /* RATreeView+TableViewDataSource.m */,
        6878B59417FABDF70008A26A /* RATreeView+TableViewDelegate.h */,
        6878B59517FABDF70008A26A /* RATreeView+TableViewDelegate.m */,
        6878B59617FABDF70008A26A /* RATreeView+UIScrollView.h */,
        6878B59717FABDF70008A26A /* RATreeView+UIScrollView.m */,
        6878B59817FABDF70008A26A /* RATreeView.h */,
        6878B59917FABDF70008A26A /* RATreeView.m */,
      );
      path = RATreeView;
      sourceTree = "<group>";
    };
    689ECE7F17E2D4E90028BA0D /* iCarousel */ = {
      isa = PBXGroup;
      children = (
        689ECE8017E2D4E90028BA0D /* iCarousel.h */,
        689ECE8117E2D4E90028BA0D /* iCarousel.m */,
      );
      path = iCarousel;
      sourceTree = "<group>";
    };
    88A112E71ACC76D200E79281 /* AFNetworking */ = {
      isa = PBXGroup;
      children = (
        88A112E81ACC76E000E79281 /* AFHTTPClient.h */,
        88A112E91ACC76E000E79281 /* AFHTTPClient.m */,
        88A112EA1ACC76E000E79281 /* AFHTTPRequestOperation.h */,
        88A112EB1ACC76E000E79281 /* AFHTTPRequestOperation.m */,
        88A112EC1ACC76E000E79281 /* AFHTTPRequestOperationLogger.h */,
        88A112ED1ACC76E000E79281 /* AFHTTPRequestOperationLogger.m */,
        88A112EE1ACC76E000E79281 /* AFImageRequestOperation.h */,
        88A112EF1ACC76E000E79281 /* AFImageRequestOperation.m */,
        88A112F01ACC76E000E79281 /* AFJSONRequestOperation.h */,
        88A112F11ACC76E000E79281 /* AFJSONRequestOperation.m */,
        88A112F21ACC76E000E79281 /* AFNetworkActivityIndicatorManager.h */,
        88A112F31ACC76E000E79281 /* AFNetworkActivityIndicatorManager.m */,
        88A112F41ACC76E000E79281 /* AFNetworking.h */,
        88A112F51ACC76E000E79281 /* AFPropertyListRequestOperation.h */,
        88A112F61ACC76E000E79281 /* AFPropertyListRequestOperation.m */,
        88A112F71ACC76E000E79281 /* AFURLCache.h */,
        88A112F81ACC76E000E79281 /* AFURLCache.m */,
        88A112F91ACC76E000E79281 /* AFURLConnectionOperation.h */,
        88A112FA1ACC76E000E79281 /* AFURLConnectionOperation.m */,
        88A112FB1ACC76E000E79281 /* AFXMLRequestOperation.h */,
        88A112FC1ACC76E000E79281 /* AFXMLRequestOperation.m */,
        88A112FD1ACC76E000E79281 /* UIImageView+AFNetworking.h */,
        88A112FE1ACC76E000E79281 /* UIImageView+AFNetworking.m */,
      );
      name = AFNetworking;
      sourceTree = "<group>";
    };
    88F476041B61453900207F7F /* Entitlements */ = {
      isa = PBXGroup;
      children = (
        88F476051B61456000207F7F /* Entitlement-AppStore.plist */,
        88F476061B61456000207F7F /* Entitlement-Enterprise.plist */,
        88BC06131B00EE5600276997 /* Entitlement.plist */,
      );
      name = Entitlements;
      sourceTree = "<group>";
    };
    8B130AB8884318E1D1D3E9E2 /* Pods */ = {
      isa = PBXGroup;
      children = (
        193D0C6257F69AC5FA196110 /* Pods.debug.xcconfig */,
        20D978DAB32014DE50218A14 /* Pods.release.xcconfig */,
        C7A0F729D97DDBE26C753F0F /* Pods.appstore.xcconfig */,
        6D31CA061715B922730EAB8A /* Pods.enterprise.xcconfig */,
      );
      name = Pods;
      sourceTree = "<group>";
    };
    8D3CACCA197920BD00FE36C5 /* Omniture */ = {
      isa = PBXGroup;
      children = (
        8D2A3A711A94A0290073487B /* ADBMobile.h */,
        8D2A3A721A94A0290073487B /* AdobeMobileLibrary.a */,
      );
      name = Omniture;
      sourceTree = "<group>";
    };
    8D3EE50819C094E200E2F699 /* TouchID */ = {
      isa = PBXGroup;
      children = (
      );
      name = TouchID;
      sourceTree = "<group>";
    };
    8D82341719F91F4200E81A3C /* GoogleAnalytics_3.09 */ = {
      isa = PBXGroup;
      children = (
        8D82341819F91FC000E81A3C /* GAI.h */,
        8D82341919F91FC000E81A3C /* GAIDictionaryBuilder.h */,
        8D82341A19F91FC000E81A3C /* GAIEcommerceFields.h */,
        8D82341B19F91FC000E81A3C /* GAIEcommerceProduct.h */,
        8D82341C19F91FC000E81A3C /* GAIEcommerceProductAction.h */,
        8D82341D19F91FC000E81A3C /* GAIEcommercePromotion.h */,
        8D82341E19F91FC000E81A3C /* GAIFields.h */,
        8D82341F19F91FC000E81A3C /* GAILogger.h */,
        8D82342019F91FC000E81A3C /* GAITrackedViewController.h */,
        8D82342119F91FC000E81A3C /* GAITracker.h */,
        8D82342219F91FC000E81A3C /* libGoogleAnalyticsServices.a */,
      );
      name = GoogleAnalytics_3.09;
      sourceTree = "<group>";
    };
    8D9AC82D19FA47580028664F /* headers */ = {
      isa = PBXGroup;
      children = (
        8D9AC82E19FA47580028664F /* CSApplicationState.h */,
        8D9AC82F19FA47580028664F /* CSCacheFlusher.h */,
        8D9AC83019FA47580028664F /* CSCensus.h */,
        8D9AC83119FA47580028664F /* CSComScore.h */,
        8D9AC83219FA47580028664F /* CSCore.h */,
        8D9AC83319FA47580028664F /* CSEventType.h */,
        8D9AC83419FA47580028664F /* CSKeepAlive.h */,
        8D9AC83519FA47580028664F /* CSMeasurementDispatcher.h */,
        8D9AC83619FA47580028664F /* CSNotificationsObserver.h */,
        8D9AC83719FA47580028664F /* CSOfflineCache.h */,
        8D9AC83819FA47580028664F /* CSSessionState.h */,
        8D9AC83919FA47580028664F /* CSStorage.h */,
        8D9AC83A19FA47580028664F /* CSTaskExecutor.h */,
        8D9AC83B19FA47580028664F /* CSTransmissionMode.h */,
      );
      path = headers;
      sourceTree = "<group>";
    };
    8DEE2C1E19AB7FFF00A6F5E9 /* Crashlytics */ = {
      isa = PBXGroup;
      children = (
        8DEE2C1F19AB803A00A6F5E9 /* Crashlytics.framework */,
      );
      name = Crashlytics;
      sourceTree = "<group>";
    };
    9CF2B2A11B4FF9D20095FBBE /* NetmeraSDK */ = {
      isa = PBXGroup;
      children = (
        9CF2B2A21B4FF9D20095FBBE /* Netmera.framework */,
        9CF2B2A31B4FF9D20095FBBE /* Resources */,
      );
      path = NetmeraSDK;
      sourceTree = "<group>";
    };
    9CF2B2A31B4FF9D20095FBBE /* Resources */ = {
      isa = PBXGroup;
      children = (
        9CF2B2A41B4FF9D20095FBBE /* NetmeraConfigurations.xcconfig */,
        9CF2B2A51B4FF9D20095FBBE /* NetmeraLocalization.strings */,
        9CF2B2A61B4FF9D20095FBBE /* NetmeraSettings.plist */,
        9CF2B2A71B4FF9D20095FBBE /* NMPushInboxCell.h */,
        9CF2B2A81B4FF9D20095FBBE /* NMPushInboxCell.m */,
        9CF2B2A91B4FF9D20095FBBE /* NMPushInboxCell.xib */,
        9CF2B2AA1B4FF9D20095FBBE /* NMPushInboxViewController.h */,
        9CF2B2AB1B4FF9D20095FBBE /* NMPushInboxViewController.m */,
        9CF2B2AC1B4FF9D20095FBBE /* NMPushInboxViewController.xib */,
        9CF2B2AD1B4FF9D20095FBBE /* NMRichPushViewController.h */,
        9CF2B2AE1B4FF9D20095FBBE /* NMRichPushViewController.m */,
        9CF2B2AF1B4FF9D20095FBBE /* popupClose.png */,
        9CF2B2B01B4FF9D20095FBBE /* popupClose@2x.png */,
        9CF2B2B11B4FF9D20095FBBE /* pushInboxEmptyImage.png */,
        9CF2B2B21B4FF9D20095FBBE /* pushInboxEmptyImage@2x.png */,
        9CF2B2B31B4FF9D20095FBBE /* Silence.wav */,
      );
      path = Resources;
      sourceTree = "<group>";
    };
    9F2C30921AA49F8000C293EC /* CurioSDK */ = {
      isa = PBXGroup;
      children = (
        9F2C30931AA49F8000C293EC /* CurioAction.h */,
        9F2C30941AA49F8000C293EC /* CurioAction.m */,
        9F2C30951AA49F8000C293EC /* CurioActionToolkit.h */,
        9F2C30961AA49F8000C293EC /* CurioActionToolkit.m */,
        9F2C30971AA49F8000C293EC /* CurioConstants.h */,
        9F2C30981AA49F8000C293EC /* CurioConstants.m */,
        9F2C30991AA49F8000C293EC /* CurioDB.h */,
        9F2C309A1AA49F8000C293EC /* CurioDB.m */,
        9F2C309B1AA49F8000C293EC /* CurioDBToolkit.h */,
        9F2C309C1AA49F8000C293EC /* CurioDBToolkit.m */,
        9F2C309D1AA49F8000C293EC /* CurioLocationData.h */,
        9F2C309E1AA49F8000C293EC /* CurioLocationData.m */,
        9F2C309F1AA49F8000C293EC /* CurioLocationManager.h */,
        9F2C30A01AA49F8000C293EC /* CurioLocationManager.m */,
        9F2C30A11AA49F8000C293EC /* CurioNetwork.h */,
        9F2C30A21AA49F8000C293EC /* CurioNetwork.m */,
        9F2C30A31AA49F8000C293EC /* CurioNotificationManager.h */,
        9F2C30A41AA49F8000C293EC /* CurioNotificationManager.m */,
        9F2C30A51AA49F8000C293EC /* CurioPostOffice.h */,
        9F2C30A61AA49F8000C293EC /* CurioPostOffice.m */,
        9F2C30A71AA49F8000C293EC /* CurioPushData.h */,
        9F2C30A81AA49F8000C293EC /* CurioPushData.m */,
        9F2C30A91AA49F8000C293EC /* CurioReachabilityEx.h */,
        9F2C30AA1AA49F8000C293EC /* CurioReachabilityEx.m */,
        9F2C30AB1AA49F8000C293EC /* CurioSDK-Prefix.pch */,
        9F2C30AC1AA49F8000C293EC /* CurioSDK.h */,
        9F2C30AD1AA49F8000C293EC /* CurioSDK.m */,
        9F2C30AE1AA49F8000C293EC /* CurioSettings.h */,
        9F2C30AF1AA49F8000C293EC /* CurioSettings.m */,
        9F2C30B01AA49F8000C293EC /* CurioUtil.h */,
        9F2C30B11AA49F8000C293EC /* CurioUtil.m */,
      );
      path = CurioSDK;
      sourceTree = "<group>";
    };
    9F31019C1A88E26900D7C8E2 /* Chart */ = {
      isa = PBXGroup;
      children = (
        9F31019D1A88E26900D7C8E2 /* AllowanceFooterView.h */,
        9F31019E1A88E26900D7C8E2 /* AllowanceFooterView.m */,
        9F31019F1A88E26900D7C8E2 /* AllowanceFooterView.xib */,
        9F3101A01A88E26900D7C8E2 /* AllowanceModelView.h */,
        9F3101A11A88E26900D7C8E2 /* AllowanceModelView.m */,
        9F3101A21A88E26900D7C8E2 /* AllowancePurchaseView.h */,
        9F3101A31A88E26900D7C8E2 /* AllowancePurchaseView.m */,
        9F3101A41A88E26900D7C8E2 /* AllowancePurchaseView.xib */,
        9F3101A51A88E26900D7C8E2 /* BaseChartView.h */,
        9F3101A61A88E26900D7C8E2 /* BaseChartView.m */,
        9F3101A71A88E26900D7C8E2 /* BaseChartView.xib */,
        9F3101A81A88E26900D7C8E2 /* BillFooterView.h */,
        9F3101A91A88E26900D7C8E2 /* BillFooterView.m */,
        9F3101AA1A88E26900D7C8E2 /* BillFooterView.xib */,
        9F3101AB1A88E26900D7C8E2 /* BillViewModel.h */,
        9F3101AC1A88E26900D7C8E2 /* BillViewModel.m */,
        9F3101AD1A88E26900D7C8E2 /* ChartView+DataHandler.h */,
        9F3101AE1A88E26900D7C8E2 /* ChartView+DataHandler.m */,
        9F3101AF1A88E26900D7C8E2 /* UILabel+NumberAnimation.h */,
        9F3101B01A88E26900D7C8E2 /* UILabel+NumberAnimation.m */,
      );
      path = Chart;
      sourceTree = "<group>";
    };
    9F3102211A88E41900D7C8E2 /* settings */ = {
      isa = PBXGroup;
      children = (
        9F3108F41A88F69500D7C8E2 /* MySettingsVC.h */,
        9F3108F51A88F69500D7C8E2 /* MySettingsVC.m */,
        8D88240C1A95F8040034D754 /* MySettingPUKTableViewCell.h */,
        8D88240D1A95F8040034D754 /* MySettingPUKTableViewCell.m */,
        8D88240E1A95F8040034D754 /* MySettingPUKTableViewCell.xib */,
        9F3108F61A88F69500D7C8E2 /* SettingsVC.h */,
        9F3108F71A88F69500D7C8E2 /* SettingsVC.m */,
        9F3102221A88E41900D7C8E2 /* MySettingSelectionTableViewCell.h */,
        9F3102231A88E41900D7C8E2 /* MySettingSelectionTableViewCell.m */,
        9F3102241A88E41900D7C8E2 /* MySettingSelectionTableViewCell.xib */,
        9F3102251A88E41900D7C8E2 /* MySettingsVC.xib */,
        9F3102261A88E41900D7C8E2 /* MySettingTableViewCell.h */,
        9F3102271A88E41900D7C8E2 /* MySettingTableViewCell.m */,
        9F3102281A88E41900D7C8E2 /* MySettingTableViewCell.xib */,
        9F3102291A88E41900D7C8E2 /* SettingMainViewModel.h */,
        9F31022A1A88E41900D7C8E2 /* SettingMainViewModel.m */,
        9F31022B1A88E41900D7C8E2 /* SettingSubViewModel.h */,
        9F31022C1A88E41900D7C8E2 /* SettingSubViewModel.m */,
        9F31022D1A88E41900D7C8E2 /* SettingsVC.xib */,
        9F31022E1A88E41900D7C8E2 /* SettingViewModel.h */,
        9F31022F1A88E41900D7C8E2 /* SettingViewModel.m */,
      );
      path = settings;
      sourceTree = "<group>";
    };
    9F3102391A88E44100D7C8E2 /* webview */ = {
      isa = PBXGroup;
      children = (
        9F31023A1A88E44100D7C8E2 /* WebVC.h */,
        9F31023B1A88E44100D7C8E2 /* WebVC.m */,
        9F31023C1A88E44100D7C8E2 /* WebVC.xib */,
      );
      path = webview;
      sourceTree = "<group>";
    };
    9F3102C11A88E5F600D7C8E2 /* Resources */ = {
      isa = PBXGroup;
      children = (
        88C432811B67785B00A17E55 /* TurkcellID.framework */,
        88C4327F1B67775B00A17E55 /* TurkcellIDBundle.bundle */,
        88F476041B61453900207F7F /* Entitlements */,
        9F3102C21A88E5F600D7C8E2 /* Assets */,
        9F3102EF1A88E5F600D7C8E2 /* Fonts */,
        9F3102F81A88E5F600D7C8E2 /* Icons */,
        9F3103001A88E5F600D7C8E2 /* Images */,
        9F3105E21A88E5F700D7C8E2 /* LaunchImages */,
        9F3105E61A88E5F700D7C8E2 /* Maltepe_Location.gpx */,
        9F3105E71A88E5F700D7C8E2 /* MenuSearch.plist */,
        9F3105E81A88E5F700D7C8E2 /* NotificationSettings.plist */,
        9F3105E91A88E5F700D7C8E2 /* OneBox.plist */,
      );
      path = Resources;
      sourceTree = "<group>";
    };
    9F3102C21A88E5F600D7C8E2 /* Assets */ = {
      isa = PBXGroup;
      children = (
        9F3102C31A88E5F600D7C8E2 /* Images */,
      );
      path = Assets;
      sourceTree = "<group>";
    };
    9F3102C31A88E5F600D7C8E2 /* Images */ = {
      isa = PBXGroup;
      children = (
        9F3102C41A88E5F600D7C8E2 /* TopUp */,
        9F3102D31A88E5F600D7C8E2 /* TopUpV2 */,
        9F3102E11A88E5F600D7C8E2 /* Unsorted */,
      );
      path = Images;
      sourceTree = "<group>";
    };
    9F3102C41A88E5F600D7C8E2 /* TopUp */ = {
      isa = PBXGroup;
      children = (
        9F3102C51A88E5F600D7C8E2 /* RG_TU_backarrow.png */,
        9F3102C61A88E5F600D7C8E2 /* RG_TU_backarrow@2x.png */,
        9F3102C71A88E5F600D7C8E2 /* RG_TU_backbtnarrow.png */,
        9F3102C81A88E5F600D7C8E2 /* RG_TU_backbtnarrow@2x.png */,
        9F3102C91A88E5F600D7C8E2 /* RG_TU_dropdownarrow.png */,
        9F3102CA1A88E5F600D7C8E2 /* RG_TU_dropdownarrow@2x.png */,
        9F3102CB1A88E5F600D7C8E2 /* RG_TU_mastercard.png */,
        9F3102CC1A88E5F600D7C8E2 /* RG_TU_mastercard@2x.png */,
        9F3102CD1A88E5F600D7C8E2 /* RG_TU_phoneicone.png */,
        9F3102CE1A88E5F600D7C8E2 /* RG_TU_phoneicone@2x.png */,
        9F3102CF1A88E5F600D7C8E2 /* RG_TU_securitydigits.png */,
        9F3102D01A88E5F600D7C8E2 /* RG_TU_securitydigits@2x.png */,
        9F3102D11A88E5F600D7C8E2 /* RG_TU_tick.png */,
        9F3102D21A88E5F600D7C8E2 /* RG_TU_tick@2x.png */,
      );
      path = TopUp;
      sourceTree = "<group>";
    };
    9F3102D31A88E5F600D7C8E2 /* TopUpV2 */ = {
      isa = PBXGroup;
      children = (
        9F3102D41A88E5F600D7C8E2 /* screen1 */,
      );
      path = TopUpV2;
      sourceTree = "<group>";
    };
    9F3102D41A88E5F600D7C8E2 /* screen1 */ = {
      isa = PBXGroup;
      children = (
        9F3102D51A88E5F600D7C8E2 /* RG_tu_close_info_btn.png */,
        9F3102D61A88E5F600D7C8E2 /* RG_tu_close_info_btn@2x.png */,
        9F3102D71A88E5F600D7C8E2 /* RG_tu_default_profile.png */,
        9F3102D81A88E5F600D7C8E2 /* RG_tu_default_profile@2x.png */,
        9F3102D91A88E5F600D7C8E2 /* RG_tu_info_btn.png */,
        9F3102DA1A88E5F600D7C8E2 /* RG_tu_info_btn@2x.png */,
        9F3102DB1A88E5F600D7C8E2 /* RG_tu_textfield_OFF.png */,
        9F3102DC1A88E5F600D7C8E2 /* RG_tu_textfield_OFF@2x.png */,
        9F3102DD1A88E5F600D7C8E2 /* RG_tu_textfield_OFF@3x.png */,
        9F3102DE1A88E5F600D7C8E2 /* RG_tu_textfield_ON.png */,
        9F3102DF1A88E5F600D7C8E2 /* RG_tu_textfield_ON@2x.png */,
        9F3102E01A88E5F600D7C8E2 /* RG_tu_textfield_ON@3x.png */,
      );
      path = screen1;
      sourceTree = "<group>";
    };
    9F3102E11A88E5F600D7C8E2 /* Unsorted */ = {
      isa = PBXGroup;
      children = (
        9F3102E21A88E5F600D7C8E2 /* RG_sett_iconavatar_tsON.png */,
        9F3102E31A88E5F600D7C8E2 /* RG_sett_iconavatar_tsON@2x.png */,
        9F3102E41A88E5F600D7C8E2 /* RG_SS_default_header.png */,
        9F3102E51A88E5F600D7C8E2 /* RG_SS_default_header@2x.png */,
        9F3102E91A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1.png */,
        9F3102EA1A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1@2x.png */,
        9F3102EB1A88E5F600D7C8E2 /* RG_SS_homepage_searchbox_active1@3x.png */,
      );
      path = Unsorted;
      sourceTree = "<group>";
    };
    9F3102EF1A88E5F600D7C8E2 /* Fonts */ = {
      isa = PBXGroup;
      children = (
        9F3102F01A88E5F600D7C8E2 /* Turkcell Satura Bold Italic.ttf */,
        9F3102F11A88E5F600D7C8E2 /* Turkcell Satura Demi Italic.ttf */,
        9F3102F21A88E5F600D7C8E2 /* Turkcell Satura Demi.ttf */,
        9F3102F31A88E5F600D7C8E2 /* Turkcell Satura Italic.ttf */,
        9F3102F41A88E5F600D7C8E2 /* Turkcell Satura Medium Italic.ttf */,
        9F3102F51A88E5F600D7C8E2 /* Turkcell Satura Medium.ttf */,
        9F3102F61A88E5F600D7C8E2 /* Turkcell Satura Regular.ttf */,
        9F3102F71A88E5F600D7C8E2 /* TurkcellSaturaBold.ttf */,
      );
      path = Fonts;
      sourceTree = "<group>";
    };
    9F3102F81A88E5F600D7C8E2 /* Icons */ = {
      isa = PBXGroup;
      children = (
        9F3102F91A88E5F600D7C8E2 /* Icon_114.png */,
        9F3102FA1A88E5F600D7C8E2 /* Icon_120.png */,
        9F3102FB1A88E5F600D7C8E2 /* Icon_144.png */,
        9F3102FC1A88E5F600D7C8E2 /* Icon_29.png */,
        9F3102FD1A88E5F600D7C8E2 /* Icon_57.png */,
        9F3102FE1A88E5F600D7C8E2 /* Icon_58.png */,
        9F3102FF1A88E5F600D7C8E2 /* Icon_80.png */,
      );
      path = Icons;
      sourceTree = "<group>";
    };
    9F3103001A88E5F600D7C8E2 /* Images */ = {
      isa = PBXGroup;
      children = (
        9F3103011A88E5F600D7C8E2 /* Account */,
        9F31030E1A88E5F600D7C8E2 /* Allowance */,
        9F31032A1A88E5F600D7C8E2 /* Anonymous */,
        9F3103301A88E5F600D7C8E2 /* AppTour */,
        9F31033F1A88E5F600D7C8E2 /* Bills */,
        9F3103701A88E5F600D7C8E2 /* CampaignFlags */,
        9F3103861A88E5F600D7C8E2 /* Commons */,
        9F31038C1A88E5F600D7C8E2 /* finger_print.png */,
        9F31038D1A88E5F600D7C8E2 /* finger_print@2x.png */,
        9F31038E1A88E5F600D7C8E2 /* Guideline */,
        9F3104261A88E5F700D7C8E2 /* Loader */,
        9F31042E1A88E5F700D7C8E2 /* LocationBased */,
        9F3104331A88E5F700D7C8E2 /* Login */,
        9F3104571A88E5F700D7C8E2 /* mnt */,
        9F31045D1A88E5F700D7C8E2 /* Modal */,
        9F3104661A88E5F700D7C8E2 /* Navigation */,
        9F31046F1A88E5F700D7C8E2 /* Notification */,
        9F3104781A88E5F700D7C8E2 /* OneBox */,
        9F3104861A88E5F700D7C8E2 /* Setting */,
        9F3104B91A88E5F700D7C8E2 /* StoreLocator */,
        9F3104F21A88E5F700D7C8E2 /* Topup */,
        9F3105B51A88E5F700D7C8E2 /* unsorted */,
        9F3105CE1A88E5F700D7C8E2 /* Validation */,
        9F3105D31A88E5F700D7C8E2 /* webview */,
      );
      path = Images;
      sourceTree = "<group>";
    };
    9F3103011A88E5F600D7C8E2 /* Account */ = {
      isa = PBXGroup;
      children = (
        9F3103041A88E5F600D7C8E2 /* adamli.png */,
        9F3103051A88E5F600D7C8E2 /* adamli@2x.png */,
        9F3103061A88E5F600D7C8E2 /* adamli@3x.png */,
        9F3103071A88E5F600D7C8E2 /* photo_machine_icon.png */,
        9F3103081A88E5F600D7C8E2 /* photo_machine_icon@2x.png */,
        9F3103091A88E5F600D7C8E2 /* TC_topnav_icon.png */,
        9F31030A1A88E5F600D7C8E2 /* TC_topnav_icon@2x.png */,
        9F31030B1A88E5F600D7C8E2 /* tel.png */,
        9F31030C1A88E5F600D7C8E2 /* tel@2x.png */,
        9F31030D1A88E5F600D7C8E2 /* tel@3x.png */,
      );
      path = Account;
      sourceTree = "<group>";
    };
    9F31030E1A88E5F600D7C8E2 /* Allowance */ = {
      isa = PBXGroup;
      children = (
        9F31030F1A88E5F600D7C8E2 /* Allowance_data_notification.png */,
        9F3103101A88E5F600D7C8E2 /* Allowance_data_notification@2x.png */,
        9F3103111A88E5F600D7C8E2 /* Allowance_data_notification@3x.png */,
        9F3103121A88E5F600D7C8E2 /* AllowanceBill_Icon_Data.png */,
        9F3103131A88E5F600D7C8E2 /* AllowanceBill_Icon_Data@2x.png */,
        9F3103141A88E5F600D7C8E2 /* AllowanceBill_Icon_Data@3x.png */,
        9F3103151A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected.png */,
        9F3103161A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected@2x.png */,
        9F3103171A88E5F600D7C8E2 /* AllowanceBill_Icon_Data_selected@3x.png */,
        9F3103181A88E5F600D7C8E2 /* AllowanceBill_Icon_Other.png */,
        9F3103191A88E5F600D7C8E2 /* AllowanceBill_Icon_Other@2x.png */,
        9F31031A1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other@3x.png */,
        9F31031B1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected.png */,
        9F31031C1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected@2x.png */,
        9F31031D1A88E5F600D7C8E2 /* AllowanceBill_Icon_Other_selected@3x.png */,
        9F31031E1A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS.png */,
        9F31031F1A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS@2x.png */,
        9F3103201A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS@3x.png */,
        9F3103211A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected.png */,
        9F3103221A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected@2x.png */,
        9F3103231A88E5F600D7C8E2 /* AllowanceBill_Icon_SMS_selected@3x.png */,
        9F3103241A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice.png */,
        9F3103251A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice@2x.png */,
        9F3103261A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice@3x.png */,
        9F3103271A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected.png */,
        9F3103281A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected@2x.png */,
        9F3103291A88E5F600D7C8E2 /* AllowanceBill_Icon_Voice_selected@3x.png */,
      );
      path = Allowance;
      sourceTree = "<group>";
    };
    9F31032A1A88E5F600D7C8E2 /* Anonymous */ = {
      isa = PBXGroup;
      children = (
        9F31032B1A88E5F600D7C8E2 /* logo_only_phone_icon.png */,
        9F31032C1A88E5F600D7C8E2 /* logo_only_phone_icon@2x.png */,
        9F31032D1A88E5F600D7C8E2 /* logo_only_phone_icon@3x.png */,
        9F31032E1A88E5F600D7C8E2 /* pusula.png */,
        9F31032F1A88E5F600D7C8E2 /* pusula@2x.png */,
      );
      path = Anonymous;
      sourceTree = "<group>";
    };
    9F3103301A88E5F600D7C8E2 /* AppTour */ = {
      isa = PBXGroup;
      children = (
        9F3103311A88E5F600D7C8E2 /* cocuk1.png */,
        9F3103321A88E5F600D7C8E2 /* cocuk1@2x.png */,
        9F3103331A88E5F600D7C8E2 /* cocuk2.png */,
        9F3103341A88E5F600D7C8E2 /* cocuk2@2x.png */,
        9F3103351A88E5F600D7C8E2 /* cocuk3.png */,
        9F3103361A88E5F600D7C8E2 /* cocuk3@2x.png */,
        9F3103371A88E5F600D7C8E2 /* cocuk4.png */,
        9F3103381A88E5F600D7C8E2 /* cocuk4@2x.png */,
        9F3103391A88E5F600D7C8E2 /* menu_icon_white_highlighted.png */,
        9F31033A1A88E5F600D7C8E2 /* menu_icon_white_highlighted@2x.png */,
        9F31033B1A88E5F600D7C8E2 /* topup_white_icon_highlighted.png */,
        9F31033C1A88E5F600D7C8E2 /* topup_white_icon_hightlighted@2x.png */,
        9F31033D1A88E5F600D7C8E2 /* yellow_button_with_glow.png */,
        9F31033E1A88E5F600D7C8E2 /* yellow_button_with_glow@2x.png */,
      );
      path = AppTour;
      sourceTree = "<group>";
    };
    9F31033F1A88E5F600D7C8E2 /* Bills */ = {
      isa = PBXGroup;
      children = (
        9F3103401A88E5F600D7C8E2 /* Bill_details_button_bg.png */,
        9F3103411A88E5F600D7C8E2 /* Bill_details_button_bg@2x.png */,
        9F3103421A88E5F600D7C8E2 /* Bill_details_button_bg@3x.png */,
        9F3103451A88E5F600D7C8E2 /* Bill_paynow_button_bg.png */,
        9F3103461A88E5F600D7C8E2 /* Bill_paynow_button_bg@2x.png */,
        9F3103471A88E5F600D7C8E2 /* Bill_paynow_button_bg@3x.png */,
        9F3103481A88E5F600D7C8E2 /* close_icon_white.png */,
        9F3103491A88E5F600D7C8E2 /* close_icon_white@2x.png */,
        9F31034A1A88E5F600D7C8E2 /* minus_icon.png */,
        9F31034B1A88E5F600D7C8E2 /* minus_icon@2x.png */,
        9F31034C1A88E5F600D7C8E2 /* plus_icon.png */,
        9F31034D1A88E5F600D7C8E2 /* plus_icon@2x.png */,
        9F31034E1A88E5F600D7C8E2 /* RG_Bill_payNowBtn_BIG.png */,
        9F31034F1A88E5F600D7C8E2 /* RG_Bill_payNowBtn_BIG@2x.png */,
        9F3103501A88E5F600D7C8E2 /* RG_Bill_sendEmail_BIG.png */,
        9F3103511A88E5F600D7C8E2 /* RG_Bill_sendEmail_BIG@2x.png */,
        9F3103521A88E5F600D7C8E2 /* RG_calendar_icon.png */,
        9F3103531A88E5F600D7C8E2 /* RG_calendar_icon@2x.png */,
        9F3103541A88E5F600D7C8E2 /* RG_calendar_icon@3x.png */,
        9F3103551A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF.png */,
        9F3103561A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF@2x.png */,
        9F3103571A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF_white.png */,
        9F3103581A88E5F600D7C8E2 /* RG_mb_arrow_icon_OFF_white@2x.png */,
        9F3103591A88E5F600D7C8E2 /* RG_mb_arrow_icon_ON.png */,
        9F31035A1A88E5F600D7C8E2 /* RG_mb_arrow_icon_ON@2x.png */,
        9F31035B1A88E5F600D7C8E2 /* RG_mb_itemised_icon_OFF.png */,
        9F31035C1A88E5F600D7C8E2 /* RG_mb_itemised_icon_OFF@2x.png */,
        9F31035D1A88E5F600D7C8E2 /* RG_mb_itemised_icon_ON.png */,
        9F31035E1A88E5F600D7C8E2 /* RG_mb_itemised_icon_ON@2x.png */,
        9F31035F1A88E5F600D7C8E2 /* RG_mb_stats_icon_OFF.png */,
        9F3103601A88E5F600D7C8E2 /* RG_mb_stats_icon_OFF@2x.png */,
        9F3103611A88E5F600D7C8E2 /* RG_mb_stats_icon_ON.png */,
        9F3103621A88E5F600D7C8E2 /* RG_mb_stats_icon_ON@2x.png */,
        9F3103631A88E5F600D7C8E2 /* RG_mb_summary_icon_OFF.png */,
        9F3103641A88E5F600D7C8E2 /* RG_mb_summary_icon_OFF@2x.png */,
        9F3103651A88E5F600D7C8E2 /* RG_mb_summary_icon_ON.png */,
        9F3103661A88E5F600D7C8E2 /* RG_mb_summary_icon_ON@2x.png */,
        9F3103671A88E5F600D7C8E2 /* StatsPieces */,
      );
      path = Bills;
      sourceTree = "<group>";
    };
    9F3103671A88E5F600D7C8E2 /* StatsPieces */ = {
      isa = PBXGroup;
      children = (
      );
      path = StatsPieces;
      sourceTree = "<group>";
    };
    9F3103701A88E5F600D7C8E2 /* CampaignFlags */ = {
      isa = PBXGroup;
      children = (
        9F3103711A88E5F600D7C8E2 /* flag_campaign.png */,
        9F3103721A88E5F600D7C8E2 /* flag_campaign@2x.png */,
        9F3103731A88E5F600D7C8E2 /* flag_campaign@3x.png */,
        9F3103741A88E5F600D7C8E2 /* flag_campaign_and_new.png */,
        9F3103751A88E5F600D7C8E2 /* flag_campaign_and_new@2x.png */,
        9F3103761A88E5F600D7C8E2 /* flag_campaign_and_new@3x.png */,
        9F3103771A88E5F600D7C8E2 /* flag_campaign_and_popular.png */,
        9F3103781A88E5F600D7C8E2 /* flag_campaign_and_popular@2x.png */,
        9F3103791A88E5F600D7C8E2 /* flag_campaign_and_popular@3x.png */,
        9F31037A1A88E5F600D7C8E2 /* flag_campaign_and_recommendation.png */,
        9F31037B1A88E5F600D7C8E2 /* flag_campaign_and_recommendation@2x.png */,
        9F31037C1A88E5F600D7C8E2 /* flag_campaign_and_recommendation@3x.png */,
        9F31037D1A88E5F600D7C8E2 /* flag_new.png */,
        9F31037E1A88E5F600D7C8E2 /* flag_new@2x.png */,
        9F31037F1A88E5F600D7C8E2 /* flag_new@3x.png */,
        9F3103801A88E5F600D7C8E2 /* flag_popular.png */,
        9F3103811A88E5F600D7C8E2 /* flag_popular@2x.png */,
        9F3103821A88E5F600D7C8E2 /* flag_popular@3x.png */,
        9F3103831A88E5F600D7C8E2 /* flag_recommendation.png */,
        9F3103841A88E5F600D7C8E2 /* flag_recommendation@2x.png */,
        9F3103851A88E5F600D7C8E2 /* flag_recommendation@3x.png */,
      );
      path = CampaignFlags;
      sourceTree = "<group>";
    };
    9F3103861A88E5F600D7C8E2 /* Commons */ = {
      isa = PBXGroup;
      children = (
        9F3103871A88E5F600D7C8E2 /* big_shadow.png */,
        9F3103881A88E5F600D7C8E2 /* big_shadow@2x.png */,
        9F3103891A88E5F600D7C8E2 /* big_shadow@3x.png */,
        9F31038A1A88E5F600D7C8E2 /* close_keyboard_icon.png */,
        9F31038B1A88E5F600D7C8E2 /* close_keyboard_icon@2x.png */,
      );
      path = Commons;
      sourceTree = "<group>";
    };
    9F31038E1A88E5F600D7C8E2 /* Guideline */ = {
      isa = PBXGroup;
      children = (
        9F3103911A88E5F600D7C8E2 /* left_white_arrow_from_guideline.png */,
        9F3103921A88E5F600D7C8E2 /* left_white_arrow_from_guideline@2x.png */,
        9F3103931A88E5F600D7C8E2 /* reload_icon_from_guideline.png */,
        9F3103941A88E5F600D7C8E2 /* reload_icon_from_guideline@2x.png */,
        9F3103951A88E5F600D7C8E2 /* reload_icon_from_guideline@3x.png */,
        9F3103961A88E5F600D7C8E2 /* right_white_arrow_from_guideline.png */,
        9F3103971A88E5F600D7C8E2 /* right_white_arrow_from_guideline@2x.png */,
        9F3103981A88E5F600D7C8E2 /* search_icon_from_guideline.png */,
        9F3103991A88E5F600D7C8E2 /* search_icon_from_guideline@2x.png */,
        9F31039A1A88E5F600D7C8E2 /* search_icon_from_guideline@3x.png */,
      );
      path = Guideline;
      sourceTree = "<group>";
    };
    9F3104261A88E5F700D7C8E2 /* Loader */ = {
      isa = PBXGroup;
      children = (
        9F3104271A88E5F700D7C8E2 /* RG_LS_intro_logo.png */,
        9F3104281A88E5F700D7C8E2 /* RG_LS_intro_logo@2x.png */,
        9F3104291A88E5F700D7C8E2 /* RG_LS_intro_logo@3x.png */,
        9F31042A1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle.png */,
        9F31042B1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle@2x.png */,
        9F31042C1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo.png */,
        9F31042D1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo@2x.png */,
      );
      path = Loader;
      sourceTree = "<group>";
    };
    9F31042E1A88E5F700D7C8E2 /* LocationBased */ = {
      isa = PBXGroup;
      children = (
        9F31042F1A88E5F700D7C8E2 /* location_based_bg.png */,
        9F3104301A88E5F700D7C8E2 /* location_based_bg@2x.png */,
        9F3104311A88E5F700D7C8E2 /* offer_button_icon.png */,
        9F3104321A88E5F700D7C8E2 /* offer_button_icon@2x.png */,
      );
      path = LocationBased;
      sourceTree = "<group>";
    };
    9F3104331A88E5F700D7C8E2 /* Login */ = {
      isa = PBXGroup;
      children = (
        9F3104341A88E5F700D7C8E2 /* date_icon.png */,
        9F3104351A88E5F700D7C8E2 /* date_icon@2x.png */,
        9F3104361A88E5F700D7C8E2 /* date_icon@3x.png */,
        9F3104371A88E5F700D7C8E2 /* home_login_avatar.png */,
        9F3104381A88E5F700D7C8E2 /* home_login_avatar@2x.png */,
        9F3104391A88E5F700D7C8E2 /* home_login_avatar@3x.png */,
        9F31043A1A88E5F700D7C8E2 /* hour_icon.png */,
        9F31043B1A88E5F700D7C8E2 /* hour_icon@2x.png */,
        9F31043C1A88E5F700D7C8E2 /* hour_icon@3x.png */,
        9F31043D1A88E5F700D7C8E2 /* login_facebook.png */,
        9F31043E1A88E5F700D7C8E2 /* login_facebook2.png */,
        9F31043F1A88E5F700D7C8E2 /* login_facebook2@2x.png */,
        9F3104401A88E5F700D7C8E2 /* login_facebook@2x.png */,
        9F3104411A88E5F700D7C8E2 /* login_mobileimza.png */,
        9F3104421A88E5F700D7C8E2 /* login_mobileimza2.png */,
        9F3104431A88E5F700D7C8E2 /* login_mobileimza2@2x.png */,
        9F3104441A88E5F700D7C8E2 /* login_mobileimza@2x.png */,
        9F3104451A88E5F700D7C8E2 /* login_sifreDegistir.png */,
        9F3104461A88E5F700D7C8E2 /* login_sifreDegistir@2x.png */,
        9F3104471A88E5F700D7C8E2 /* login_sms_sending_image.png */,
        9F3104481A88E5F700D7C8E2 /* login_sms_sending_image@2x.png */,
        9F3104491A88E5F700D7C8E2 /* login_telNoSifre.png */,
        9F31044A1A88E5F700D7C8E2 /* login_telNoSifre@2x.png */,
        9F31044B1A88E5F700D7C8E2 /* login_tick_icon.png */,
        9F31044C1A88E5F700D7C8E2 /* login_tick_icon@2x.png */,
        9F31044D1A88E5F700D7C8E2 /* login_tick_icon@3x.png */,
        9F31044E1A88E5F700D7C8E2 /* login_turkcell.png */,
        9F31044F1A88E5F700D7C8E2 /* login_turkcell2.png */,
        9F3104501A88E5F700D7C8E2 /* login_turkcell2@2x.png */,
        9F3104511A88E5F700D7C8E2 /* login_turkcell@2x.png */,
        9F3104521A88E5F700D7C8E2 /* signin.png */,
        9F3104531A88E5F700D7C8E2 /* signin@2x.png */,
        9F3104541A88E5F700D7C8E2 /* signin@3x.png */,
        9F3104551A88E5F700D7C8E2 /* signout.png */,
        9F3104561A88E5F700D7C8E2 /* signout@2x.png */,
      );
      path = Login;
      sourceTree = "<group>";
    };
    9F3104571A88E5F700D7C8E2 /* mnt */ = {
      isa = PBXGroup;
      children = (
        9F3104581A88E5F700D7C8E2 /* mnt.png */,
        9F3104591A88E5F700D7C8E2 /* mnt@2x.png */,
        9F31045A1A88E5F700D7C8E2 /* mnt@3x.png */,
        9F31045B1A88E5F700D7C8E2 /* mntOK.png */,
        9F31045C1A88E5F700D7C8E2 /* mntOK@2x.png */,
      );
      path = mnt;
      sourceTree = "<group>";
    };
    9F31045D1A88E5F700D7C8E2 /* Modal */ = {
      isa = PBXGroup;
      children = (
        9F31045E1A88E5F700D7C8E2 /* alert_icon_confirm.png */,
        9F31045F1A88E5F700D7C8E2 /* alert_icon_confirm@2x.png */,
        9F3104601A88E5F700D7C8E2 /* alert_icon_error.png */,
        9F3104611A88E5F700D7C8E2 /* alert_icon_error@2x.png */,
        9F3104621A88E5F700D7C8E2 /* alert_icon_info.png */,
        9F3104631A88E5F700D7C8E2 /* alert_icon_info@2x.png */,
        9F3104641A88E5F700D7C8E2 /* alert_icon_success.png */,
        9F3104651A88E5F700D7C8E2 /* alert_icon_success@2x.png */,
      );
      path = Modal;
      sourceTree = "<group>";
    };
    9F3104661A88E5F700D7C8E2 /* Navigation */ = {
      isa = PBXGroup;
      children = (
        9F3104671A88E5F700D7C8E2 /* menu_back_icon_blue.png */,
        9F3104681A88E5F700D7C8E2 /* menu_back_icon_blue@2x.png */,
        9F3104691A88E5F700D7C8E2 /* menu_back_icon_white.png */,
        9F31046A1A88E5F700D7C8E2 /* menu_back_icon_white@2x.png */,
        9F31046B1A88E5F700D7C8E2 /* menu_icon_blue.png */,
        9F31046C1A88E5F700D7C8E2 /* menu_icon_blue@2x.png */,
        9F31046D1A88E5F700D7C8E2 /* menu_icon_white.png */,
        9F31046E1A88E5F700D7C8E2 /* menu_icon_white@2x.png */,
      );
      path = Navigation;
      sourceTree = "<group>";
    };
    9F31046F1A88E5F700D7C8E2 /* Notification */ = {
      isa = PBXGroup;
      children = (
        9F3104701A88E5F700D7C8E2 /* notification_placeholder.png */,
        9F3104711A88E5F700D7C8E2 /* notification_placeholder@2x.png */,
        9F3104741A88E5F700D7C8E2 /* TC_sett2_1.png */,
        9F3104751A88E5F700D7C8E2 /* TC_sett2_1@2x.png */,
      );
      path = Notification;
      sourceTree = "<group>";
    };
    9F3104781A88E5F700D7C8E2 /* OneBox */ = {
      isa = PBXGroup;
      children = (
        9F3104791A88E5F700D7C8E2 /* displayBillAnalysisModule.png */,
        9F31047A1A88E5F700D7C8E2 /* displayBillAnalysisModule@2x.png */,
        9F31047B1A88E5F700D7C8E2 /* displayBillModule.png */,
        9F31047C1A88E5F700D7C8E2 /* displayBillModule@2x.png */,
        9F31047D1A88E5F700D7C8E2 /* displayNarModule.png */,
        9F31047E1A88E5F700D7C8E2 /* displayNarModule@2x.png */,
        9F31047F1A88E5F700D7C8E2 /* displaySettingsModule.png */,
        9F3104801A88E5F700D7C8E2 /* displaySettingsModule@2x.png */,
        9F3104811A88E5F700D7C8E2 /* displayTopUpModule.png */,
        9F3104821A88E5F700D7C8E2 /* displayTopUpModule@2x.png */,
        9F3104831A88E5F700D7C8E2 /* displayUsageModule.png */,
        9F3104841A88E5F700D7C8E2 /* displayUsageModule@2x.png */,
        9F3104851A88E5F700D7C8E2 /* one-box-default.png */,
      );
      path = OneBox;
      sourceTree = "<group>";
    };
    9F3104861A88E5F700D7C8E2 /* Setting */ = {
      isa = PBXGroup;
      children = (
        9F75BE491B093991006A9356 /* yetkili_onayi@1x.png */,
        9F75BE4A1B093991006A9356 /* yetkili_onayi@2x.png */,
        9F3104891A88E5F700D7C8E2 /* arrowRightDirection.png */,
        9F31048A1A88E5F700D7C8E2 /* arrowRightDirection@2x.png */,
        9F31048B1A88E5F700D7C8E2 /* arrowUpDirection.png */,
        9F31048C1A88E5F700D7C8E2 /* arrowUpDirection@2x.png */,
        9F31048D1A88E5F700D7C8E2 /* face.png */,
        9F31048E1A88E5F700D7C8E2 /* face@2x.png */,
        9F31048F1A88E5F700D7C8E2 /* fotoCarpi.png */,
        9F3104901A88E5F700D7C8E2 /* fotoCarpi@2x.png */,
        9F3104911A88E5F700D7C8E2 /* fotoCek.png */,
        9F3104921A88E5F700D7C8E2 /* fotoCek@2x.png */,
        9F3104931A88E5F700D7C8E2 /* fotoSec.png */,
        9F3104941A88E5F700D7C8E2 /* fotoSec@2x.png */,
        9F3104951A88E5F700D7C8E2 /* grayphoneicon.png */,
        9F3104961A88E5F700D7C8E2 /* grayphoneicon@2x.png */,
        9F3104971A88E5F700D7C8E2 /* iphone4_image.png */,
        9F3104981A88E5F700D7C8E2 /* iphone4_image@2x.png */,
        9F3104991A88E5F700D7C8E2 /* iphone5_image.png */,
        9F31049A1A88E5F700D7C8E2 /* iphone5_image@2x.png */,
        9F31049B1A88E5F700D7C8E2 /* iphone_image.png */,
        9F31049C1A88E5F700D7C8E2 /* iphone_image@2x.png */,
        9F31049D1A88E5F700D7C8E2 /* kaydet.png */,
        9F31049E1A88E5F700D7C8E2 /* kaydet@2x.png */,
        9F31049F1A88E5F700D7C8E2 /* RG_switch.png */,
        9F3104A01A88E5F700D7C8E2 /* RG_switch@2x.png */,
        9F3104A11A88E5F700D7C8E2 /* TC_sett_call.png */,
        9F3104A21A88E5F700D7C8E2 /* TC_sett_call@2x.png */,
        9F3104A31A88E5F700D7C8E2 /* TC_sett_data.png */,
        9F3104A41A88E5F700D7C8E2 /* TC_sett_data@2x.png */,
        9F3104A51A88E5F700D7C8E2 /* TC_sett_iconavatarON.png */,
        9F3104A61A88E5F700D7C8E2 /* TC_sett_iconavatarON@2x.png */,
        9F3104A71A88E5F700D7C8E2 /* TC_sett_line.png */,
        9F3104A81A88E5F700D7C8E2 /* TC_sett_line@2x.png */,
        9F3104A91A88E5F700D7C8E2 /* TC_sett_linesett.png */,
        9F3104AA1A88E5F700D7C8E2 /* TC_sett_linesett@2x.png */,
        9F3104AD1A88E5F700D7C8E2 /* TC_sett_notifications.png */,
        9F3104AE1A88E5F700D7C8E2 /* TC_sett_notifications@2x.png */,
        9F3104AF1A88E5F700D7C8E2 /* TC_sett_password.png */,
        9F3104B01A88E5F700D7C8E2 /* TC_sett_password@2x.png */,
        9F3104B11A88E5F700D7C8E2 /* TC_sett_sms.png */,
        9F3104B21A88E5F700D7C8E2 /* TC_sett_sms@2x.png */,
        9F3104B31A88E5F700D7C8E2 /* TC_sett_tpay.png */,
        9F3104B41A88E5F700D7C8E2 /* TC_sett_tpay@2x.png */,
        9F3104B51A88E5F700D7C8E2 /* togg_select.png */,
        9F3104B61A88E5F700D7C8E2 /* togg_select@2x.png */,
        9F3104B71A88E5F700D7C8E2 /* togg_unselect.png */,
        9F3104B81A88E5F700D7C8E2 /* togg_unselect@2x.png */,
      );
      path = Setting;
      sourceTree = "<group>";
    };
    9F3104B91A88E5F700D7C8E2 /* StoreLocator */ = {
      isa = PBXGroup;
      children = (
        9F3104BA1A88E5F700D7C8E2 /* deepPurple.png */,
        9F3104BB1A88E5F700D7C8E2 /* deepPurple2.png */,
        9F3104BC1A88E5F700D7C8E2 /* deepPurple@2x.png */,
        9F3104BD1A88E5F700D7C8E2 /* deepPurpleB.png */,
        9F3104BE1A88E5F700D7C8E2 /* deepPurpleB@2x.png */,
        9F3104BF1A88E5F700D7C8E2 /* gri.png */,
        9F3104C01A88E5F700D7C8E2 /* gri2.png */,
        9F3104C11A88E5F700D7C8E2 /* gri@2x.png */,
        9F3104C21A88E5F700D7C8E2 /* griB.png */,
        9F3104C31A88E5F700D7C8E2 /* griB@2x.png */,
        9F3104C61A88E5F700D7C8E2 /* mavi.png */,
        9F3104C71A88E5F700D7C8E2 /* mavi2.png */,
        9F3104C81A88E5F700D7C8E2 /* mavi@2x.png */,
        9F3104C91A88E5F700D7C8E2 /* maviB.png */,
        9F3104CA1A88E5F700D7C8E2 /* maviB@2x.png */,
        9F3104CC1A88E5F700D7C8E2 /* storeshadow.png */,
        9F3104CD1A88E5F700D7C8E2 /* storeshadow@2x.png */,
        9F3104CE1A88E5F700D7C8E2 /* storeturkcellLogo.png */,
        9F3104CF1A88E5F700D7C8E2 /* storeturkcellLogo@2x.png */,
        9F3104D01A88E5F700D7C8E2 /* storeturkcellLogoTruncu.png */,
        9F3104D11A88E5F700D7C8E2 /* storeturkcellLogoturuncu@2x.png */,
        9F3104D21A88E5F700D7C8E2 /* TC_Map_Home.png */,
        9F3104D31A88E5F700D7C8E2 /* TC_Map_Home@2x.png */,
        9F3104D41A88E5F700D7C8E2 /* TC_pin.png */,
        9F3104D51A88E5F700D7C8E2 /* TC_pin@2x.png */,
        9F3104D61A88E5F700D7C8E2 /* TC_SL_boxbigarrow.png */,
        9F3104D71A88E5F700D7C8E2 /* TC_SL_boxbigarrow@2x.png */,
        9F3104DE1A88E5F700D7C8E2 /* TC_SL_locationpin.png */,
        9F3104DF1A88E5F700D7C8E2 /* TC_SL_locationpin@2x.png */,
        9F3104E01A88E5F700D7C8E2 /* TC_SL_pin.png */,
        9F3104E11A88E5F700D7C8E2 /* TC_SL_pin@2x.png */,
        9F3104E21A88E5F700D7C8E2 /* TC_SL_searchbox_blue.png */,
        9F3104E31A88E5F700D7C8E2 /* TC_SL_searchbox_blue@2x.png */,
        9F3104E41A88E5F700D7C8E2 /* TC_SL_searchbox_default.png */,
        9F3104E51A88E5F700D7C8E2 /* Tc_SL_searchbox_default@2x.png */,
        9F3104E61A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon.png */,
        9F3104E71A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon@2x.png */,
        9F3104E81A88E5F700D7C8E2 /* TC_SL_searchnearbybox.png */,
        9F3104E91A88E5F700D7C8E2 /* TC_SL_searchnearbybox@2x.png */,
        9F3104EC1A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1.png */,
        9F3104ED1A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1@2x.png */,
        9F3104EE1A88E5F700D7C8E2 /* turuncu.png */,
        9F3104EF1A88E5F700D7C8E2 /* turuncu@2x.png */,
        9F3104F01A88E5F700D7C8E2 /* turuncuB.png */,
        9F3104F11A88E5F700D7C8E2 /* turuncuB@2x.png */,
      );
      path = StoreLocator;
      sourceTree = "<group>";
    };
    9F3104F21A88E5F700D7C8E2 /* Topup */ = {
      isa = PBXGroup;
      children = (
        9F3104F31A88E5F700D7C8E2 /* ArrowsRight */,
        9F31051B1A88E5F700D7C8E2 /* ArrowsUp */,
        9F3105401A88E5F700D7C8E2 /* buttonGray.png */,
        9F3105411A88E5F700D7C8E2 /* buttonGray@2x.png */,
        9F3105421A88E5F700D7C8E2 /* buttonGray@3x.png */,
        9F3105431A88E5F700D7C8E2 /* buttonYellow.png */,
        9F3105441A88E5F700D7C8E2 /* buttonYellow@2x.png */,
        9F3105451A88E5F700D7C8E2 /* buttonYellow@3x.png */,
        9F3105461A88E5F700D7C8E2 /* check.png */,
        9F3105471A88E5F700D7C8E2 /* check@2x.png */,
        9F3105481A88E5F700D7C8E2 /* check@3x.png */,
        9F3105491A88E5F700D7C8E2 /* checkBox.png */,
        9F31054A1A88E5F700D7C8E2 /* checkBox@2x.png */,
        9F31054B1A88E5F700D7C8E2 /* checkBox@3x.png */,
        9F31054C1A88E5F700D7C8E2 /* close_icon_blue.png */,
        9F31054D1A88E5F700D7C8E2 /* close_icon_blue@2x.png */,
        9F31054E1A88E5F700D7C8E2 /* close_icon_blue@3x.png */,
        9F31054F1A88E5F700D7C8E2 /* close_icon_gray.png */,
        9F3105501A88E5F700D7C8E2 /* close_icon_gray@2x.png */,
        9F3105511A88E5F700D7C8E2 /* close_icon_gray@3x.png */,
        9F3105521A88E5F700D7C8E2 /* makePaymentButton.png */,
        9F3105531A88E5F700D7C8E2 /* makePaymentButton@2x.png */,
        9F3105541A88E5F700D7C8E2 /* menu */,
        9F31057D1A88E5F700D7C8E2 /* tc_address_book.png */,
        9F31057E1A88E5F700D7C8E2 /* tc_address_book@2x.png */,
        9F31057F1A88E5F700D7C8E2 /* tc_address_book@3x.png */,
        9F3105801A88E5F700D7C8E2 /* tc_amex.png */,
        9F3105811A88E5F700D7C8E2 /* tc_amex@2x.png */,
        9F3105821A88E5F700D7C8E2 /* tc_master.png */,
        9F3105831A88E5F700D7C8E2 /* tc_master@2x.png */,
        9F3105841A88E5F700D7C8E2 /* TC_To_Up_icon.png */,
        9F3105851A88E5F700D7C8E2 /* TC_To_Up_icon@2x.png */,
        9F3105861A88E5F700D7C8E2 /* TC_topup_contact_cell_bg.png */,
        9F3105871A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@2x.png */,
        9F3105881A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@3x.png */,
        9F31058C1A88E5F700D7C8E2 /* TC_topup_success.png */,
        9F31058D1A88E5F700D7C8E2 /* TC_topup_success@2x.png */,
        9F31058E1A88E5F700D7C8E2 /* TC_topup_success@3x.png */,
        9F31058F1A88E5F700D7C8E2 /* TC_tu_back_arrow.png */,
        9F3105901A88E5F700D7C8E2 /* TC_tu_back_arrow@2x.png */,
        9F3105911A88E5F700D7C8E2 /* TC_tu_data_icon_OFF.png */,
        9F3105921A88E5F700D7C8E2 /* TC_tu_data_icon_OFF@2x.png */,
        9F3105931A88E5F700D7C8E2 /* TC_tu_data_icon_ON.png */,
        9F3105941A88E5F700D7C8E2 /* TC_tu_data_icon_ON@2x.png */,
        9F3105951A88E5F700D7C8E2 /* TC_tu_default_profile.png */,
        9F3105961A88E5F700D7C8E2 /* TC_tu_default_profile@2x.png */,
        9F3105971A88E5F700D7C8E2 /* TC_tu_default_profile@3x.png */,
        9F3105981A88E5F700D7C8E2 /* TC_tu_info_btn.png */,
        9F3105991A88E5F700D7C8E2 /* TC_tu_info_btn@2x.png */,
        9F31059A1A88E5F700D7C8E2 /* TC_tu_main_btn.png */,
        9F31059B1A88E5F700D7C8E2 /* TC_tu_main_btn@2x.png */,
        9F31059C1A88E5F700D7C8E2 /* TC_tu_main_btn@3x.png */,
        9F31059D1A88E5F700D7C8E2 /* TC_tu_main_lable_btn1.png */,
        9F31059E1A88E5F700D7C8E2 /* TC_tu_main_lable_btn1@2x.png */,
        9F31059F1A88E5F700D7C8E2 /* TC_tu_main_lable_btn3.png */,
        9F3105A01A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@2x.png */,
        9F3105A11A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@3x.png */,
        9F3105A21A88E5F700D7C8E2 /* TC_tu_mobile.png */,
        9F3105A31A88E5F700D7C8E2 /* TC_tu_mobile@2x.png */,
        9F3105A41A88E5F700D7C8E2 /* TC_tu_mobile@3x.png */,
        9F3105A51A88E5F700D7C8E2 /* TC_tu_type_value_arrow.png */,
        9F3105A61A88E5F700D7C8E2 /* TC_tu_type_value_arrow@2x.png */,
        9F3105A71A88E5F700D7C8E2 /* TC_tu_type_value_arrow@3x.png */,
        9F3105A81A88E5F700D7C8E2 /* tc_visa.png */,
        9F3105A91A88E5F700D7C8E2 /* tc_visa@2x.png */,
        9F3105AA1A88E5F700D7C8E2 /* topup_gray_icon.png */,
        9F3105AB1A88E5F700D7C8E2 /* topup_gray_icon@2x.png */,
        9F3105AC1A88E5F700D7C8E2 /* topup_gray_icon@3x.png */,
        9F3105AD1A88E5F700D7C8E2 /* topup_selected_op.png */,
        9F3105AE1A88E5F700D7C8E2 /* topup_selected_op@2x.png */,
        9F3105AF1A88E5F700D7C8E2 /* topup_selected_op@3x.png */,
        9F3105B01A88E5F700D7C8E2 /* topup_unselected_op.png */,
        9F3105B11A88E5F700D7C8E2 /* topup_unselected_op@2x.png */,
        9F3105B21A88E5F700D7C8E2 /* topup_unselected_op@3x.png */,
        9F3105B31A88E5F700D7C8E2 /* topup_white_icon.png */,
        9F3105B41A88E5F700D7C8E2 /* topup_white_icon@2x.png */,
      );
      path = Topup;
      sourceTree = "<group>";
    };
    9F3104F31A88E5F700D7C8E2 /* ArrowsRight */ = {
      isa = PBXGroup;
      children = (
        9F3104F41A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT.png */,
        9F3104F51A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@2x.png */,
        9F3104F61A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@3x.png */,
        9F3104F71A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT.png */,
        9F3104F81A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@2x.png */,
        9F3104F91A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@3x.png */,
        9F3104FA1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT.png */,
        9F3104FB1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@2x.png */,
        9F3104FC1A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@3x.png */,
        9F3104FD1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT.png */,
        9F3104FE1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@2x.png */,
        9F3104FF1A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@3x.png */,
        9F3105001A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT.png */,
        9F3105011A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@2x.png */,
        9F3105021A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@3x.png */,
        9F3105031A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT.png */,
        9F3105041A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@2x.png */,
        9F3105051A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@3x.png */,
        9F3105061A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT.png */,
        9F3105071A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@2x.png */,
        9F3105081A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@3x.png */,
        9F3105091A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT.png */,
        9F31050A1A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@2x.png */,
        9F31050B1A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@3x.png */,
        9F31050C1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT.png */,
        9F31050D1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@2x.png */,
        9F31050E1A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@3x.png */,
        9F31050F1A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT.png */,
        9F3105101A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@2x.png */,
        9F3105111A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@3x.png */,
        9F3105121A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT.png */,
        9F3105131A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@2x.png */,
        9F3105141A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@3x.png */,
        9F3105151A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT.png */,
        9F3105161A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@2x.png */,
        9F3105171A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@3x.png */,
        9F3105181A88E5F700D7C8E2 /* TC_tu_phone.png */,
        9F3105191A88E5F700D7C8E2 /* TC_tu_phone@2x.png */,
        9F31051A1A88E5F700D7C8E2 /* TC_tu_phone@3x.png */,
      );
      path = ArrowsRight;
      sourceTree = "<group>";
    };
    9F31051B1A88E5F700D7C8E2 /* ArrowsUp */ = {
      isa = PBXGroup;
      children = (
        9F31051C1A88E5F700D7C8E2 /* RG_tu_arrow010_UP.png */,
        9F31051D1A88E5F700D7C8E2 /* RG_tu_arrow010_UP@2x.png */,
        9F31051E1A88E5F700D7C8E2 /* RG_tu_arrow010_UP@3x.png */,
        9F31051F1A88E5F700D7C8E2 /* RG_tu_arrow011_UP.png */,
        9F3105201A88E5F700D7C8E2 /* RG_tu_arrow011_UP@2x.png */,
        9F3105211A88E5F700D7C8E2 /* RG_tu_arrow011_UP@3x.png */,
        9F3105221A88E5F700D7C8E2 /* RG_tu_arrow012_UP.png */,
        9F3105231A88E5F700D7C8E2 /* RG_tu_arrow012_UP@2x.png */,
        9F3105241A88E5F700D7C8E2 /* RG_tu_arrow012_UP@3x.png */,
        9F3105251A88E5F700D7C8E2 /* RG_tu_arrow01_UP.png */,
        9F3105261A88E5F700D7C8E2 /* RG_tu_arrow01_UP@2x.png */,
        9F3105271A88E5F700D7C8E2 /* RG_tu_arrow01_UP@3x.png */,
        9F3105281A88E5F700D7C8E2 /* RG_tu_arrow02_UP.png */,
        9F3105291A88E5F700D7C8E2 /* RG_tu_arrow02_UP@2x.png */,
        9F31052A1A88E5F700D7C8E2 /* RG_tu_arrow02_UP@3x.png */,
        9F31052B1A88E5F700D7C8E2 /* RG_tu_arrow03_UP.png */,
        9F31052C1A88E5F700D7C8E2 /* RG_tu_arrow03_UP@2x.png */,
        9F31052D1A88E5F700D7C8E2 /* RG_tu_arrow03_UP@3x.png */,
        9F31052E1A88E5F700D7C8E2 /* RG_tu_arrow04_UP.png */,
        9F31052F1A88E5F700D7C8E2 /* RG_tu_arrow04_UP@2x.png */,
        9F3105301A88E5F700D7C8E2 /* RG_tu_arrow04_UP@3x.png */,
        9F3105311A88E5F700D7C8E2 /* RG_tu_arrow05_UP.png */,
        9F3105321A88E5F700D7C8E2 /* RG_tu_arrow05_UP@2x.png */,
        9F3105331A88E5F700D7C8E2 /* RG_tu_arrow05_UP@3x.png */,
        9F3105341A88E5F700D7C8E2 /* RG_tu_arrow06_UP.png */,
        9F3105351A88E5F700D7C8E2 /* RG_tu_arrow06_UP@2x.png */,
        9F3105361A88E5F700D7C8E2 /* RG_tu_arrow06_UP@3x.png */,
        9F3105371A88E5F700D7C8E2 /* RG_tu_arrow07_UP.png */,
        9F3105381A88E5F700D7C8E2 /* RG_tu_arrow07_UP@2x.png */,
        9F3105391A88E5F700D7C8E2 /* RG_tu_arrow07_UP@3x.png */,
        9F31053A1A88E5F700D7C8E2 /* RG_tu_arrow08_UP.png */,
        9F31053B1A88E5F700D7C8E2 /* RG_tu_arrow08_UP@2x.png */,
        9F31053C1A88E5F700D7C8E2 /* RG_tu_arrow08_UP@3x.png */,
        9F31053D1A88E5F700D7C8E2 /* RG_tu_arrow09_UP.png */,
        9F31053E1A88E5F700D7C8E2 /* RG_tu_arrow09_UP@2x.png */,
        9F31053F1A88E5F700D7C8E2 /* RG_tu_arrow09_UP@3x.png */,
      );
      path = ArrowsUp;
      sourceTree = "<group>";
    };
    9F3105541A88E5F700D7C8E2 /* menu */ = {
      isa = PBXGroup;
      children = (
        9F3105551A88E5F700D7C8E2 /* 3G.png */,
        9F3105561A88E5F700D7C8E2 /* 3G2.png */,
        9F3105571A88E5F700D7C8E2 /* 3G2@2x.png */,
        9F3105581A88E5F700D7C8E2 /* 3G2@3x.png */,
        9F3105591A88E5F700D7C8E2 /* 3G@2x.png */,
        9F31055A1A88E5F700D7C8E2 /* 3G@3x.png */,
        9F31055B1A88E5F700D7C8E2 /* bilgisayar.png */,
        9F31055C1A88E5F700D7C8E2 /* bilgisayar2.png */,
        9F31055D1A88E5F700D7C8E2 /* bilgisayar2@2x.png */,
        9F31055E1A88E5F700D7C8E2 /* bilgisayar2@3x.png */,
        9F31055F1A88E5F700D7C8E2 /* bilgisayar@2x.png */,
        9F3105601A88E5F700D7C8E2 /* bilgisayar@3x.png */,
        9F3105611A88E5F700D7C8E2 /* Nar_gri.png */,
        9F3105621A88E5F700D7C8E2 /* Nar_gri@2x.png */,
        9F3105631A88E5F700D7C8E2 /* Nar_gri@3x.png */,
        9F3105641A88E5F700D7C8E2 /* Nar_mavi.png */,
        9F3105651A88E5F700D7C8E2 /* Nar_mavi@2x.png */,
        9F3105661A88E5F700D7C8E2 /* Nar_mavi@3x.png */,
        9F3105671A88E5F700D7C8E2 /* text */,
        9F3105771A88E5F700D7C8E2 /* TL_gri.png */,
        9F3105781A88E5F700D7C8E2 /* TL_gri@2x.png */,
        9F3105791A88E5F700D7C8E2 /* TL_gri@3x.png */,
        9F31057A1A88E5F700D7C8E2 /* TL_mavi.png */,
        9F31057B1A88E5F700D7C8E2 /* TL_mavi@2x.png */,
        9F31057C1A88E5F700D7C8E2 /* TL_mavi@3x.png */,
      );
      path = menu;
      sourceTree = "<group>";
    };
    9F3105671A88E5F700D7C8E2 /* text */ = {
      isa = PBXGroup;
      children = (
        9F3105681A88E5F700D7C8E2 /* 3G2_t.png */,
        9F3105691A88E5F700D7C8E2 /* 3G2_t@2x.png */,
        9F31056A1A88E5F700D7C8E2 /* 3G2_t@3x.png */,
        9F31056B1A88E5F700D7C8E2 /* bilgisayar2_t.png */,
        9F31056C1A88E5F700D7C8E2 /* bilgisayar2_t@2x.png */,
        9F31056D1A88E5F700D7C8E2 /* bilgisayar2_t@3x.png */,
        9F31056E1A88E5F700D7C8E2 /* Nar_mavi_t.png */,
        9F31056F1A88E5F700D7C8E2 /* Nar_mavi_t@2x.png */,
        9F3105701A88E5F700D7C8E2 /* Nar_mavi_t@3x.png */,
        9F3105711A88E5F700D7C8E2 /* TL_beyaz_t.png */,
        9F3105721A88E5F700D7C8E2 /* TL_beyaz_t@2x.png */,
        9F3105731A88E5F700D7C8E2 /* TL_beyaz_t@3x.png */,
        9F3105741A88E5F700D7C8E2 /* TL_mavi_t.png */,
        9F3105751A88E5F700D7C8E2 /* TL_mavi_t@2x.png */,
        9F3105761A88E5F700D7C8E2 /* TL_mavi_t@3x.png */,
      );
      path = text;
      sourceTree = "<group>";
    };
    9F3105B51A88E5F700D7C8E2 /* unsorted */ = {
      isa = PBXGroup;
      children = (
        9F3105B61A88E5F700D7C8E2 /* carpi.png */,
        9F3105B71A88E5F700D7C8E2 /* carpi@2x.png */,
        9F3105B81A88E5F700D7C8E2 /* filterCarpi.png */,
        9F3105B91A88E5F700D7C8E2 /* filterCarpi@2x.png */,
        9F3105BA1A88E5F700D7C8E2 /* filterGray.png */,
        9F3105BB1A88E5F700D7C8E2 /* filterGray@2x.png */,
        9F3105BC1A88E5F700D7C8E2 /* filterSiyah.png */,
        9F3105BD1A88E5F700D7C8E2 /* filterSiyah@2x.png */,
        9F3105BE1A88E5F700D7C8E2 /* inceleme.png */,
        9F3105BF1A88E5F700D7C8E2 /* inceleme@2x.png */,
        9F3105C01A88E5F700D7C8E2 /* mavi4Mnt.png */,
        9F3105C11A88E5F700D7C8E2 /* mavi4Mnt@2x.png */,
        9F3105C21A88E5F700D7C8E2 /* RadioButton-Selected.png */,
        9F3105C31A88E5F700D7C8E2 /* RadioButton-Selected@2x.png */,
        9F3105C41A88E5F700D7C8E2 /* RadioButton-Unselected.png */,
        9F3105C51A88E5F700D7C8E2 /* RadioButton-Unselected@2x.png */,
        9F3105C61A88E5F700D7C8E2 /* search_white.png */,
        9F3105C71A88E5F700D7C8E2 /* search_white@2x.png */,
        9F3105CA1A88E5F700D7C8E2 /* TC_SS_default_chaticon.png */,
        9F3105CB1A88E5F700D7C8E2 /* TC_SS_default_chaticon@2x.png */,
        9F3105CC1A88E5F700D7C8E2 /* TC_SS_default_searchHL.png */,
        9F3105CD1A88E5F700D7C8E2 /* TC_SS_default_searchHL@2x.png */,
      );
      path = unsorted;
      sourceTree = "<group>";
    };
    9F3105CE1A88E5F700D7C8E2 /* Validation */ = {
      isa = PBXGroup;
      children = (
        9F3105CF1A88E5F700D7C8E2 /* validation_fail_icon.png */,
        9F3105D01A88E5F700D7C8E2 /* validation_fail_icon@2x.png */,
        9F3105D11A88E5F700D7C8E2 /* validation_ok_icon.png */,
        9F3105D21A88E5F700D7C8E2 /* validation_ok_icon@2x.png */,
      );
      path = Validation;
      sourceTree = "<group>";
    };
    9F3105D31A88E5F700D7C8E2 /* webview */ = {
      isa = PBXGroup;
      children = (
        9F3105D41A88E5F700D7C8E2 /* TC_MWV_back_arrow.png */,
        9F3105D51A88E5F700D7C8E2 /* TC_MWV_back_arrow@2x.png */,
        9F3105D61A88E5F700D7C8E2 /* TC_MWV_back_arrow@3x.png */,
        9F3105D71A88E5F700D7C8E2 /* TC_MWV_forward_arrow.png */,
        9F3105D81A88E5F700D7C8E2 /* TC_MWV_forward_arrow@2x.png */,
        9F3105D91A88E5F700D7C8E2 /* TC_MWV_forward_arrow@3x.png */,
        9F3105DA1A88E5F700D7C8E2 /* TC_MWV_logo.png */,
        9F3105DB1A88E5F700D7C8E2 /* TC_MWV_logo@2x.png */,
        9F3105DC1A88E5F700D7C8E2 /* TC_MWV_logo@3x.png */,
        9F3105DD1A88E5F700D7C8E2 /* TC_MWV_refresh_icon.png */,
        9F3105DE1A88E5F700D7C8E2 /* TC_MWV_refresh_icon@2x.png */,
        9F3105DF1A88E5F700D7C8E2 /* TC_MWV_refresh_icon@3x.png */,
        9F3105E01A88E5F700D7C8E2 /* TC_MWV_share_icon.png */,
        9F3105E11A88E5F700D7C8E2 /* TC_MWV_share_icon@2x.png */,
      );
      path = webview;
      sourceTree = "<group>";
    };
    9F3105E21A88E5F700D7C8E2 /* LaunchImages */ = {
      isa = PBXGroup;
      children = (
        9F3105E31A88E5F700D7C8E2 /* Default-568h@2x.png */,
        9F3105E41A88E5F700D7C8E2 /* Default.png */,
        9F3105E51A88E5F700D7C8E2 /* Default@2x.png */,
      );
      path = LaunchImages;
      sourceTree = "<group>";
    };
    9F3108EB1A88E81F00D7C8E2 /* Common */ = {
      isa = PBXGroup;
      children = (
        9F3108EC1A88E81F00D7C8E2 /* BaseView.h */,
        9F3108ED1A88E81F00D7C8E2 /* BaseView.m */,
        9F3108EE1A88E81F00D7C8E2 /* PagingScrollContainer.h */,
        9F3108EF1A88E81F00D7C8E2 /* PagingScrollContainer.m */,
        9F3108F01A88E81F00D7C8E2 /* PagingScrollContainer.xib */,
      );
      path = Common;
      sourceTree = "<group>";
    };
    9F4B57501A4ABF0B0055582A /* Stubs */ = {
      isa = PBXGroup;
      children = (
        9F4B57511A4ABF0B0055582A /* Guest */,
        9F4B575B1A4ABF0B0055582A /* Light */,
        9F4B57651A4ABF0B0055582A /* serviceLogin.json */,
      );
      path = Stubs;
      sourceTree = "<group>";
    };
    9F4B57511A4ABF0B0055582A /* Guest */ = {
      isa = PBXGroup;
      children = (
        9F027D251A8A3B10007B0F0C /* requestAuthToken.json */,
        9F4B57521A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.nolimit.notice&key=myAccountDashboardPageManager&type=0 */,
        9F4B57531A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.notice&key=myAccountDashboardPageManager&type=0 */,
        9F4B57541A4ABF0B0055582A /* cms.json?desiredKey=native.storelocator.free&key=commonPageManager&type=0 */,
        9F4B57551A4ABF0B0055582A /* cms.json?desiredKey=topup.native.weburl.tl&key=topUpPageManager&type=2 */,
        9F4B57561A4ABF0B0055582A /* giris.json */,
        9F4B57571A4ABF0B0055582A /* kampanyalar.json?size=6 */,
        9F4B57581A4ABF0B0055582A /* menu.json?custType=0&menuType=0 */,
        9F4B57591A4ABF0B0055582A /* property.json */,
        9F4B575A1A4ABF0B0055582A /* urun-ve-hizmetler.json?size=6 */,
        9FF2DE8F1A4C40390016523F /* topup.json?productType=1&payment=kk */,
        9FF2DE911A4C40650016523F /* topup.json?productType=7&payment=kk */,
        9FF2DE931A4C40910016523F /* kk-odeme.json */,
        9FF2DE951A4C40EF0016523F /* topup.json?productType=4&payment=kk */,
        9FF2DE971A4C410B0016523F /* topup.json?productType=2&payment=kk */,
      );
      path = Guest;
      sourceTree = "<group>";
    };
    9F4B575B1A4ABF0B0055582A /* Light */ = {
      isa = PBXGroup;
      children = (
        9F4B575C1A4ABF0B0055582A /* ayarlar */,
        9F4B575F1A4ABF0B0055582A /* dataprocesscheck.json?logintype=MSISDN */,
        9F4B57601A4ABF0B0055582A /* faturalar */,
        9F4B57631A4ABF0B0055582A /* hatmenu.json */,
        9F4B57641A4ABF0B0055582A /* kalankullanim.json */,
      );
      path = Light;
      sourceTree = "<group>";
    };
    9F4B575C1A4ABF0B0055582A /* ayarlar */ = {
      isa = PBXGroup;
      children = (
        9F4B575D1A4ABF0B0055582A /* hat.json?settingType=1 */,
        9F4B575E1A4ABF0B0055582A /* hatmenu.json */,
      );
      path = ayarlar;
      sourceTree = "<group>";
    };
    9F4B57601A4ABF0B0055582A /* faturalar */ = {
      isa = PBXGroup;
      children = (
        9F027D1F1A8A3A10007B0F0C /* itemised.json */,
        9F027D201A8A3A10007B0F0C /* odeme.json */,
        9F027D211A8A3A10007B0F0C /* summary.json */,
        9F4B57611A4ABF0B0055582A /* analiz.json */,
        9F4B57621A4ABF0B0055582A /* anasayfa.json */,
        9F8D6DEC1A91E4A800AECEC9 /* mail-gonder.json */,
      );
      path = faturalar;
      sourceTree = "<group>";
    };
    A51278AB191D188D002CFE51 /* PopulerServices */ = {
      isa = PBXGroup;
      children = (
        9F3102011A88E33D00D7C8E2 /* GBAlertView.xib */,
        9F3102021A88E33D00D7C8E2 /* ScrollThingyItemView.h */,
        9F3102031A88E33D00D7C8E2 /* ScrollThingyItemView.m */,
        9F3102041A88E33D00D7C8E2 /* ScrollThingyItemView.xib */,
        A51278B2191D1922002CFE51 /* OnePopulerServiceView.h */,
        A51278B3191D1922002CFE51 /* OnePopulerServiceView.m */,
        A51278B4191D1922002CFE51 /* PopulerServicesView.h */,
        A51278B5191D1922002CFE51 /* PopulerServicesView.m */,
      );
      name = PopulerServices;
      path = Topup;
      sourceTree = "<group>";
    };
    EC01E444181E410A00626834 /* Usage */ = {
      isa = PBXGroup;
      children = (
        9F3102601A88E4A000D7C8E2 /* DateSelectorTableViewCell.h */,
        9F3102611A88E4A000D7C8E2 /* DateSelectorTableViewCell.m */,
        9F3102621A88E4A000D7C8E2 /* DateSelectorTableViewCell.xib */,
        9F3102631A88E4A000D7C8E2 /* DateSelectorView.h */,
        9F3102641A88E4A000D7C8E2 /* DateSelectorView.m */,
        9F3102651A88E4A000D7C8E2 /* DateSelectorView.xib */,
        9F3102671A88E4A000D7C8E2 /* UsageFooterView.h */,
        9F3102681A88E4A000D7C8E2 /* UsageFooterView.m */,
        9F3102691A88E4A000D7C8E2 /* UsageFooterView.xib */,
        9F31026B1A88E4A000D7C8E2 /* UsageViewModel.h */,
        9F31026C1A88E4A000D7C8E2 /* UsageViewModel.m */,
        EC01E445181E411B00626834 /* MyUsageVC.h */,
        EC01E446181E411B00626834 /* MyUsageVC.m */,
        9F3102661A88E4A000D7C8E2 /* MyUsageVC.xib */,
        EC8E91D4181E4B660079F0CC /* UsageItemTableViewCell.h */,
        EC8E91D5181E4B660079F0CC /* UsageItemTableViewCell.m */,
        9F31026A1A88E4A000D7C8E2 /* UsageItemTableViewCell.xib */,
      );
      path = Usage;
      sourceTree = "<group>";
    };
    EC479AD1183A3ED4003DAC62 /* Notifications */ = {
      isa = PBXGroup;
      children = (
        EC479AD2183A3EE2003DAC62 /* NotificationsVC.h */,
        EC479AD3183A3EE2003DAC62 /* NotificationsVC.m */,
        8D8F9A8B1A9CA6E9003B0ACE /* NotificationsVC.xib */,
        EC479AD5183A4027003DAC62 /* NotificationTableViewCell.h */,
        EC479AD6183A4027003DAC62 /* NotificationTableViewCell.m */,
        8D8F9A8C1A9CA6E9003B0ACE /* NotificationTableViewCell.xib */,
      );
      path = Notifications;
      sourceTree = "<group>";
    };
    EC5D4FF01872F0EA00192CC6 /* InnerFrameworks */ = {
      isa = PBXGroup;
      children = (
        9CF2B2A11B4FF9D20095FBBE /* NetmeraSDK */,
        8DEE2C1E19AB7FFF00A6F5E9 /* Crashlytics */,
        8D3CACCA197920BD00FE36C5 /* Omniture */,
        ECDCCB4518C728D20029680A /* FacebookSDK.framework */,
        EC261EBD187AB8D4001BBBE7 /* GoogleMaps.bundle */,
        EC261EBB187AB8C0001BBBE7 /* GoogleMaps.framework */,
        8D82341519F91C6A00E81A3C /* TurkcellUpdater.framework */,
      );
      path = InnerFrameworks;
      sourceTree = "<group>";
    };
    EC5E45841845F6E300B77E37 /* MBProgressHUD */ = {
      isa = PBXGroup;
      children = (
        EC5E45851845F6E300B77E37 /* MBProgressHUD.h */,
        EC5E45861845F6E300B77E37 /* MBProgressHUD.m */,
      );
      path = MBProgressHUD;
      sourceTree = "<group>";
    };
    EC5E45871845F6E300B77E37 /* MLPAutoCompleteTextField */ = {
      isa = PBXGroup;
      children = (
        EC5E45881845F6E300B77E37 /* MLPAutoCompleteTextField.h */,
        EC5E45891845F6E300B77E37 /* MLPAutoCompleteTextField.m */,
        EC5E458A1845F6E300B77E37 /* MLPAutoCompleteTextFieldDataSource.h */,
        EC5E458B1845F6E300B77E37 /* MLPAutoCompleteTextFieldDelegate.h */,
        EC5E458C1845F6E300B77E37 /* MLPAutoCompletionObject.h */,
        EC5E458D1845F6E300B77E37 /* NSString+Levenshtein.h */,
        EC5E458E1845F6E300B77E37 /* NSString+Levenshtein.m */,
      );
      path = MLPAutoCompleteTextField;
      sourceTree = "<group>";
    };
    EC5E458F1845F6E300B77E37 /* RadioButton */ = {
      isa = PBXGroup;
      children = (
        EC5E45921845F6E300B77E37 /* RadioButton.h */,
        EC5E45931845F6E300B77E37 /* RadioButton.m */,
      );
      path = RadioButton;
      sourceTree = "<group>";
    };
    EC5E45941845F6E300B77E37 /* RTLabel */ = {
      isa = PBXGroup;
      children = (
        EC5E45951845F6E300B77E37 /* RTLabel.h */,
        EC5E45961845F6E300B77E37 /* RTLabel.m */,
      );
      path = RTLabel;
      sourceTree = "<group>";
    };
    EC65337E18891FB900AB9756 /* Stats */ = {
      isa = PBXGroup;
      children = (
        EC65337F18891FB900AB9756 /* Stats.h */,
        EC65338018891FB900AB9756 /* Stats.m */,
      );
      path = Stats;
      sourceTree = "<group>";
    };
    EC684FCC186C5B0800AF894F /* Helpers */ = {
      isa = PBXGroup;
      children = (
        EC709C9D18D87F0700B47D93 /* SHUncaughtExceptionHandler */,
        EC78247F189F8FEC00DACEFD /* FakeDataSourceHelper.h */,
        EC782480189F8FEC00DACEFD /* FakeDataSourceHelper.m */,
        EC684FCD186C5B1A00AF894F /* UDHelper.h */,
        EC684FCE186C5B1A00AF894F /* UDHelper.m */,
        ECF493E918A2712700546E09 /* UIHelper.h */,
        ECF493EA18A2712700546E09 /* UIHelper.m */,
        ECF493EC18A2733700546E09 /* FontHelper.h */,
        ECF493ED18A2733700546E09 /* FontHelper.m */,
        ECF493EF18A2739700546E09 /* LocalNotificationsHelper.h */,
        ECF493F018A2739700546E09 /* LocalNotificationsHelper.m */,
        ECF493F218A285CB00546E09 /* AlertHelper.h */,
        ECF493F318A285CB00546E09 /* AlertHelper.m */,
        9F4B57771A4AFAC70055582A /* AdjustHelper.h */,
        9F4B57781A4AFAC70055582A /* AdjustHelper.m */,
        9F77E6FD1ACB00EC00A5139F /* BeaconHelper.h */,
        9F77E6FE1ACB00ED00A5139F /* BeaconHelper.m */,
      );
      path = Helpers;
      sourceTree = "<group>";
    };
    EC709C9318D71EEF00B47D93 /* ProductAndServices */ = {
      isa = PBXGroup;
      children = (
        9F3101941A88E24800D7C8E2 /* ProductAndServiceView.h */,
        9F3101951A88E24800D7C8E2 /* ProductAndServiceView.m */,
        9F3101961A88E24800D7C8E2 /* ProductAndServiceView.xib */,
        9F3101971A88E24800D7C8E2 /* ProductAndServiceViewModel.h */,
        9F3101981A88E24800D7C8E2 /* ProductAndServiceViewModel.m */,
        EC709C9418D71EEF00B47D93 /* OneProductAndService.h */,
        EC709C9518D71EEF00B47D93 /* OneProductAndService.m */,
        EC709C9618D71EEF00B47D93 /* ProductAndServicesView.h */,
        EC709C9718D71EEF00B47D93 /* ProductAndServicesView.m */,
      );
      path = ProductAndServices;
      sourceTree = "<group>";
    };
    EC709C9D18D87F0700B47D93 /* SHUncaughtExceptionHandler */ = {
      isa = PBXGroup;
      children = (
        EC709C9E18D87F0700B47D93 /* SHUncaughtExceptionHandler.h */,
        EC709C9F18D87F0700B47D93 /* SHUncaughtExceptionHandler.m */,
      );
      path = SHUncaughtExceptionHandler;
      sourceTree = "<group>";
    };
    EC768B6E18C087C500313288 /* AXRatingView */ = {
      isa = PBXGroup;
      children = (
        EC768B6F18C087C500313288 /* AXRatingView.h */,
        EC768B7018C087C500313288 /* AXRatingView.m */,
      );
      path = AXRatingView;
      sourceTree = "<group>";
    };
    EC768B7218C09A3700313288 /* RSWeakifySelf */ = {
      isa = PBXGroup;
      children = (
        EC768B7318C09A3700313288 /* RSWeakifySelf.h */,
        EC768B7418C09A3700313288 /* RSWeakifySelf.m */,
      );
      path = RSWeakifySelf;
      sourceTree = "<group>";
    };
    EC79804817ABF100007295BD /* ISO8601DateFormatter */ = {
      isa = PBXGroup;
      children = (
        EC79804917ABF100007295BD /* ISO8601DateFormatter.h */,
        EC79804A17ABF100007295BD /* ISO8601DateFormatter.m */,
      );
      path = ISO8601DateFormatter;
      sourceTree = "<group>";
    };
    EC8009BD17A910220018D9A6 /* HMSegmentedControl */ = {
      isa = PBXGroup;
      children = (
        EC8009BE17A910220018D9A6 /* HMSegmentedControl.h */,
        EC8009BF17A910220018D9A6 /* HMSegmentedControl.m */,
      );
      path = HMSegmentedControl;
      sourceTree = "<group>";
    };
    EC97ACB41796BE4500AB780D /* RESTParamsHelper */ = {
      isa = PBXGroup;
      children = (
        EC97ACB51796BE4500AB780D /* AllowanceRESTHelper.h */,
        EC97ACB61796BE4500AB780D /* AllowanceRESTHelper.m */,
        EC97ACB71796BE4500AB780D /* BillRESTHelper.h */,
        EC97ACB81796BE4500AB780D /* BillRESTHelper.m */,
        EC97ACB91796BE4500AB780D /* NotificationRESTHelper.h */,
        EC97ACBA1796BE4500AB780D /* NotificationRESTHelper.m */,
        EC01E44B181E41F300626834 /* UsageRESTHelper.h */,
        EC01E44C181E41F300626834 /* UsageRESTHelper.m */,
      );
      path = RESTParamsHelper;
      sourceTree = "<group>";
    };
    ECA259D1185F40C00030ECFD /* MNT */ = {
      isa = PBXGroup;
      children = (
        8D2A3A741A94A7CA0073487B /* MNTVC.h */,
        8D2A3A751A94A7CA0073487B /* MNTVC.m */,
        8D2A3A761A94A7CA0073487B /* MNTVC.xib */,
      );
      path = MNT;
      sourceTree = "<group>";
    };
    ECA259D8185F40EF0030ECFD /* Home */ = {
      isa = PBXGroup;
      children = (
        ECA259DB185F40EF0030ECFD /* AppTourView.h */,
        ECA259DC185F40EF0030ECFD /* AppTourView.m */,
        9F3102531A88E48300D7C8E2 /* AppTourView.xib */,
        ECA259D9185F40EF0030ECFD /* HomeVC.h */,
        ECA259DA185F40EF0030ECFD /* HomeVC.m */,
        9F3102541A88E48300D7C8E2 /* HomeVC.xib */,
        ECA259DD185F40EF0030ECFD /* AnonymousHomeVC.h */,
        ECA259DE185F40EF0030ECFD /* AnonymousHomeVC.m */,
        9F3102521A88E48300D7C8E2 /* AnonymousHomeVC.xib */,
      );
      path = Home;
      sourceTree = "<group>";
    };
    ECA259DF185F40EF0030ECFD /* Login */ = {
      isa = PBXGroup;
      children = (
        88A1130A1ACD2C1200E79281 /* ChangePasswordVC.h */,
        88A1130B1ACD2C1200E79281 /* ChangePasswordVC.m */,
      );
      path = Login;
      sourceTree = "<group>";
    };
    ECA259EF185F45020030ECFD /* Bills */ = {
      isa = PBXGroup;
      children = (
        9F31023F1A88E46C00D7C8E2 /* BillAnalysisView.h */,
        9F3102401A88E46C00D7C8E2 /* BillAnalysisView.m */,
        9F3102411A88E46C00D7C8E2 /* BillAnalysisView.xib */,
        8D9934B01A89F67F004BEF44 /* BillAnalysisViewModel.h */,
        8D9934B11A89F67F004BEF44 /* BillAnalysisViewModel.m */,
        8D9F40D51A8B4ED4001503B5 /* BillDetailsViewModel.h */,
        8D9F40D61A8B4ED4001503B5 /* BillDetailsViewModel.m */,
        8D9F40D81A8B5D2C001503B5 /* BillDetailViewModel.h */,
        8D9F40D91A8B5D2C001503B5 /* BillDetailViewModel.m */,
        9F3102421A88E46C00D7C8E2 /* BillSummaryView.h */,
        9F3102431A88E46C00D7C8E2 /* BillSummaryView.m */,
        9F3102441A88E46C00D7C8E2 /* BillSummaryView.xib */,
        9F3102461A88E46C00D7C8E2 /* FoldableListView.h */,
        9F3102471A88E46C00D7C8E2 /* FoldableListView.m */,
        9F3102481A88E46C00D7C8E2 /* FoldableListView.xib */,
        ECA259F3185F45020030ECFD /* BillMenuButton.h */,
        ECA259F4185F45020030ECFD /* BillMenuButton.m */,
        ECA259F5185F45020030ECFD /* BillPageView.h */,
        ECA259F6185F45020030ECFD /* BillPageView.m */,
        ECA259F7185F45020030ECFD /* BillSummaryPageView.h */,
        ECA259F8185F45020030ECFD /* BillSummaryPageView.m */,
        ECA259F9185F45020030ECFD /* BillsVC.h */,
        ECA259FA185F45020030ECFD /* BillsVC.m */,
        9F3102451A88E46C00D7C8E2 /* BillsVC.xib */,
        ECA259FB185F45020030ECFD /* InternalBillSummaryView.h */,
        ECA259FC185F45020030ECFD /* InternalBillSummaryView.m */,
        8DB5009A1A95754B00DE9728 /* BillInvoiceDetailViewModel.h */,
        8DB5009B1A95754B00DE9728 /* BillInvoiceDetailViewModel.m */,
        ECA259FD185F45020030ECFD /* InternalBillVC.h */,
        ECA259FE185F45020030ECFD /* InternalBillVC.m */,
        8DB500981A956D8300DE9728 /* InternalBillVC.xib */,
        ECA259F0185F45020030ECFD /* Bill history button */,
        ECA259FF185F45020030ECFD /* Itemised */,
        ECA25A10185F45020030ECFD /* Payment */,
        ECA25A17185F45020030ECFD /* Stats */,
        ECA25A24185F45020030ECFD /* Summary Cell */,
      );
      path = Bills;
      sourceTree = "<group>";
    };
    ECA259F0185F45020030ECFD /* Bill history button */ = {
      isa = PBXGroup;
      children = (
        ECA259F1185F45020030ECFD /* BillHistoryButton.h */,
        ECA259F2185F45020030ECFD /* BillHistoryButton.m */,
      );
      path = "Bill history button";
      sourceTree = "<group>";
    };
    ECA259FF185F45020030ECFD /* Itemised */ = {
      isa = PBXGroup;
      children = (
        ECA25A00185F45020030ECFD /* BillItemsView.h */,
        ECA25A01185F45020030ECFD /* BillItemsView.m */,
        8D5F9BD51A8A8F850007CAEE /* BillDetailsView.h */,
        8D5F9BD61A8A8F850007CAEE /* BillDetailsView.m */,
        8D5F9BD81A8A8F950007CAEE /* BillDetailsView.xib */,
        ECA25A02185F45020030ECFD /* BillItemTableViewCell.h */,
        ECA25A03185F45020030ECFD /* BillItemTableViewCell.m */,
        8D943FEF1A8B65C200F6FE20 /* BillItemTableViewCell.xib */,
        8D943FF11A8B811500F6FE20 /* BillDetailsFooterView.h */,
        8D943FF21A8B811500F6FE20 /* BillDetailsFooterView.m */,
        8D943FF41A8B812600F6FE20 /* BillDetailsFooterView.xib */,
        ECA25A04185F45020030ECFD /* FilterOption.h */,
        ECA25A05185F45020030ECFD /* FilterOption.m */,
        ECA25A06185F45020030ECFD /* FilterOptionTableViewCell.h */,
        ECA25A07185F45020030ECFD /* FilterOptionTableViewCell.m */,
        8D495F591A8D62A700714784 /* FilterOptionTableViewCell.xib */,
        ECA25A08185F45020030ECFD /* ItemFilteringButton.h */,
        ECA25A09185F45020030ECFD /* ItemFilteringButton.m */,
        ECA25A0C185F45020030ECFD /* FilterHeaderView.h */,
        ECA25A0D185F45020030ECFD /* FilterHeaderView.m */,
        8DA035D81A8DF146006F8C88 /* FilterHeaderView.xib */,
        8DA035DC1A8E036E006F8C88 /* BillFilterFooterView.h */,
        8DA035DD1A8E036E006F8C88 /* BillFilterFooterView.m */,
        8DA035DF1A8E0388006F8C88 /* BillFilterFooterView.xib */,
        ECA25A0E185F45020030ECFD /* ItemSearchTextField.h */,
        ECA25A0F185F45020030ECFD /* ItemSearchTextField.m */,
      );
      path = Itemised;
      sourceTree = "<group>";
    };
    ECA25A10185F45020030ECFD /* Payment */ = {
      isa = PBXGroup;
      children = (
        ECA25A13185F45020030ECFD /* BillPaymentTextField.h */,
        ECA25A14185F45020030ECFD /* BillPaymentTextField.m */,
        ECA25A15185F45020030ECFD /* PayBillVC.h */,
        ECA25A16185F45020030ECFD /* PayBillVC.m */,
        9F027D291A8B5670007B0F0C /* PayBillVC.xib */,
      );
      path = Payment;
      sourceTree = "<group>";
    };
    ECA25A17185F45020030ECFD /* Stats */ = {
      isa = PBXGroup;
      children = (
        ECA25A18185F45020030ECFD /* BillStatButtonView.h */,
        ECA25A19185F45020030ECFD /* BillStatButtonView.m */,
        8D9934B31A8A01BF004BEF44 /* BillStatButtonView.xib */,
        8D9934B51A8A3FDD004BEF44 /* BillCompareView.h */,
        8D9934B61A8A3FDD004BEF44 /* BillCompareView.m */,
        8D9934B81A8A3FEA004BEF44 /* BillCompareView.xib */,
        8D9934BA1A8A41C6004BEF44 /* BillCompareItemView.h */,
        8D9934BB1A8A41C6004BEF44 /* BillCompareItemView.m */,
        8D9934BD1A8A41D5004BEF44 /* BillCompareItemView.xib */,
        ECA25A1C185F45020030ECFD /* MostNoticeableStatView.h */,
        ECA25A1D185F45020030ECFD /* MostNoticeableStatView.m */,
        8D9784461A8F9B6D00918E3B /* MostNoticeableStatView.xib */,
        ECA25A1E185F45020030ECFD /* MyBillStatsView.h */,
        ECA25A1F185F45020030ECFD /* MyBillStatsView.m */,
        ECA25A20185F45020030ECFD /* PeriodSliderView.h */,
        ECA25A21185F45020030ECFD /* PeriodSliderView.m */,
        8D2D6BFD1A8F8534003FBB1A /* PeriodSliderView.xib */,
        8DA035E31A8E3132006F8C88 /* BillAnalysisDetailViewModel.h */,
        8DA035E41A8E3132006F8C88 /* BillAnalysisDetailViewModel.m */,
        ECA25A22185F45020030ECFD /* BillAnalysisDetailVC.h */,
        ECA25A23185F45020030ECFD /* BillAnalysisDetailVC.m */,
        8DA035E11A8E268F006F8C88 /* BillAnalysisDetailVC.xib */,
      );
      path = Stats;
      sourceTree = "<group>";
    };
    ECA25A24185F45020030ECFD /* Summary Cell */ = {
      isa = PBXGroup;
      children = (
        ECA25A25185F45020030ECFD /* BillSummaryCellView.h */,
        ECA25A26185F45020030ECFD /* BillSummaryCellView.m */,
        9F3102501A88E47B00D7C8E2 /* BillSummaryCellView.xib */,
        ECA25A27185F45020030ECFD /* ScrollCellView.h */,
        ECA25A28185F45020030ECFD /* ScrollCellView.m */,
      );
      path = "Summary Cell";
      sourceTree = "<group>";
    };
    ECA25A5A185F4FC00030ECFD /* ComboBoxVC */ = {
      isa = PBXGroup;
      children = (
        ECA25A5B185F4FC00030ECFD /* ComboBoxVC.h */,
        ECA25A5C185F4FC00030ECFD /* ComboBoxVC.m */,
      );
      path = ComboBoxVC;
      sourceTree = "<group>";
    };
    ECA25A641860474C0030ECFD /* Menu */ = {
      isa = PBXGroup;
      children = (
        ECA25A671860474C0030ECFD /* MenuTableViewCell.h */,
        ECA25A681860474C0030ECFD /* MenuTableViewCell.m */,
      );
      path = Menu;
      sourceTree = "<group>";
    };
    ECA25A6B1860477D0030ECFD /* Page */ = {
      isa = PBXGroup;
      children = (
        ECA25A6C1860477D0030ECFD /* BillPageScrollView.h */,
        ECA25A6D1860477D0030ECFD /* BillPageScrollView.m */,
      );
      path = Page;
      sourceTree = "<group>";
    };
    ECA25A6F186047930030ECFD /* Loading */ = {
      isa = PBXGroup;
      children = (
        ECA25A70186047930030ECFD /* HUDView.h */,
        ECA25A71186047930030ECFD /* HUDView.m */,
        ECA25A72186047930030ECFD /* LoadingProgressChartView.h */,
        ECA25A73186047930030ECFD /* LoadingProgressChartView.m */,
      );
      path = Loading;
      sourceTree = "<group>";
    };
    ECA25A761860487C0030ECFD /* PageControl */ = {
      isa = PBXGroup;
      children = (
        ECA25A771860487C0030ECFD /* PageControl.h */,
        ECA25A781860487C0030ECFD /* PageControl.m */,
      );
      path = PageControl;
      sourceTree = "<group>";
    };
    ECA25A7A1860489C0030ECFD /* ScrollThingyView */ = {
      isa = PBXGroup;
      children = (
        9F3101C21A88E29100D7C8E2 /* ScrollThingyView.xib */,
        ECA25A7B1860489C0030ECFD /* ScrollThingyView.h */,
        ECA25A7C1860489C0030ECFD /* ScrollThingyView.m */,
      );
      path = ScrollThingyView;
      sourceTree = "<group>";
    };
    ECA25A7E1860499A0030ECFD /* NKColorSwitch */ = {
      isa = PBXGroup;
      children = (
        ECA25A7F1860499A0030ECFD /* NKColorSwitch.h */,
        ECA25A801860499A0030ECFD /* NKColorSwitch.m */,
      );
      path = NKColorSwitch;
      sourceTree = "<group>";
    };
    ECA25A8218604C150030ECFD /* CommonGestureRecognizerDelegate */ = {
      isa = PBXGroup;
      children = (
        ECA25A8318604C150030ECFD /* CommonGestureRecognizerDelegate.h */,
        ECA25A8418604C150030ECFD /* CommonGestureRecognizerDelegate.m */,
      );
      path = CommonGestureRecognizerDelegate;
      sourceTree = "<group>";
    };
    ECA25A8618607B390030ECFD /* Credit */ = {
      isa = PBXGroup;
      children = (
        9F3101BD1A88E28500D7C8E2 /* CreditView.xib */,
        9F3101BE1A88E28500D7C8E2 /* CreditViewModel.h */,
        9F3101BF1A88E28500D7C8E2 /* CreditViewModel.m */,
        ECA25A8718607B4F0030ECFD /* CreditView.h */,
        ECA25A8818607B4F0030ECFD /* CreditView.m */,
      );
      path = Credit;
      sourceTree = "<group>";
    };
    ECA2EC0C17C89CE2005F66F7 /* ODRefreshControl */ = {
      isa = PBXGroup;
      children = (
        EC78248F18A0ED4C00DACEFD /* CustomRefreshControl.h */,
        EC78249018A0ED4C00DACEFD /* CustomRefreshControl.m */,
      );
      path = ODRefreshControl;
      sourceTree = "<group>";
    };
    ECA43512185216AC00119D25 /* KeychainItemWrapper */ = {
      isa = PBXGroup;
      children = (
        ECA43513185216AC00119D25 /* KeychainItemWrapper.h */,
        ECA43514185216AC00119D25 /* KeychainItemWrapper.m */,
      );
      path = KeychainItemWrapper;
      sourceTree = "<group>";
    };
    ECA6729418D2E8F6004BF01F /* ComScore */ = {
      isa = PBXGroup;
      children = (
        8D9AC82D19FA47580028664F /* headers */,
        8D9AC83C19FA47580028664F /* libcomScore.a */,
      );
      path = ComScore;
      sourceTree = "<group>";
    };
    ECB618BA17AB7BC20070D0BD /* SBStackedBarChart */ = {
      isa = PBXGroup;
      children = (
        ECB618BB17AB7BC20070D0BD /* SBStackedBarChart.h */,
        ECB618BC17AB7BC20070D0BD /* SBStackedBarChart.m */,
      );
      path = SBStackedBarChart;
      sourceTree = "<group>";
    };
    ECB82148189793FD0014532C /* FirstTimeAppTour */ = {
      isa = PBXGroup;
      children = (
        ECB82149189794380014532C /* FirstTimeAppTourView.h */,
        ECB8214A189794380014532C /* FirstTimeAppTourView.m */,
        ECF6B57518AE0A1A0086C38B /* CircleView.h */,
        ECF6B57618AE0A1A0086C38B /* CircleView.m */,
      );
      path = FirstTimeAppTour;
      sourceTree = "<group>";
    };
    ECB821641897F3E70014532C /* GlowEffect */ = {
      isa = PBXGroup;
      children = (
        ECB821651897F3E70014532C /* UIView+Glow.h */,
        ECB821661897F3E70014532C /* UIView+Glow.m */,
      );
      path = GlowEffect;
      sourceTree = "<group>";
    };
    ECC8A24018C633C000DA52F4 /* SupportingFiles */ = {
      isa = PBXGroup;
      children = (
        ECC8A24118C633C000DA52F4 /* main.m */,
        ECC8A24218C633C000DA52F4 /* TurkcellHub-AppStore-Info.plist */,
        ECC8A24318C633C000DA52F4 /* TurkcellHub-Enterprise-Info.plist */,
        ECC8A24418C633C000DA52F4 /* TurkcellHub-Info.plist */,
        ECDCCB4918C747FE0029680A /* InfoPlistPreprocessorDefinitions.h */,
        ECC8A24518C633C000DA52F4 /* TurkcellHub-Prefix.pch */,
      );
      path = SupportingFiles;
      sourceTree = "<group>";
    };
    ECCFE3FF17A28C9D0090B080 /* PCSimpleLineChartView */ = {
      isa = PBXGroup;
      children = (
        F33307C317A50C9900E8A9C1 /* PCSimpleLineChartView.h */,
        F33307C417A50C9900E8A9C1 /* PCSimpleLineChartView.m */,
      );
      path = PCSimpleLineChartView;
      sourceTree = "<group>";
    };
    ECCFE44817A792240090B080 /* DSBarChart */ = {
      isa = PBXGroup;
      children = (
        ECCFE44917A792240090B080 /* DSBarChart.h */,
        ECCFE44A17A792240090B080 /* DSBarChart.m */,
      );
      path = DSBarChart;
      sourceTree = "<group>";
    };
    ECF493D818A22BA700546E09 /* PNLineChart */ = {
      isa = PBXGroup;
      children = (
        ECF493E318A22C6000546E09 /* PNChartLabel.h */,
        ECF493E418A22C6000546E09 /* PNChartLabel.m */,
        ECF493E518A22C6000546E09 /* PNColor.h */,
        ECF493E618A22C6000546E09 /* PNColor.m */,
        ECF493D918A22BA700546E09 /* PNChartDelegate.h */,
        ECF493DA18A22BA700546E09 /* PNLineChart.h */,
        ECF493DB18A22BA700546E09 /* PNLineChart.m */,
        ECF493DC18A22BA700546E09 /* PNLineChartData.h */,
        ECF493DD18A22BA700546E09 /* PNLineChartData.m */,
        ECF493DE18A22BA700546E09 /* PNLineChartDataItem.h */,
        ECF493DF18A22BA700546E09 /* PNLineChartDataItem.m */,
      );
      path = PNLineChart;
      sourceTree = "<group>";
    };
    ECF6B59118AE188B0086C38B /* FTUtils */ = {
      isa = PBXGroup;
      children = (
        ECF6B59218AE188B0086C38B /* FTAnimation+UIView.h */,
        ECF6B59318AE188B0086C38B /* FTAnimation+UIView.m */,
        ECF6B59418AE188B0086C38B /* FTAnimation.h */,
        ECF6B59518AE188B0086C38B /* FTAnimationManager.h */,
        ECF6B59618AE188B0086C38B /* FTAnimationManager.m */,
        ECF6B59718AE188B0086C38B /* FTUtils+NSObject.h */,
        ECF6B59818AE188B0086C38B /* FTUtils+NSObject.m */,
        ECF6B59918AE188B0086C38B /* FTUtils+UIGestureRecognizer.h */,
        ECF6B59A18AE188B0086C38B /* FTUtils+UIGestureRecognizer.m */,
        ECF6B59B18AE188B0086C38B /* FTUtils.h */,
      );
      path = FTUtils;
      sourceTree = "<group>";
    };
    ECF6D24F181A5F5100B281CB /* Custom */ = {
      isa = PBXGroup;
      children = (
        68BA7D301822843400F951DB /* ValidationalTextField.h */,
        68BA7D311822843400F951DB /* ValidationalTextField.m */,
      );
      path = Custom;
      sourceTree = "<group>";
    };
    F33307A117A5096B00E8A9C1 /* ResponseModels */ = {
      isa = PBXGroup;
      children = (
        F33307A217A5096B00E8A9C1 /* ResponseStatus.h */,
        F33307A317A5096B00E8A9C1 /* ResponseStatus.m */,
      );
      path = ResponseModels;
      sourceTree = "<group>";
    };
    F346F9441793E7CE008D4164 = {
      isa = PBXGroup;
      children = (
        F346F9561793E7CE008D4164 /* TurkcellHub */,
        9F027D1D1A89FBCD007B0F0C /* Launch Screen.xib */,
        8D8F9A891A9C8499003B0ACE /* Images.xcassets */,
        F346F94F1793E7CE008D4164 /* Frameworks */,
        F346F94E1793E7CE008D4164 /* Products */,
        8B130AB8884318E1D1D3E9E2 /* Pods */,
      );
      sourceTree = "<group>";
      usesTabs = 1;
    };
    F346F94E1793E7CE008D4164 /* Products */ = {
      isa = PBXGroup;
      children = (
        F346F94D1793E7CE008D4164 /* TurkcellHub.app */,
      );
      name = Products;
      sourceTree = "<group>";
    };
    F346F94F1793E7CE008D4164 /* Frameworks */ = {
      isa = PBXGroup;
      children = (
        9F77E6FB1ACAFFE500A5139F /* AdSupport.framework */,
        9F77E6F91ACAFFDF00A5139F /* CoreBluetooth.framework */,
        88A113181ACE862100E79281 /* Accelerate.framework */,
        8DB1001319C19185008CAE6C /* LocalAuthentication.framework */,
        8D6908B519A1ED7400E7A427 /* iAd.framework */,
        8D3CACD0197921B000FE36C5 /* libsqlite3.dylib */,
        EC1A0DC418DB05CA00F4B769 /* AudioToolbox.framework */,
        EC5B601418C894B300485F7A /* Twitter.framework */,
        EC5B601218C894AE00485F7A /* Accounts.framework */,
        68ADD03D17EB7D5700EDA98A /* libicucore.dylib */,
        68ADD03B17EB7D3A00EDA98A /* libc++.dylib */,
        ECA2EC1A17C89EAF005F66F7 /* libz.dylib */,
        EC67D810188FFDC800911F61 /* CoreFoundation.framework */,
        EC684FCA186C4FB000AF894F /* CFNetwork.framework */,
        6841FB69184515B60064F061 /* Security.framework */,
        681123B01827C8D700EB716B /* CoreTelephony.framework */,
        6858973917F56EB1000D763B /* AssetsLibrary.framework */,
        683B70C417F1AA6D004180C9 /* MessageUI.framework */,
        68544ADB17ECCC9C00B3A69D /* AddressBookUI.framework */,
        68544AD917ECCC7600B3A69D /* AddressBook.framework */,
        68ADD03F17EB7D6800EDA98A /* OpenGLES.framework */,
        68ADD03917EB7D2900EDA98A /* ImageIO.framework */,
        68ADD03717EB7D1C00EDA98A /* GLKit.framework */,
        68ADD03517EB7D1100EDA98A /* CoreText.framework */,
        ECA2EC1517C89E70005F66F7 /* CoreData.framework */,
        F30B912117BDFC8E002EDC98 /* CoreLocation.framework */,
        682C208B17951F93004633EB /* MapKit.framework */,
        F34601DC1793ECA9008D4164 /* MobileCoreServices.framework */,
        F34601DA1793EC76008D4164 /* SystemConfiguration.framework */,
        F34601D81793EC71008D4164 /* QuartzCore.framework */,
        F346F9501793E7CE008D4164 /* UIKit.framework */,
        F346F9521793E7CE008D4164 /* Foundation.framework */,
        F346F9541793E7CE008D4164 /* CoreGraphics.framework */,
        3FDF25214F9849DAA5743F50 /* libPods.a */,
      );
      name = Frameworks;
      sourceTree = "<group>";
    };
    F346F9561793E7CE008D4164 /* TurkcellHub */ = {
      isa = PBXGroup;
      children = (
        04C1A2BE1928D98C00411E4E /* readme.txt */,
        F346F95F1793E7CE008D4164 /* AppDelegate.h */,
        F346F9601793E7CE008D4164 /* AppDelegate.m */,
        ECC8A24018C633C000DA52F4 /* SupportingFiles */,
        EC5D4FF01872F0EA00192CC6 /* InnerFrameworks */,
        EC684FCC186C5B0800AF894F /* Helpers */,
        68542C1517F016AA004DEFD7 /* Views */,
        68542B6717F01695004DEFD7 /* Controllers */,
        F346F9751793EB70008D4164 /* ThirdParty */,
        F346F9981793EB70008D4164 /* Categories */,
        F346F9A91793EB70008D4164 /* Classes */,
        F346F9AA1793EB70008D4164 /* REST */,
        F346F9AB1793EB70008D4164 /* Utility */,
        9F3102C11A88E5F600D7C8E2 /* Resources */,
      );
      path = TurkcellHub;
      sourceTree = "<group>";
    };
    F346F9751793EB70008D4164 /* ThirdParty */ = {
      isa = PBXGroup;
      children = (
        9F2C30921AA49F8000C293EC /* CurioSDK */,
        88A112E71ACC76D200E79281 /* AFNetworking */,
        8D82341719F91F4200E81A3C /* GoogleAnalytics_3.09 */,
        ECA6729418D2E8F6004BF01F /* ComScore */,
        EC768B7218C09A3700313288 /* RSWeakifySelf */,
        EC768B6E18C087C500313288 /* AXRatingView */,
        ECF6B59118AE188B0086C38B /* FTUtils */,
        ECF493D818A22BA700546E09 /* PNLineChart */,
        ECB821641897F3E70014532C /* GlowEffect */,
        EC65337E18891FB900AB9756 /* Stats */,
        ECA25A7E1860499A0030ECFD /* NKColorSwitch */,
        ECA25A5A185F4FC00030ECFD /* ComboBoxVC */,
        ECA43512185216AC00119D25 /* KeychainItemWrapper */,
        EC5E45841845F6E300B77E37 /* MBProgressHUD */,
        EC5E45871845F6E300B77E37 /* MLPAutoCompleteTextField */,
        EC5E458F1845F6E300B77E37 /* RadioButton */,
        EC5E45941845F6E300B77E37 /* RTLabel */,
        682B310A1843759000080490 /* SIAlertView */,
        6878B58517FABDF70008A26A /* RATreeView */,
        6870978C17F018D7004836A6 /* ECSlidingViewController */,
        689ECE7F17E2D4E90028BA0D /* iCarousel */,
        684C027717D9A9B700F432ED /* Pickers */,
        ECA2EC0C17C89CE2005F66F7 /* ODRefreshControl */,
        EC79804817ABF100007295BD /* ISO8601DateFormatter */,
        ECB618BA17AB7BC20070D0BD /* SBStackedBarChart */,
        EC8009BD17A910220018D9A6 /* HMSegmentedControl */,
        ECCFE44817A792240090B080 /* DSBarChart */,
        ECCFE3FF17A28C9D0090B080 /* PCSimpleLineChartView */,
      );
      path = ThirdParty;
      sourceTree = "<group>";
    };
    F346F9981793EB70008D4164 /* Categories */ = {
      isa = PBXGroup;
      children = (
        6809803317F0170800984FF5 /* REST */,
        6845D1F1184B118F00A2A566 /* NSString+Extensions.h */,
        9F3102AB1A88E50600D7C8E2 /* UINavigationBar+Extensions.h */,
        9F3102AC1A88E50600D7C8E2 /* UINavigationBar+Extensions.m */,
        9F3102AD1A88E50600D7C8E2 /* UITableView+Empty.h */,
        9F3102AE1A88E50600D7C8E2 /* UITableView+Empty.m */,
        9F77E7001ACC0EA700A5139F /* NSData+Base64V2.h */,
        9F77E7011ACC0EA700A5139F /* NSData+Base64V2.m */,
        9F3102AF1A88E50600D7C8E2 /* NSNull+Enumeration.h */,
        9F3102B01A88E50600D7C8E2 /* NSNull+Enumeration.m */,
        6845D1F2184B118F00A2A566 /* NSString+Extensions.m */,
        6845D1F3184B118F00A2A566 /* UIViewController+Extensions.h */,
        6845D1F4184B118F00A2A566 /* UIViewController+Extensions.m */,
        EC3A34D618487AA000CA941E /* UIApplication+Extensions.h */,
        EC3A34D718487AA000CA941E /* UIApplication+Extensions.m */,
        F30B90F317BDF9CF002EDC98 /* NSObject+NullRemoving.h */,
        F30B90F417BDF9CF002EDC98 /* NSObject+NullRemoving.m */,
        683E1F521794923100F5C42A /* UIView+GBAnimate.h */,
        683E1F531794923100F5C42A /* UIView+GBAnimate.m */,
        F346F99F1793EB70008D4164 /* UIImage+Tools.h */,
        F346F9A01793EB70008D4164 /* UIImage+Tools.m */,
        F346F9A31793EB70008D4164 /* UIView+Effects.h */,
        F346F9A41793EB70008D4164 /* UIView+Effects.m */,
        F346F9A51793EB70008D4164 /* UIView+Layout.h */,
        F346F9A61793EB70008D4164 /* UIView+Layout.m */,
        ECB618C617AB93BD0070D0BD /* UIView+HUD.h */,
        ECB618C717AB93BD0070D0BD /* UIView+HUD.m */,
        687F6D151805796B0040BF5D /* MKMapView+ZoomLevel.h */,
        687F6D161805796B0040BF5D /* MKMapView+ZoomLevel.m */,
        ECA259C8185F02260030ECFD /* NSArray+Extensions.h */,
        ECA259C9185F02260030ECFD /* NSArray+Extensions.m */,
        EC6D433218D1E6F80036E4FA /* NSMutableDictionary+Extensions.h */,
        EC6D433318D1E6F80036E4FA /* NSMutableDictionary+Extensions.m */,
        ECA25A931861D1C10030ECFD /* NSError+Extensions.h */,
        ECA25A941861D1C10030ECFD /* NSError+Extensions.m */,
        EC261EB51876D630001BBBE7 /* NSException+Extensions.h */,
        EC261EB61876D630001BBBE7 /* NSException+Extensions.m */,
        EC65338518896E3800AB9756 /* UIImage+NoCached.h */,
        EC65338618896E3800AB9756 /* UIImage+NoCached.m */,
        EC7B43A518B2451100FC0334 /* UIColor+SharedColors.h */,
        EC7B43A618B2451100FC0334 /* UIColor+SharedColors.m */,
        A51FA588190815C500737236 /* NSMutableURLRequest+Cookie.h */,
        A51FA589190815C500737236 /* NSMutableURLRequest+Cookie.m */,
        8D89BE591A975B300060B71A /* UIView+Badge.h */,
        8D89BE5A1A975B300060B71A /* UIView+Badge.m */,
      );
      path = Categories;
      sourceTree = "<group>";
    };
    F346F9A91793EB70008D4164 /* Classes */ = {
      isa = PBXGroup;
      children = (
        ECA25A8218604C150030ECFD /* CommonGestureRecognizerDelegate */,
        F33307A117A5096B00E8A9C1 /* ResponseModels */,
        ECBE23F41849D2C60091329E /* NotificationCategory.h */,
        ECBE23F51849D2C60091329E /* NotificationCategory.m */,
        EC5E45711845DD5200B77E37 /* MenuItem.h */,
        EC5E45721845DD5200B77E37 /* MenuItem.m */,
        6803A5F417F98C4200EF94B0 /* SearchResultObject.h */,
        6803A5F517F98C4200EF94B0 /* SearchResultObject.m */,
        F333079B17A5096B00E8A9C1 /* AccountObject.h */,
        F333079C17A5096B00E8A9C1 /* AccountObject.m */,
        EC261EB81876E3EB001BBBE7 /* CustomException.h */,
        EC261EB91876E3EB001BBBE7 /* CustomException.m */,
        EC67D8121890040900911F61 /* CustomURL.h */,
        EC67D8131890040900911F61 /* CustomURL.m */,
      );
      path = Classes;
      sourceTree = "<group>";
    };
    F346F9AA1793EB70008D4164 /* REST */ = {
      isa = PBXGroup;
      children = (
        9F4B57501A4ABF0B0055582A /* Stubs */,
        EC97ACB41796BE4500AB780D /* RESTParamsHelper */,
        684C029B17D9EDAF00F432ED /* BaseRest.h */,
        684C029C17D9EDAF00F432ED /* BaseRest.m */,
        88A1130D1ACD2CB200E79281 /* LoginRest.h */,
        88A1130E1ACD2CB200E79281 /* LoginRest.m */,
        6878B54417FA95630008A26A /* MenuRest.h */,
        6878B54517FA95630008A26A /* MenuRest.m */,
        6870978917F01814004836A6 /* BillRest.h */,
        6870978A17F01814004836A6 /* BillRest.m */,
        68018F9717EAD3DD00A9950A /* UpdateHelper.h */,
        68018F9817EAD3DD00A9950A /* UpdateHelper.m */,
        F30B911517BDFAA3002EDC98 /* SearchRest.h */,
        F30B911617BDFAA3002EDC98 /* SearchRest.m */,
        F30B911717BDFAA3002EDC98 /* StoreLocatorRest.h */,
        F30B911817BDFAA3002EDC98 /* StoreLocatorRest.m */,
        ECB618C217AB7BE70070D0BD /* HomeRest.h */,
        ECB618C317AB7BE70070D0BD /* HomeRest.m */,
        ECCFE45917A7D1930090B080 /* SettingsRest.h */,
        ECCFE45A17A7D1940090B080 /* SettingsRest.m */,
        F34601EF1793F469008D4164 /* BaseHTTPClient.h */,
        F34601F31793F469008D4164 /* BaseHTTPClient.m */,
        F361E2B717BE37DE00C56475 /* TopUpRest.h */,
        F361E2B817BE37DE00C56475 /* TopUpRest.m */,
        EC01E448181E41DE00626834 /* UsageRest.h */,
        EC01E449181E41DE00626834 /* UsageRest.m */,
        685F8413183124C100034364 /* MNTREST.h */,
        685F8414183124C100034364 /* MNTREST.m */,
        685F841B1831491500034364 /* UploadRest.h */,
        685F841C1831491500034364 /* UploadRest.m */,
        6871F8B7183CD7D10049F05A /* ChatRest.h */,
        6871F8B8183CD7D10049F05A /* ChatRest.m */,
        6841FB6618450EE70064F061 /* APNRest.h */,
        6841FB6718450EE70064F061 /* APNRest.m */,
        EC3C116618589AF400E04224 /* CMSRest.h */,
        EC3C116718589AF400E04224 /* CMSRest.m */,
        EC709CA118D87FAF00B47D93 /* PropertyRest.h */,
        EC709CA218D87FAF00B47D93 /* PropertyRest.m */,
        EC261EB018759D4B001BBBE7 /* LoggingRest.h */,
        EC261EB118759D4B001BBBE7 /* LoggingRest.m */,
        EC5B600F18C8655300485F7A /* NetmeraHelper.h */,
        EC5B601018C8655300485F7A /* NetmeraHelper.m */,
        ED20E4AC1933419D002ABE21 /* OMCCRest.h */,
        ED20E4AD1933419D002ABE21 /* OMCCRest.m */,
      );
      path = REST;
      sourceTree = "<group>";
    };
    F346F9AB1793EB70008D4164 /* Utility */ = {
      isa = PBXGroup;
      children = (
        9F3102BA1A88E57900D7C8E2 /* AppStatics.h */,
        9F3102BB1A88E57900D7C8E2 /* AppStatics.m */,
        EC78247E189F8EC000DACEFD /* Settings.h */,
        EC1F684718CDF1F500DEAAC1 /* NetmeraTagEventSettings.h */,
        F34601CE1793EC2C008D4164 /* Constants.h */,
        EC709C9218D4A22300B47D93 /* SDKKeys.h */,
        F34601D21793EC2C008D4164 /* Logging.h */,
        ECCF71CA1796A91E00EC992B /* Enums.h */,
        EC782488189F9CDE00DACEFD /* Colors.h */,
        EC782489189F9D4600DACEFD /* URLs.h */,
        6817852417E83A150038C04B /* MyCLController.h */,
        6817852517E83A150038C04B /* MyCLController.m */,
        F34601D11793EC2C008D4164 /* AppSingletonObject.h */,
        F34601D01793EC2C008D4164 /* AppSingletonObject.m */,
      );
      path = Utility;
      sourceTree = "<group>";
    };
/* End PBXGroup section */

/* Begin PBXNativeTarget section */
    F346F94C1793E7CE008D4164 /* TurkcellHub */ = {
      isa = PBXNativeTarget;
      buildConfigurationList = F346F9701793E7CE008D4164 /* Build configuration list for PBXNativeTarget "TurkcellHub" */;
      buildPhases = (
        FE08A2BF1F614169907536BF /* Check Pods Manifest.lock */,
        F346F9491793E7CE008D4164 /* Sources */,
        F346F94A1793E7CE008D4164 /* Frameworks */,
        F346F94B1793E7CE008D4164 /* Resources */,
        ECA860D218D1B43C00A65EC0 /* Run Script */,
        BE1E1C0B9F7245C98A3075D0 /* Copy Pods Resources */,
      );
      buildRules = (
      );
      dependencies = (
      );
      name = TurkcellHub;
      productName = TurkcellHub;
      productReference = F346F94D1793E7CE008D4164 /* TurkcellHub.app */;
      productType = "com.apple.product-type.application";
    };
/* End PBXNativeTarget section */

/* Begin PBXProject section */
    F346F9451793E7CE008D4164 /* Project object */ = {
      isa = PBXProject;
      attributes = {
        LastUpgradeCheck = 0460;
        ORGANIZATIONNAME = Turkcell;
        TargetAttributes = {
          F346F94C1793E7CE008D4164 = {
            DevelopmentTeam = F49E5GW326;
            SystemCapabilities = {
              com.apple.BackgroundModes = {
                enabled = 0;
              };
            };
          };
        };
      };
      buildConfigurationList = F346F9481793E7CE008D4164 /* Build configuration list for PBXProject "TurkcellHub" */;
      compatibilityVersion = "Xcode 3.2";
      developmentRegion = English;
      hasScannedForEncodings = 0;
      knownRegions = (
        en,
        tr,
      );
      mainGroup = F346F9441793E7CE008D4164;
      productRefGroup = F346F94E1793E7CE008D4164 /* Products */;
      projectDirPath = "";
      projectRoot = "";
      targets = (
        F346F94C1793E7CE008D4164 /* TurkcellHub */,
      );
    };
/* End PBXProject section */

/* Begin PBXResourcesBuildPhase section */
    F346F94B1793E7CE008D4164 /* Resources */ = {
      isa = PBXResourcesBuildPhase;
      buildActionMask = 2147483647;
      files = (
        9F3107A01A88E5F700D7C8E2 /* grayphoneicon.png in Resources */,
        9F3108D41A88E5F800D7C8E2 /* validation_ok_icon.png in Resources */,
        9F3107741A88E5F700D7C8E2 /* alert_icon_success@2x.png in Resources */,
        9F3108181A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@2x.png in Resources */,
        9F3108D11A88E5F700D7C8E2 /* TC_SS_default_searchHL@2x.png in Resources */,
        9F3106381A88E5F700D7C8E2 /* AllowanceBill_Icon_Other_selected.png in Resources */,
        9F31077B1A88E5F700D7C8E2 /* menu_icon_white.png in Resources */,
        9F31083F1A88E5F700D7C8E2 /* RG_tu_arrow07_UP@2x.png in Resources */,
        9F3108151A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@2x.png in Resources */,
        9F3101EA1A88E31400D7C8E2 /* FilterButton.xib in Resources */,
        9F3107991A88E5F700D7C8E2 /* face@2x.png in Resources */,
        9F3108011A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@3x.png in Resources */,
        9F3107EF1A88E5F700D7C8E2 /* Tc_SL_searchbox_default@2x.png in Resources */,
        9F3108871A88E5F700D7C8E2 /* tc_master.png in Resources */,
        9F3106771A88E5F700D7C8E2 /* RG_mb_itemised_icon_ON.png in Resources */,
        9F31060B1A88E5F700D7C8E2 /* RG_SS_homepage_searchbox_active1.png in Resources */,
        9F31078D1A88E5F700D7C8E2 /* displayTopUpModule.png in Resources */,
        9F3108471A88E5F700D7C8E2 /* buttonGray.png in Resources */,
        9F3107D21A88E5F700D7C8E2 /* mavi@2x.png in Resources */,
        9F3108001A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT@2x.png in Resources */,
        9F3105FA1A88E5F700D7C8E2 /* RG_tu_default_profile.png in Resources */,
        9F31082B1A88E5F700D7C8E2 /* RG_tu_arrow012_UP@3x.png in Resources */,
        9F3108701A88E5F700D7C8E2 /* bilgisayar2_t.png in Resources */,
        9F3107BA1A88E5F700D7C8E2 /* TC_sett_password.png in Resources */,
        9F3105FD1A88E5F700D7C8E2 /* RG_tu_info_btn@2x.png in Resources */,
        9F31079F1A88E5F700D7C8E2 /* fotoSec@2x.png in Resources */,
        9F3106301A88E5F700D7C8E2 /* AllowanceBill_Icon_Data@2x.png in Resources */,
        9F4B57661A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.nolimit.notice&key=myAccountDashboardPageManager&type=0 in Resources */,
        9F3105F51A88E5F700D7C8E2 /* RG_TU_securitydigits@2x.png in Resources */,
        9F3106421A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice@2x.png in Resources */,
        9F3108B21A88E5F700D7C8E2 /* topup_selected_op.png in Resources */,
        9F3108031A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@2x.png in Resources */,
        9F3108D91A88E5F800D7C8E2 /* TC_MWV_forward_arrow.png in Resources */,
        9F31079B1A88E5F700D7C8E2 /* fotoCarpi@2x.png in Resources */,
        9F3107FF1A88E5F700D7C8E2 /* TC_tu_arrow011_RIGHT.png in Resources */,
        9F3107B31A88E5F700D7C8E2 /* TC_sett_line@2x.png in Resources */,
        9F3106511A88E5F700D7C8E2 /* cocuk3@2x.png in Resources */,
        9F3106621A88E5F700D7C8E2 /* close_icon_white.png in Resources */,
        9F31067A1A88E5F700D7C8E2 /* RG_mb_stats_icon_OFF@2x.png in Resources */,
        9F3107BD1A88E5F700D7C8E2 /* TC_sett_sms@2x.png in Resources */,
        8D5456591A93634800C2F7B5 /* StoreWorkHoursCell.xib in Resources */,
        9F3108951A88E5F700D7C8E2 /* TC_tu_back_arrow@2x.png in Resources */,
        9F3102741A88E4A000D7C8E2 /* UsageItemTableViewCell.xib in Resources */,
        9F31087E1A88E5F700D7C8E2 /* TL_gri@3x.png in Resources */,
        9F3108A11A88E5F700D7C8E2 /* TC_tu_main_btn@3x.png in Resources */,
        9F3108691A88E5F700D7C8E2 /* Nar_gri@3x.png in Resources */,
        9F4B576A1A4ABF0B0055582A /* giris.json in Resources */,
        8D54565D1A940FA600C2F7B5 /* TimView.xib in Resources */,
        9F31023E1A88E44100D7C8E2 /* WebVC.xib in Resources */,
        9CF2B2C11B4FF9D30095FBBE /* Silence.wav in Resources */,
        9F3108291A88E5F700D7C8E2 /* RG_tu_arrow012_UP.png in Resources */,
        9F3105FE1A88E5F700D7C8E2 /* RG_tu_textfield_OFF.png in Resources */,
        9F31067E1A88E5F700D7C8E2 /* RG_mb_summary_icon_OFF@2x.png in Resources */,
        9F3102AA1A88E4C700D7C8E2 /* PayWithTLCreditView.xib in Resources */,
        9F3108C51A88E5F700D7C8E2 /* mavi4Mnt@2x.png in Resources */,
        9F31073D1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle.png in Resources */,
        8DB500971A955FF700DE9728 /* NextPrevView.xib in Resources */,
        9F31085F1A88E5F700D7C8E2 /* 3G@2x.png in Resources */,
        9F3108DA1A88E5F800D7C8E2 /* TC_MWV_forward_arrow@2x.png in Resources */,
        9F3108BE1A88E5F700D7C8E2 /* filterGray.png in Resources */,
        9F3108BC1A88E5F700D7C8E2 /* filterCarpi.png in Resources */,
        8DA035E21A8E268F006F8C88 /* BillAnalysisDetailVC.xib in Resources */,
        9F31066D1A88E5F700D7C8E2 /* RG_calendar_icon@2x.png in Resources */,
        9F3106A41A88E5F700D7C8E2 /* finger_print@2x.png in Resources */,
        9F31088D1A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@3x.png in Resources */,
        9F3106781A88E5F700D7C8E2 /* RG_mb_itemised_icon_ON@2x.png in Resources */,
        9F3107861A88E5F700D7C8E2 /* displayBillAnalysisModule@2x.png in Resources */,
        9F31078F1A88E5F700D7C8E2 /* displayUsageModule.png in Resources */,
        9F3107F91A88E5F700D7C8E2 /* turuncu@2x.png in Resources */,
        9F31063A1A88E5F700D7C8E2 /* AllowanceBill_Icon_Other_selected@3x.png in Resources */,
        9F3107591A88E5F700D7C8E2 /* login_sms_sending_image@2x.png in Resources */,
        9F3101EC1A88E31400D7C8E2 /* FilterDirectView.xib in Resources */,
        9F3107FD1A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@2x.png in Resources */,
        9F31084E1A88E5F700D7C8E2 /* check@2x.png in Resources */,
        9F3108541A88E5F700D7C8E2 /* close_icon_blue@2x.png in Resources */,
        9F31083A1A88E5F700D7C8E2 /* RG_tu_arrow05_UP@3x.png in Resources */,
        9F3108421A88E5F700D7C8E2 /* RG_tu_arrow08_UP@2x.png in Resources */,
        9F3106A11A88E5F700D7C8E2 /* close_keyboard_icon.png in Resources */,
        68542C0E17F01695004DEFD7 /* PaymentSuccessVC.xib in Resources */,
        9F31089F1A88E5F700D7C8E2 /* TC_tu_main_btn.png in Resources */,
        9F3108C11A88E5F700D7C8E2 /* filterSiyah@2x.png in Resources */,
        9F31089E1A88E5F700D7C8E2 /* TC_tu_info_btn@2x.png in Resources */,
        9F3106361A88E5F700D7C8E2 /* AllowanceBill_Icon_Other@2x.png in Resources */,
        9F3108161A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT@3x.png in Resources */,
        9F31089D1A88E5F700D7C8E2 /* TC_tu_info_btn.png in Resources */,
        9F3107901A88E5F700D7C8E2 /* displayUsageModule@2x.png in Resources */,
        9F31063E1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS_selected.png in Resources */,
        9F3107C61A88E5F700D7C8E2 /* deepPurple@2x.png in Resources */,
        9F3108E71A88E5F800D7C8E2 /* Maltepe_Location.gpx in Resources */,
        9F3108E01A88E5F800D7C8E2 /* TC_MWV_refresh_icon@2x.png in Resources */,
        9F3108601A88E5F700D7C8E2 /* 3G@3x.png in Resources */,
        9F3106761A88E5F700D7C8E2 /* RG_mb_itemised_icon_OFF@2x.png in Resources */,
        9F3106711A88E5F700D7C8E2 /* RG_mb_arrow_icon_OFF_white.png in Resources */,
        9F3108A81A88E5F700D7C8E2 /* TC_tu_mobile@2x.png in Resources */,
        9F31075A1A88E5F700D7C8E2 /* login_telNoSifre.png in Resources */,
        9F3102511A88E47B00D7C8E2 /* BillSummaryCellView.xib in Resources */,
        9F31073A1A88E5F700D7C8E2 /* RG_LS_intro_logo.png in Resources */,
        8DB500991A956D8300DE9728 /* InternalBillVC.xib in Resources */,
        9F31088A1A88E5F700D7C8E2 /* TC_To_Up_icon@2x.png in Resources */,
        9F3107431A88E5F700D7C8E2 /* offer_button_icon.png in Resources */,
        9F3106151A88E5F700D7C8E2 /* Turkcell Satura Medium Italic.ttf in Resources */,
        9F31087C1A88E5F700D7C8E2 /* TL_gri.png in Resources */,
        9F3107F61A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1.png in Resources */,
        9CF2B2B71B4FF9D30095FBBE /* NetmeraSettings.plist in Resources */,
        8D2A3A781A94A7CA0073487B /* MNTVC.xib in Resources */,
        9F31069B1A88E5F700D7C8E2 /* flag_recommendation.png in Resources */,
        9F3108261A88E5F700D7C8E2 /* RG_tu_arrow011_UP.png in Resources */,
        9F31074E1A88E5F700D7C8E2 /* login_facebook.png in Resources */,
        9F3108851A88E5F700D7C8E2 /* tc_amex.png in Resources */,
        9F75BE4B1B093991006A9356 /* yetkili_onayi@1x.png in Resources */,
        9F31076E1A88E5F700D7C8E2 /* alert_icon_confirm@2x.png in Resources */,
        9F3107CC1A88E5F700D7C8E2 /* griB.png in Resources */,
        9F3106031A88E5F700D7C8E2 /* RG_tu_textfield_ON@3x.png in Resources */,
        9F3108CF1A88E5F700D7C8E2 /* TC_SS_default_chaticon@2x.png in Resources */,
        9F3108CB1A88E5F700D7C8E2 /* search_white@2x.png in Resources */,
        68542C1017F01695004DEFD7 /* TopUpPaymentVC.xib in Resources */,
        68542C1217F01695004DEFD7 /* TopUpVC.xib in Resources */,
        9F31085A1A88E5F700D7C8E2 /* makePaymentButton@2x.png in Resources */,
        9F3106AC1A88E5F700D7C8E2 /* right_white_arrow_from_guideline.png in Resources */,
        9F3107441A88E5F700D7C8E2 /* offer_button_icon@2x.png in Resources */,
        9F3108C01A88E5F700D7C8E2 /* filterSiyah.png in Resources */,
        9F3108831A88E5F700D7C8E2 /* tc_address_book@2x.png in Resources */,
        9F3108E51A88E5F800D7C8E2 /* Default.png in Resources */,
        9F3107EA1A88E5F700D7C8E2 /* TC_SL_pin.png in Resources */,
        9F3107791A88E5F700D7C8E2 /* menu_icon_blue.png in Resources */,
        9F31063C1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS@2x.png in Resources */,
        9F3106331A88E5F700D7C8E2 /* AllowanceBill_Icon_Data_selected@2x.png in Resources */,
        9F3107521A88E5F700D7C8E2 /* login_mobileimza.png in Resources */,
        9F3107E81A88E5F700D7C8E2 /* TC_SL_locationpin.png in Resources */,
        9F3102371A88E41900D7C8E2 /* SettingsVC.xib in Resources */,
        9CF2B2B91B4FF9D30095FBBE /* NMPushInboxCell.xib in Resources */,
        9F3108281A88E5F700D7C8E2 /* RG_tu_arrow011_UP@3x.png in Resources */,
        9F3105EB1A88E5F700D7C8E2 /* RG_TU_backarrow@2x.png in Resources */,
        9F3107E91A88E5F700D7C8E2 /* TC_SL_locationpin@2x.png in Resources */,
        9F3108051A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT.png in Resources */,
        9CF2B2BE1B4FF9D30095FBBE /* popupClose@2x.png in Resources */,
        9F31082D1A88E5F700D7C8E2 /* RG_tu_arrow01_UP@2x.png in Resources */,
        9F3106131A88E5F700D7C8E2 /* Turkcell Satura Demi.ttf in Resources */,
        9F3108771A88E5F700D7C8E2 /* TL_beyaz_t@2x.png in Resources */,
        9F3101B21A88E26900D7C8E2 /* AllowanceFooterView.xib in Resources */,
        9F31062D1A88E5F700D7C8E2 /* Allowance_data_notification@2x.png in Resources */,
        9F3108DC1A88E5F800D7C8E2 /* TC_MWV_logo.png in Resources */,
        88F476081B61456000207F7F /* Entitlement-Enterprise.plist in Resources */,
        9F3105FB1A88E5F700D7C8E2 /* RG_tu_default_profile@2x.png in Resources */,
        9F3106571A88E5F700D7C8E2 /* topup_white_icon_hightlighted@2x.png in Resources */,
        9F3106A71A88E5F700D7C8E2 /* left_white_arrow_from_guideline.png in Resources */,
        9F3107721A88E5F700D7C8E2 /* alert_icon_info@2x.png in Resources */,
        9F3107771A88E5F700D7C8E2 /* menu_back_icon_white.png in Resources */,
        9F3101D31A88E2E900D7C8E2 /* CampaignView.xib in Resources */,
        9F3108641A88E5F700D7C8E2 /* bilgisayar2@3x.png in Resources */,
        9F3108461A88E5F700D7C8E2 /* RG_tu_arrow09_UP@3x.png in Resources */,
        9F3101D91A88E2F800D7C8E2 /* HomeLoginView.xib in Resources */,
        9F31061D1A88E5F700D7C8E2 /* Icon_57.png in Resources */,
        9F3108301A88E5F700D7C8E2 /* RG_tu_arrow02_UP@2x.png in Resources */,
        9F3105EA1A88E5F700D7C8E2 /* RG_TU_backarrow.png in Resources */,
        9F3108721A88E5F700D7C8E2 /* bilgisayar2_t@3x.png in Resources */,
        8D943FF51A8B812600F6FE20 /* BillDetailsFooterView.xib in Resources */,
        9F3108731A88E5F700D7C8E2 /* Nar_mavi_t.png in Resources */,
        9F3108111A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT.png in Resources */,
        9F3107A71A88E5F700D7C8E2 /* iphone_image@2x.png in Resources */,
        9F3106411A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice.png in Resources */,
        9F3106121A88E5F700D7C8E2 /* Turkcell Satura Demi Italic.ttf in Resources */,
        9F3105F81A88E5F700D7C8E2 /* RG_tu_close_info_btn.png in Resources */,
        9F31068F1A88E5F700D7C8E2 /* flag_campaign_and_popular.png in Resources */,
        9F3108A31A88E5F700D7C8E2 /* TC_tu_main_lable_btn1@2x.png in Resources */,
        9F3108531A88E5F700D7C8E2 /* close_icon_blue.png in Resources */,
        9F31078E1A88E5F700D7C8E2 /* displayTopUpModule@2x.png in Resources */,
        9F027D261A8A3B10007B0F0C /* requestAuthToken.json in Resources */,
        9F31076B1A88E5F700D7C8E2 /* mntOK.png in Resources */,
        9F31086C1A88E5F700D7C8E2 /* Nar_mavi@3x.png in Resources */,
        9F3106A01A88E5F700D7C8E2 /* big_shadow@3x.png in Resources */,
        9F31068A1A88E5F700D7C8E2 /* flag_campaign@2x.png in Resources */,
        9F31078A1A88E5F700D7C8E2 /* displayNarModule@2x.png in Resources */,
        9F75BE4C1B093991006A9356 /* yetkili_onayi@2x.png in Resources */,
        9FF2DE941A4C40910016523F /* kk-odeme.json in Resources */,
        9F31086E1A88E5F700D7C8E2 /* 3G2_t@2x.png in Resources */,
        9F3108C21A88E5F700D7C8E2 /* inceleme.png in Resources */,
        9F4B576B1A4ABF0B0055582A /* kampanyalar.json?size=6 in Resources */,
        9F3106321A88E5F700D7C8E2 /* AllowanceBill_Icon_Data_selected.png in Resources */,
        9F31061F1A88E5F700D7C8E2 /* Icon_80.png in Resources */,
        9F3108021A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT.png in Resources */,
        9F3106591A88E5F700D7C8E2 /* yellow_button_with_glow@2x.png in Resources */,
        9F3107C01A88E5F700D7C8E2 /* togg_select.png in Resources */,
        9F3106441A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice_selected.png in Resources */,
        9F3102971A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.xib in Resources */,
        9F3107491A88E5F700D7C8E2 /* home_login_avatar@2x.png in Resources */,
        9F3108821A88E5F700D7C8E2 /* tc_address_book.png in Resources */,
        9F3102A61A88E4C700D7C8E2 /* LoadTLView.xib in Resources */,
        9F3108041A88E5F700D7C8E2 /* TC_tu_arrow012_RIGHT@3x.png in Resources */,
        9F3107BB1A88E5F700D7C8E2 /* TC_sett_password@2x.png in Resources */,
        9F31067C1A88E5F700D7C8E2 /* RG_mb_stats_icon_ON@2x.png in Resources */,
        9F3108331A88E5F700D7C8E2 /* RG_tu_arrow03_UP@2x.png in Resources */,
        9F3106971A88E5F700D7C8E2 /* flag_new@3x.png in Resources */,
        9F4B57701A4ABF0B0055582A /* hatmenu.json in Resources */,
        9F3107A61A88E5F700D7C8E2 /* iphone_image.png in Resources */,
        8D2D6BFE1A8F8534003FBB1A /* PeriodSliderView.xib in Resources */,
        9F3106931A88E5F700D7C8E2 /* flag_campaign_and_recommendation@2x.png in Resources */,
        9F3102091A88E34600D7C8E2 /* RSSearchView.xib in Resources */,
        9F31079D1A88E5F700D7C8E2 /* fotoCek@2x.png in Resources */,
        9F31084F1A88E5F700D7C8E2 /* check@3x.png in Resources */,
        8D98795A1A933862007C6356 /* StoreDetailsVC.xib in Resources */,
        9F3107C71A88E5F700D7C8E2 /* deepPurpleB.png in Resources */,
        9F31075C1A88E5F700D7C8E2 /* login_tick_icon.png in Resources */,
        9F3106141A88E5F700D7C8E2 /* Turkcell Satura Italic.ttf in Resources */,
        9F3106061A88E5F700D7C8E2 /* RG_SS_default_header.png in Resources */,
        8D8F9A8A1A9C8499003B0ACE /* Images.xcassets in Resources */,
        EC261EBE187AB8D4001BBBE7 /* GoogleMaps.bundle in Resources */,
        9F3106521A88E5F700D7C8E2 /* cocuk4.png in Resources */,
        9F31076F1A88E5F700D7C8E2 /* alert_icon_error.png in Resources */,
        9F3105F11A88E5F700D7C8E2 /* RG_TU_mastercard@2x.png in Resources */,
        9F31060D1A88E5F700D7C8E2 /* RG_SS_homepage_searchbox_active1@3x.png in Resources */,
        9F31080E1A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT.png in Resources */,
        9F3107621A88E5F700D7C8E2 /* login_turkcell@2x.png in Resources */,
        9F027D231A8A3A10007B0F0C /* odeme.json in Resources */,
        9F3106471A88E5F700D7C8E2 /* logo_only_phone_icon.png in Resources */,
        9F31082E1A88E5F700D7C8E2 /* RG_tu_arrow01_UP@3x.png in Resources */,
        9F3101C31A88E29100D7C8E2 /* ScrollThingyView.xib in Resources */,
        9F3108A51A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@2x.png in Resources */,
        9F3108DB1A88E5F800D7C8E2 /* TC_MWV_forward_arrow@3x.png in Resources */,
        9F3102701A88E4A000D7C8E2 /* DateSelectorView.xib in Resources */,
        9F31069D1A88E5F700D7C8E2 /* flag_recommendation@3x.png in Resources */,
        9F3106491A88E5F700D7C8E2 /* logo_only_phone_icon@3x.png in Resources */,
        9F31084B1A88E5F700D7C8E2 /* buttonYellow@2x.png in Resources */,
        9F3102A81A88E4C700D7C8E2 /* PayWithCreditCardView.xib in Resources */,
        9F3102001A88E32B00D7C8E2 /* SettingsPageView.xib in Resources */,
        9F3105F71A88E5F700D7C8E2 /* RG_TU_tick@2x.png in Resources */,
        9F31076A1A88E5F700D7C8E2 /* mnt@3x.png in Resources */,
        9F3108341A88E5F700D7C8E2 /* RG_tu_arrow03_UP@3x.png in Resources */,
        9F3107F01A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon.png in Resources */,
        9F31087A1A88E5F700D7C8E2 /* TL_mavi_t@2x.png in Resources */,
        9F3107601A88E5F700D7C8E2 /* login_turkcell2.png in Resources */,
        9F3106A31A88E5F700D7C8E2 /* finger_print.png in Resources */,
        9F31062F1A88E5F700D7C8E2 /* AllowanceBill_Icon_Data.png in Resources */,
        9F31088C1A88E5F700D7C8E2 /* TC_topup_contact_cell_bg@2x.png in Resources */,
        9F3108631A88E5F700D7C8E2 /* bilgisayar2@2x.png in Resources */,
        9F31081F1A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@3x.png in Resources */,
        9F3108D31A88E5F800D7C8E2 /* validation_fail_icon@2x.png in Resources */,
        9F3107B91A88E5F700D7C8E2 /* TC_sett_notifications@2x.png in Resources */,
        9F3108251A88E5F700D7C8E2 /* RG_tu_arrow010_UP@3x.png in Resources */,
        8D943FF01A8B65C200F6FE20 /* BillItemTableViewCell.xib in Resources */,
        9F3105F21A88E5F700D7C8E2 /* RG_TU_phoneicone.png in Resources */,
        9F31077D1A88E5F700D7C8E2 /* notification_placeholder.png in Resources */,
        9F3107DE1A88E5F700D7C8E2 /* TC_pin.png in Resources */,
        9F31067B1A88E5F700D7C8E2 /* RG_mb_stats_icon_ON.png in Resources */,
        9F3107961A88E5F700D7C8E2 /* arrowUpDirection.png in Resources */,
        9F3107531A88E5F700D7C8E2 /* login_mobileimza2.png in Resources */,
        9F3107ED1A88E5F700D7C8E2 /* TC_SL_searchbox_blue@2x.png in Resources */,
        9F3106181A88E5F700D7C8E2 /* TurkcellSaturaBold.ttf in Resources */,
        9F31019A1A88E24800D7C8E2 /* ProductAndServiceView.xib in Resources */,
        9F3108E31A88E5F800D7C8E2 /* TC_MWV_share_icon@2x.png in Resources */,
        9F31064D1A88E5F700D7C8E2 /* cocuk1@2x.png in Resources */,
        9F3107FA1A88E5F700D7C8E2 /* turuncuB.png in Resources */,
        9F31085B1A88E5F700D7C8E2 /* 3G.png in Resources */,
        9F3105EC1A88E5F700D7C8E2 /* RG_TU_backbtnarrow.png in Resources */,
        9F31068B1A88E5F700D7C8E2 /* flag_campaign@3x.png in Resources */,
        9F3108581A88E5F700D7C8E2 /* close_icon_gray@3x.png in Resources */,
        9F31074A1A88E5F700D7C8E2 /* home_login_avatar@3x.png in Resources */,
        9F3108B11A88E5F700D7C8E2 /* topup_gray_icon@3x.png in Resources */,
        9F4B576E1A4ABF0B0055582A /* urun-ve-hizmetler.json?size=6 in Resources */,
        9F3108241A88E5F700D7C8E2 /* RG_tu_arrow010_UP@2x.png in Resources */,
        9F31089A1A88E5F700D7C8E2 /* TC_tu_default_profile.png in Resources */,
        9F31086A1A88E5F700D7C8E2 /* Nar_mavi.png in Resources */,
        9F3108E11A88E5F800D7C8E2 /* TC_MWV_refresh_icon@3x.png in Resources */,
        9F3108941A88E5F700D7C8E2 /* TC_tu_back_arrow.png in Resources */,
        9F3108EA1A88E5F800D7C8E2 /* OneBox.plist in Resources */,
        9F3102951A88E4BA00D7C8E2 /* SearchResultInAppCell.xib in Resources */,
        9F3106021A88E5F700D7C8E2 /* RG_tu_textfield_ON@2x.png in Resources */,
        9F3105EE1A88E5F700D7C8E2 /* RG_TU_dropdownarrow.png in Resources */,
        9F3106911A88E5F700D7C8E2 /* flag_campaign_and_popular@3x.png in Resources */,
        9F3107651A88E5F700D7C8E2 /* signin@3x.png in Resources */,
        9F3106651A88E5F700D7C8E2 /* minus_icon@2x.png in Resources */,
        9F3108811A88E5F700D7C8E2 /* TL_mavi@3x.png in Resources */,
        9F31084D1A88E5F700D7C8E2 /* check.png in Resources */,
        9F3106B01A88E5F700D7C8E2 /* search_icon_from_guideline@3x.png in Resources */,
        9F3106041A88E5F700D7C8E2 /* RG_sett_iconavatar_tsON.png in Resources */,
        9F3108761A88E5F700D7C8E2 /* TL_beyaz_t.png in Resources */,
        9F3108A61A88E5F700D7C8E2 /* TC_tu_main_lable_btn3@3x.png in Resources */,
        9F3106451A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice_selected@2x.png in Resources */,
        9F31085E1A88E5F700D7C8E2 /* 3G2@3x.png in Resources */,
        9F3106AB1A88E5F700D7C8E2 /* reload_icon_from_guideline@3x.png in Resources */,
        9F31068E1A88E5F700D7C8E2 /* flag_campaign_and_new@3x.png in Resources */,
        9F3107F11A88E5F700D7C8E2 /* Tc_SL_searchbox_default_without_icon@2x.png in Resources */,
        9F3108191A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT@3x.png in Resources */,
        9F4B57721A4ABF0B0055582A /* analiz.json in Resources */,
        9F3107AC1A88E5F700D7C8E2 /* TC_sett_call.png in Resources */,
        9F31073F1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo.png in Resources */,
        9F4B57741A4ABF0B0055582A /* hatmenu.json in Resources */,
        9F31080C1A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@2x.png in Resources */,
        9F31080F1A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@2x.png in Resources */,
        9F31026E1A88E4A000D7C8E2 /* DateSelectorTableViewCell.xib in Resources */,
        9F3108651A88E5F700D7C8E2 /* bilgisayar@2x.png in Resources */,
        9F3106291A88E5F700D7C8E2 /* tel.png in Resources */,
        9F31080A1A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@3x.png in Resources */,
        9F31068C1A88E5F700D7C8E2 /* flag_campaign_and_new.png in Resources */,
        9F31089B1A88E5F700D7C8E2 /* TC_tu_default_profile@2x.png in Resources */,
        9F3107981A88E5F700D7C8E2 /* face.png in Resources */,
        9F3108131A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@3x.png in Resources */,
        9F3101F11A88E31400D7C8E2 /* HomeSearchView.xib in Resources */,
        9F4B576C1A4ABF0B0055582A /* menu.json?custType=0&menuType=0 in Resources */,
        9CF2B2BD1B4FF9D30095FBBE /* popupClose.png in Resources */,
        9F3108AA1A88E5F700D7C8E2 /* TC_tu_type_value_arrow.png in Resources */,
        9F3107951A88E5F700D7C8E2 /* arrowRightDirection@2x.png in Resources */,
        9F3108C81A88E5F700D7C8E2 /* RadioButton-Unselected.png in Resources */,
        9F3107FB1A88E5F700D7C8E2 /* turuncuB@2x.png in Resources */,
        9F3107F81A88E5F700D7C8E2 /* turuncu.png in Resources */,
        9F3102051A88E33D00D7C8E2 /* GBAlertView.xib in Resources */,
        9F3106AA1A88E5F700D7C8E2 /* reload_icon_from_guideline@2x.png in Resources */,
        9F31062A1A88E5F700D7C8E2 /* tel@2x.png in Resources */,
        9F3107AB1A88E5F700D7C8E2 /* RG_switch@2x.png in Resources */,
        9F3108E61A88E5F800D7C8E2 /* Default@2x.png in Resources */,
        9F3107A81A88E5F700D7C8E2 /* kaydet.png in Resources */,
        9F3102071A88E33D00D7C8E2 /* ScrollThingyItemView.xib in Resources */,
        9F31066E1A88E5F700D7C8E2 /* RG_calendar_icon@3x.png in Resources */,
        9FF2DE901A4C40390016523F /* topup.json?productType=1&payment=kk in Resources */,
        9F31029B1A88E4BA00D7C8E2 /* SearchSupportPageView.xib in Resources */,
        9F3107551A88E5F700D7C8E2 /* login_mobileimza@2x.png in Resources */,
        9F3102341A88E41900D7C8E2 /* MySettingTableViewCell.xib in Resources */,
        9F3108551A88E5F700D7C8E2 /* close_icon_blue@3x.png in Resources */,
        9F3108621A88E5F700D7C8E2 /* bilgisayar2.png in Resources */,
        9F3107A41A88E5F700D7C8E2 /* iphone5_image.png in Resources */,
        9F3106401A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS_selected@3x.png in Resources */,
        9F3102571A88E48300D7C8E2 /* HomeVC.xib in Resources */,
        9F3107BC1A88E5F700D7C8E2 /* TC_sett_sms.png in Resources */,
        9F3102731A88E4A000D7C8E2 /* UsageFooterView.xib in Resources */,
        9F3108501A88E5F700D7C8E2 /* checkBox.png in Resources */,
        9F3107871A88E5F700D7C8E2 /* displayBillModule.png in Resources */,
        9F3106351A88E5F700D7C8E2 /* AllowanceBill_Icon_Other.png in Resources */,
        9F3108321A88E5F700D7C8E2 /* RG_tu_arrow03_UP.png in Resources */,
        9F8D6DED1A91E4A800AECEC9 /* mail-gonder.json in Resources */,
        9F3107EC1A88E5F700D7C8E2 /* TC_SL_searchbox_blue.png in Resources */,
        9F3107781A88E5F700D7C8E2 /* menu_back_icon_white@2x.png in Resources */,
        9F31085D1A88E5F700D7C8E2 /* 3G2@2x.png in Resources */,
        9F31063D1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS@3x.png in Resources */,
        9F3108DD1A88E5F800D7C8E2 /* TC_MWV_logo@2x.png in Resources */,
        9F3106891A88E5F700D7C8E2 /* flag_campaign.png in Resources */,
        9F3107CD1A88E5F700D7C8E2 /* griB@2x.png in Resources */,
        9F3107A31A88E5F700D7C8E2 /* iphone4_image@2x.png in Resources */,
        9F3108C91A88E5F700D7C8E2 /* RadioButton-Unselected@2x.png in Resources */,
        9F31078C1A88E5F700D7C8E2 /* displaySettingsModule@2x.png in Resources */,
        9F3105F01A88E5F700D7C8E2 /* RG_TU_mastercard.png in Resources */,
        9F31081C1A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@3x.png in Resources */,
        9F3106721A88E5F700D7C8E2 /* RG_mb_arrow_icon_OFF_white@2x.png in Resources */,
        9F31064F1A88E5F700D7C8E2 /* cocuk2@2x.png in Resources */,
        9F31028E1A88E4BA00D7C8E2 /* DeviceDetailVC.xib in Resources */,
        9F3106431A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice@3x.png in Resources */,
        9F31082A1A88E5F700D7C8E2 /* RG_tu_arrow012_UP@2x.png in Resources */,
        9F3107FC1A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT.png in Resources */,
        9F3107BE1A88E5F700D7C8E2 /* TC_sett_tpay.png in Resources */,
        9F3106691A88E5F700D7C8E2 /* RG_Bill_payNowBtn_BIG@2x.png in Resources */,
        9F3108881A88E5F700D7C8E2 /* tc_master@2x.png in Resources */,
        9F3108B41A88E5F700D7C8E2 /* topup_selected_op@3x.png in Resources */,
        8D8824101A95F8040034D754 /* MySettingPUKTableViewCell.xib in Resources */,
        9F3106631A88E5F700D7C8E2 /* close_icon_white@2x.png in Resources */,
        9F3102931A88E4BA00D7C8E2 /* SearchResultCell.xib in Resources */,
        9F3107751A88E5F700D7C8E2 /* menu_back_icon_blue.png in Resources */,
        9F31065B1A88E5F700D7C8E2 /* Bill_details_button_bg@2x.png in Resources */,
        9F3106901A88E5F700D7C8E2 /* flag_campaign_and_popular@2x.png in Resources */,
        9F3107D91A88E5F700D7C8E2 /* storeturkcellLogo@2x.png in Resources */,
        9FF2DE921A4C40650016523F /* topup.json?productType=7&payment=kk in Resources */,
        9F3107971A88E5F700D7C8E2 /* arrowUpDirection@2x.png in Resources */,
        9F3101C91A88E2C200D7C8E2 /* AccountInfoView.xib in Resources */,
        9F31089C1A88E5F700D7C8E2 /* TC_tu_default_profile@3x.png in Resources */,
        9F31064B1A88E5F700D7C8E2 /* pusula@2x.png in Resources */,
        9F3106281A88E5F700D7C8E2 /* TC_topnav_icon@2x.png in Resources */,
        9F31060C1A88E5F700D7C8E2 /* RG_SS_homepage_searchbox_active1@2x.png in Resources */,
        9F31075F1A88E5F700D7C8E2 /* login_turkcell.png in Resources */,
        9F3108841A88E5F700D7C8E2 /* tc_address_book@3x.png in Resources */,
        9F3107FE1A88E5F700D7C8E2 /* TC_tu_arrow010_RIGHT@3x.png in Resources */,
        9F3106981A88E5F700D7C8E2 /* flag_popular.png in Resources */,
        9F31065A1A88E5F700D7C8E2 /* Bill_details_button_bg.png in Resources */,
        9F31066F1A88E5F700D7C8E2 /* RG_mb_arrow_icon_OFF.png in Resources */,
        9F3107CA1A88E5F700D7C8E2 /* gri2.png in Resources */,
        9F3107DC1A88E5F700D7C8E2 /* TC_Map_Home.png in Resources */,
        9F3107661A88E5F700D7C8E2 /* signout.png in Resources */,
        9F3107941A88E5F700D7C8E2 /* arrowRightDirection.png in Resources */,
        9F3106461A88E5F700D7C8E2 /* AllowanceBill_Icon_Voice_selected@3x.png in Resources */,
        9F3108561A88E5F700D7C8E2 /* close_icon_gray.png in Resources */,
        9F3108271A88E5F700D7C8E2 /* RG_tu_arrow011_UP@2x.png in Resources */,
        9F31082F1A88E5F700D7C8E2 /* RG_tu_arrow02_UP.png in Resources */,
        9F3106661A88E5F700D7C8E2 /* plus_icon.png in Resources */,
        9F31024F1A88E46C00D7C8E2 /* FoldableListView.xib in Resources */,
        9F3108861A88E5F700D7C8E2 /* tc_amex@2x.png in Resources */,
        9CF2B2BF1B4FF9D30095FBBE /* pushInboxEmptyImage.png in Resources */,
        9F31061A1A88E5F700D7C8E2 /* Icon_120.png in Resources */,
        9F31068D1A88E5F700D7C8E2 /* flag_campaign_and_new@2x.png in Resources */,
        9FF2DE961A4C40EF0016523F /* topup.json?productType=4&payment=kk in Resources */,
        9F3102711A88E4A000D7C8E2 /* MyUsageVC.xib in Resources */,
        9F3108CE1A88E5F700D7C8E2 /* TC_SS_default_chaticon.png in Resources */,
        9F3107571A88E5F700D7C8E2 /* login_sifreDegistir@2x.png in Resources */,
        9F31063F1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS_selected@2x.png in Resources */,
        9F31062B1A88E5F700D7C8E2 /* tel@3x.png in Resources */,
        9F3106581A88E5F700D7C8E2 /* yellow_button_with_glow.png in Resources */,
        9F3107C91A88E5F700D7C8E2 /* gri.png in Resources */,
        9F3108AD1A88E5F700D7C8E2 /* tc_visa.png in Resources */,
        9F3108381A88E5F700D7C8E2 /* RG_tu_arrow05_UP.png in Resources */,
        9F3106731A88E5F700D7C8E2 /* RG_mb_arrow_icon_ON.png in Resources */,
        9F31064E1A88E5F700D7C8E2 /* cocuk2.png in Resources */,
        9F3107B11A88E5F700D7C8E2 /* TC_sett_iconavatarON@2x.png in Resources */,
        9F3108BB1A88E5F700D7C8E2 /* carpi@2x.png in Resources */,
        9F3108D21A88E5F800D7C8E2 /* validation_fail_icon.png in Resources */,
        9F31075B1A88E5F700D7C8E2 /* login_telNoSifre@2x.png in Resources */,
        9CF2B2B61B4FF9D30095FBBE /* NetmeraLocalization.strings in Resources */,
        9F3108511A88E5F700D7C8E2 /* checkBox@2x.png in Resources */,
        9F31073C1A88E5F700D7C8E2 /* RG_LS_intro_logo@3x.png in Resources */,
        9F3107421A88E5F700D7C8E2 /* location_based_bg@2x.png in Resources */,
        9F3107B21A88E5F700D7C8E2 /* TC_sett_line.png in Resources */,
        9F3107401A88E5F700D7C8E2 /* RG_LS_loader_SMALL_logo@2x.png in Resources */,
        9F31024C1A88E46C00D7C8E2 /* BillSummaryView.xib in Resources */,
        9F31065C1A88E5F700D7C8E2 /* Bill_details_button_bg@3x.png in Resources */,
        9F3107B01A88E5F700D7C8E2 /* TC_sett_iconavatarON.png in Resources */,
        9F31062C1A88E5F700D7C8E2 /* Allowance_data_notification.png in Resources */,
        9F31066B1A88E5F700D7C8E2 /* RG_Bill_sendEmail_BIG@2x.png in Resources */,
        9F31076C1A88E5F700D7C8E2 /* mntOK@2x.png in Resources */,
        9F3107C11A88E5F700D7C8E2 /* togg_select@2x.png in Resources */,
        9F3108931A88E5F700D7C8E2 /* TC_topup_success@3x.png in Resources */,
        9F3107641A88E5F700D7C8E2 /* signin@2x.png in Resources */,
        9F3107681A88E5F700D7C8E2 /* mnt.png in Resources */,
        9F3108961A88E5F700D7C8E2 /* TC_tu_data_icon_OFF.png in Resources */,
        9F3108C71A88E5F700D7C8E2 /* RadioButton-Selected@2x.png in Resources */,
        9F4B57711A4ABF0B0055582A /* dataprocesscheck.json?logintype=MSISDN in Resources */,
        9F3107D11A88E5F700D7C8E2 /* mavi2.png in Resources */,
        9F3105F31A88E5F700D7C8E2 /* RG_TU_phoneicone@2x.png in Resources */,
        9F31077C1A88E5F700D7C8E2 /* menu_icon_white@2x.png in Resources */,
        8DA035E01A8E0388006F8C88 /* BillFilterFooterView.xib in Resources */,
        9F027D241A8A3A10007B0F0C /* summary.json in Resources */,
        9F3107761A88E5F700D7C8E2 /* menu_back_icon_blue@2x.png in Resources */,
        9F3106561A88E5F700D7C8E2 /* topup_white_icon_highlighted.png in Resources */,
        9F31077A1A88E5F700D7C8E2 /* menu_icon_blue@2x.png in Resources */,
        9F3106311A88E5F700D7C8E2 /* AllowanceBill_Icon_Data@3x.png in Resources */,
        9F3108991A88E5F700D7C8E2 /* TC_tu_data_icon_ON@2x.png in Resources */,
        9F3107A91A88E5F700D7C8E2 /* kaydet@2x.png in Resources */,
        9F3108B91A88E5F700D7C8E2 /* topup_white_icon@2x.png in Resources */,
        9F3107D81A88E5F700D7C8E2 /* storeturkcellLogo.png in Resources */,
        9F3108C61A88E5F700D7C8E2 /* RadioButton-Selected.png in Resources */,
        9F31061E1A88E5F700D7C8E2 /* Icon_58.png in Resources */,
        9F3107481A88E5F700D7C8E2 /* home_login_avatar.png in Resources */,
        9F3102311A88E41900D7C8E2 /* MySettingSelectionTableViewCell.xib in Resources */,
        9F31069C1A88E5F700D7C8E2 /* flag_recommendation@2x.png in Resources */,
        9F3107451A88E5F700D7C8E2 /* date_icon.png in Resources */,
        9F3106551A88E5F700D7C8E2 /* menu_icon_white_highlighted@2x.png in Resources */,
        9F3108671A88E5F700D7C8E2 /* Nar_gri.png in Resources */,
        9F3107A21A88E5F700D7C8E2 /* iphone4_image.png in Resources */,
        9F3106161A88E5F700D7C8E2 /* Turkcell Satura Medium.ttf in Resources */,
        9F3108521A88E5F700D7C8E2 /* checkBox@3x.png in Resources */,
        88C432801B67775B00A17E55 /* TurkcellIDBundle.bundle in Resources */,
        9F3105EF1A88E5F700D7C8E2 /* RG_TU_dropdownarrow@2x.png in Resources */,
        9F3108741A88E5F700D7C8E2 /* Nar_mavi_t@2x.png in Resources */,
        9F31081B1A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT@2x.png in Resources */,
        9F31075E1A88E5F700D7C8E2 /* login_tick_icon@3x.png in Resources */,
        9F3106A91A88E5F700D7C8E2 /* reload_icon_from_guideline.png in Resources */,
        9F3106921A88E5F700D7C8E2 /* flag_campaign_and_recommendation.png in Resources */,
        9F3106531A88E5F700D7C8E2 /* cocuk4@2x.png in Resources */,
        9F3106AD1A88E5F700D7C8E2 /* right_white_arrow_from_guideline@2x.png in Resources */,
        9F3107611A88E5F700D7C8E2 /* login_turkcell2@2x.png in Resources */,
        9F31088B1A88E5F700D7C8E2 /* TC_topup_contact_cell_bg.png in Resources */,
        9F3107BF1A88E5F700D7C8E2 /* TC_sett_tpay@2x.png in Resources */,
        9F3107731A88E5F700D7C8E2 /* alert_icon_success.png in Resources */,
        9F3107691A88E5F700D7C8E2 /* mnt@2x.png in Resources */,
        9F3108571A88E5F700D7C8E2 /* close_icon_gray@2x.png in Resources */,
        9F3108891A88E5F700D7C8E2 /* TC_To_Up_icon.png in Resources */,
        9F3107B41A88E5F700D7C8E2 /* TC_sett_linesett.png in Resources */,
        9F31077E1A88E5F700D7C8E2 /* notification_placeholder@2x.png in Resources */,
        9F31065F1A88E5F700D7C8E2 /* Bill_paynow_button_bg.png in Resources */,
        9F31081E1A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT@2x.png in Resources */,
        9F31081A1A88E5F700D7C8E2 /* TC_tu_arrow08_RIGHT.png in Resources */,
        8D62E7011A92BA87009B71F9 /* StoreLocatorPageView.xib in Resources */,
        9F3106271A88E5F700D7C8E2 /* TC_topnav_icon.png in Resources */,
        9F3106111A88E5F700D7C8E2 /* Turkcell Satura Bold Italic.ttf in Resources */,
        9F3101FF1A88E32B00D7C8E2 /* SettingsPageMenuViewCell.xib in Resources */,
        9F31074C1A88E5F700D7C8E2 /* hour_icon@2x.png in Resources */,
        9F3108D81A88E5F800D7C8E2 /* TC_MWV_back_arrow@3x.png in Resources */,
        9F3108A91A88E5F700D7C8E2 /* TC_tu_mobile@3x.png in Resources */,
        9F3101C01A88E28500D7C8E2 /* CreditView.xib in Resources */,
        9F3108D01A88E5F700D7C8E2 /* TC_SS_default_searchHL.png in Resources */,
        8D5F9BD91A8A8F950007CAEE /* BillDetailsView.xib in Resources */,
        9F3101EE1A88E31400D7C8E2 /* FilterFooterView.xib in Resources */,
        9F3108801A88E5F700D7C8E2 /* TL_mavi@2x.png in Resources */,
        9F3106641A88E5F700D7C8E2 /* minus_icon.png in Resources */,
        9F3106541A88E5F700D7C8E2 /* menu_icon_white_highlighted.png in Resources */,
        9F3108391A88E5F700D7C8E2 /* RG_tu_arrow05_UP@2x.png in Resources */,
        8D9934BE1A8A41D5004BEF44 /* BillCompareItemView.xib in Resources */,
        9F4B57761A4ABF0B0055582A /* serviceLogin.json in Resources */,
        9CF2B2B51B4FF9D30095FBBE /* NetmeraConfigurations.xcconfig in Resources */,
        9F31067F1A88E5F700D7C8E2 /* RG_mb_summary_icon_ON.png in Resources */,
        9F31073E1A88E5F700D7C8E2 /* RG_LS_loader_SMALL_circle@2x.png in Resources */,
        8D9784471A8F9B6D00918E3B /* MostNoticeableStatView.xib in Resources */,
        9F3107411A88E5F700D7C8E2 /* location_based_bg.png in Resources */,
        9F3108351A88E5F700D7C8E2 /* RG_tu_arrow04_UP.png in Resources */,
        9F3107881A88E5F700D7C8E2 /* displayBillModule@2x.png in Resources */,
        9F3108D61A88E5F800D7C8E2 /* TC_MWV_back_arrow.png in Resources */,
        9F3108441A88E5F700D7C8E2 /* RG_tu_arrow09_UP.png in Resources */,
        9F3101CA1A88E2C200D7C8E2 /* AccountView.xib in Resources */,
        9F31087F1A88E5F700D7C8E2 /* TL_mavi.png in Resources */,
        9F3107A51A88E5F700D7C8E2 /* iphone5_image@2x.png in Resources */,
        9F3102791A88E4AC00D7C8E2 /* AllowancesVC.xib in Resources */,
        9F3102911A88E4BA00D7C8E2 /* FilterVC.xib in Resources */,
        9F3108B81A88E5F700D7C8E2 /* topup_white_icon.png in Resources */,
        9F31063B1A88E5F700D7C8E2 /* AllowanceBill_Icon_SMS.png in Resources */,
        9F3107821A88E5F700D7C8E2 /* TC_sett2_1@2x.png in Resources */,
        9F3107EB1A88E5F700D7C8E2 /* TC_SL_pin@2x.png in Resources */,
        9F31086D1A88E5F700D7C8E2 /* 3G2_t.png in Resources */,
        9F3107F71A88E5F700D7C8E2 /* TC_SS_homepage_searchbox_active1@2x.png in Resources */,
        9F3108091A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT@2x.png in Resources */,
        9F3108061A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@2x.png in Resources */,
        9F3105F61A88E5F700D7C8E2 /* RG_TU_tick.png in Resources */,
        9F3107D41A88E5F700D7C8E2 /* maviB@2x.png in Resources */,
        9F3108E91A88E5F800D7C8E2 /* NotificationSettings.plist in Resources */,
        88BC06141B00EE5600276997 /* Entitlement.plist in Resources */,
        9F3107D71A88E5F700D7C8E2 /* storeshadow@2x.png in Resources */,
        9F3101B71A88E26900D7C8E2 /* BaseChartView.xib in Resources */,
        9CF2B2BB1B4FF9D30095FBBE /* NMPushInboxViewController.xib in Resources */,
        9F3107D31A88E5F700D7C8E2 /* maviB.png in Resources */,
        9F3108081A88E5F700D7C8E2 /* TC_tu_arrow02_RIGHT.png in Resources */,
        9F3106231A88E5F700D7C8E2 /* adamli@2x.png in Resources */,
        9F3108C31A88E5F700D7C8E2 /* inceleme@2x.png in Resources */,
        8D89BE871A97689D0060B71A /* NotificationInfoView.xib in Resources */,
        9F3108BA1A88E5F700D7C8E2 /* carpi.png in Resources */,
        9F31069A1A88E5F700D7C8E2 /* flag_popular@3x.png in Resources */,
        9CF2B2C01B4FF9D30095FBBE /* pushInboxEmptyImage@2x.png in Resources */,
        9F31074F1A88E5F700D7C8E2 /* login_facebook2.png in Resources */,
        9F3106741A88E5F700D7C8E2 /* RG_mb_arrow_icon_ON@2x.png in Resources */,
        9F3106791A88E5F700D7C8E2 /* RG_mb_stats_icon_OFF.png in Resources */,
        9F3107EE1A88E5F700D7C8E2 /* TC_SL_searchbox_default.png in Resources */,
        9F3102901A88E4BA00D7C8E2 /* FilterItemCell.xib in Resources */,
        9F31083E1A88E5F700D7C8E2 /* RG_tu_arrow07_UP.png in Resources */,
        9F3108B61A88E5F700D7C8E2 /* topup_unselected_op@2x.png in Resources */,
        9F3108401A88E5F700D7C8E2 /* RG_tu_arrow07_UP@3x.png in Resources */,
        9F3106801A88E5F700D7C8E2 /* RG_mb_summary_icon_ON@2x.png in Resources */,
        9F3107E01A88E5F700D7C8E2 /* TC_SL_boxbigarrow.png in Resources */,
        9F3108A01A88E5F700D7C8E2 /* TC_tu_main_btn@2x.png in Resources */,
        9F3108071A88E5F700D7C8E2 /* TC_tu_arrow01_RIGHT@3x.png in Resources */,
        9F3106221A88E5F700D7C8E2 /* adamli.png in Resources */,
        9F3107631A88E5F700D7C8E2 /* signin.png in Resources */,
        9F3107D01A88E5F700D7C8E2 /* mavi.png in Resources */,
        9F3102551A88E48300D7C8E2 /* AnonymousHomeVC.xib in Resources */,
        9F3107B51A88E5F700D7C8E2 /* TC_sett_linesett@2x.png in Resources */,
        9F3108681A88E5F700D7C8E2 /* Nar_gri@2x.png in Resources */,
        9F3106951A88E5F700D7C8E2 /* flag_new.png in Resources */,
        9F31029A1A88E4BA00D7C8E2 /* SearchSupportPageVC.xib in Resources */,
        9F31073B1A88E5F700D7C8E2 /* RG_LS_intro_logo@2x.png in Resources */,
        9F3107C81A88E5F700D7C8E2 /* deepPurpleB@2x.png in Resources */,
        9F3101FC1A88E32B00D7C8E2 /* ProfilePhotoActionView.xib in Resources */,
        9F3108AB1A88E5F700D7C8E2 /* TC_tu_type_value_arrow@2x.png in Resources */,
        04C1A2BF1928D98C00411E4E /* readme.txt in Resources */,
        9F31064C1A88E5F700D7C8E2 /* cocuk1.png in Resources */,
        9F31074D1A88E5F700D7C8E2 /* hour_icon@3x.png in Resources */,
        9F3106251A88E5F700D7C8E2 /* photo_machine_icon.png in Resources */,
        9F3108711A88E5F700D7C8E2 /* bilgisayar2_t@2x.png in Resources */,
        9F3105F41A88E5F700D7C8E2 /* RG_TU_securitydigits.png in Resources */,
        9F3108D71A88E5F800D7C8E2 /* TC_MWV_back_arrow@2x.png in Resources */,
        9F3108B31A88E5F700D7C8E2 /* topup_selected_op@2x.png in Resources */,
        9F3107B81A88E5F700D7C8E2 /* TC_sett_notifications.png in Resources */,
        9F027D2A1A8B5670007B0F0C /* PayBillVC.xib in Resources */,
        9F3107891A88E5F700D7C8E2 /* displayNarModule.png in Resources */,
        9F4B57731A4ABF0B0055582A /* anasayfa.json in Resources */,
        9F31086B1A88E5F700D7C8E2 /* Nar_mavi@2x.png in Resources */,
        9F31087B1A88E5F700D7C8E2 /* TL_mavi_t@3x.png in Resources */,
        9F3105F91A88E5F700D7C8E2 /* RG_tu_close_info_btn@2x.png in Resources */,
        9F3108BD1A88E5F700D7C8E2 /* filterCarpi@2x.png in Resources */,
        88F476071B61456000207F7F /* Entitlement-AppStore.plist in Resources */,
        9F31080B1A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT.png in Resources */,
        9F3107911A88E5F700D7C8E2 /* one-box-default.png in Resources */,
        9F3108141A88E5F700D7C8E2 /* TC_tu_arrow06_RIGHT.png in Resources */,
        9F3101FE1A88E32B00D7C8E2 /* SettingsPageHeaderView.xib in Resources */,
        9F3108971A88E5F700D7C8E2 /* TC_tu_data_icon_OFF@2x.png in Resources */,
        9F3108AE1A88E5F700D7C8E2 /* tc_visa@2x.png in Resources */,
        9F3108611A88E5F700D7C8E2 /* bilgisayar.png in Resources */,
        9F3108781A88E5F700D7C8E2 /* TL_beyaz_t@3x.png in Resources */,
        9F31079A1A88E5F700D7C8E2 /* fotoCarpi.png in Resources */,
        9F3106991A88E5F700D7C8E2 /* flag_popular@2x.png in Resources */,
        9F31024A1A88E46C00D7C8E2 /* BillAnalysisView.xib in Resources */,
        9F3108AF1A88E5F700D7C8E2 /* topup_gray_icon.png in Resources */,
        9F31076D1A88E5F700D7C8E2 /* alert_icon_confirm.png in Resources */,
        9F3106051A88E5F700D7C8E2 /* RG_sett_iconavatar_tsON@2x.png in Resources */,
        9F31084C1A88E5F700D7C8E2 /* buttonYellow@3x.png in Resources */,
        9F3108B51A88E5F700D7C8E2 /* topup_unselected_op.png in Resources */,
        9F31083C1A88E5F700D7C8E2 /* RG_tu_arrow06_UP@2x.png in Resources */,
        9F3106681A88E5F700D7C8E2 /* RG_Bill_payNowBtn_BIG.png in Resources */,
        9F3107AD1A88E5F700D7C8E2 /* TC_sett_call@2x.png in Resources */,
        9F3105FC1A88E5F700D7C8E2 /* RG_tu_info_btn.png in Resources */,
        9F3108921A88E5F700D7C8E2 /* TC_topup_success@2x.png in Resources */,
        9F3107711A88E5F700D7C8E2 /* alert_icon_info.png in Resources */,
        9F3108411A88E5F700D7C8E2 /* RG_tu_arrow08_UP.png in Resources */,
        9F3107851A88E5F700D7C8E2 /* displayBillAnalysisModule.png in Resources */,
        9F3101B91A88E26900D7C8E2 /* BillFooterView.xib in Resources */,
        9F3106A21A88E5F700D7C8E2 /* close_keyboard_icon@2x.png in Resources */,
        9F3108171A88E5F700D7C8E2 /* TC_tu_arrow07_RIGHT.png in Resources */,
        9F3102991A88E4BA00D7C8E2 /* SearchResultOneBoxCell.xib in Resources */,
        9F3106701A88E5F700D7C8E2 /* RG_mb_arrow_icon_OFF@2x.png in Resources */,
        9F3108E21A88E5F800D7C8E2 /* TC_MWV_share_icon.png in Resources */,
        9F31067D1A88E5F700D7C8E2 /* RG_mb_summary_icon_OFF.png in Resources */,
        9F3107501A88E5F700D7C8E2 /* login_facebook2@2x.png in Resources */,
        9F3107701A88E5F700D7C8E2 /* alert_icon_error@2x.png in Resources */,
        9F3108D51A88E5F800D7C8E2 /* validation_ok_icon@2x.png in Resources */,
        9F3107AE1A88E5F700D7C8E2 /* TC_sett_data.png in Resources */,
        9F3108C41A88E5F700D7C8E2 /* mavi4Mnt.png in Resources */,
        9F3108911A88E5F700D7C8E2 /* TC_topup_success.png in Resources */,
        9F3107581A88E5F700D7C8E2 /* login_sms_sending_image.png in Resources */,
        9F3106191A88E5F700D7C8E2 /* Icon_114.png in Resources */,
        9F3106611A88E5F700D7C8E2 /* Bill_paynow_button_bg@3x.png in Resources */,
        9F3108591A88E5F700D7C8E2 /* makePaymentButton.png in Resources */,
        9F31083D1A88E5F700D7C8E2 /* RG_tu_arrow06_UP@3x.png in Resources */,
        9F3106011A88E5F700D7C8E2 /* RG_tu_textfield_ON.png in Resources */,
        9F3106341A88E5F700D7C8E2 /* AllowanceBill_Icon_Data_selected@3x.png in Resources */,
        9F3107511A88E5F700D7C8E2 /* login_facebook@2x.png in Resources */,
        9F3108751A88E5F700D7C8E2 /* Nar_mavi_t@3x.png in Resources */,
        9F3107541A88E5F700D7C8E2 /* login_mobileimza2@2x.png in Resources */,
        9F3108121A88E5F700D7C8E2 /* TC_tu_arrow05_RIGHT@2x.png in Resources */,
        9F4B57681A4ABF0B0055582A /* cms.json?desiredKey=native.storelocator.free&key=commonPageManager&type=0 in Resources */,
        9F3106371A88E5F700D7C8E2 /* AllowanceBill_Icon_Other@3x.png in Resources */,
        9F3108371A88E5F700D7C8E2 /* RG_tu_arrow04_UP@3x.png in Resources */,
        9F3108B01A88E5F700D7C8E2 /* topup_gray_icon@2x.png in Resources */,
        9F31061C1A88E5F700D7C8E2 /* Icon_29.png in Resources */,
        9F3106961A88E5F700D7C8E2 /* flag_new@2x.png in Resources */,
        9F3106AF1A88E5F700D7C8E2 /* search_icon_from_guideline@2x.png in Resources */,
        9F3106751A88E5F700D7C8E2 /* RG_mb_itemised_icon_OFF.png in Resources */,
        9F4B576D1A4ABF0B0055582A /* property.json in Resources */,
        9F31087D1A88E5F700D7C8E2 /* TL_gri@2x.png in Resources */,
        9F4B57671A4ABF0B0055582A /* cms.json?desiredKey=minidashboard.data.limitliss.notice&key=myAccountDashboardPageManager&type=0 in Resources */,
        9F3106501A88E5F700D7C8E2 /* cocuk3.png in Resources */,
        9F31074B1A88E5F700D7C8E2 /* hour_icon.png in Resources */,
        8D89BE821A9764EE0060B71A /* NotificationsView.xib in Resources */,
        9F3108CA1A88E5F700D7C8E2 /* search_white.png in Resources */,
        9F3108E41A88E5F800D7C8E2 /* Default-568h@2x.png in Resources */,
        9F3107561A88E5F700D7C8E2 /* login_sifreDegistir.png in Resources */,
        9F3105FF1A88E5F700D7C8E2 /* RG_tu_textfield_OFF@2x.png in Resources */,
        9F3108A41A88E5F700D7C8E2 /* TC_tu_main_lable_btn3.png in Resources */,
        9F3107AF1A88E5F700D7C8E2 /* TC_sett_data@2x.png in Resources */,
        9F31083B1A88E5F700D7C8E2 /* RG_tu_arrow06_UP.png in Resources */,
        8D8F9A8D1A9CA6E9003B0ACE /* NotificationsVC.xib in Resources */,
        9F3106A81A88E5F700D7C8E2 /* left_white_arrow_from_guideline@2x.png in Resources */,
        8D495F5A1A8D62A700714784 /* FilterOptionTableViewCell.xib in Resources */,
        9F3108231A88E5F700D7C8E2 /* RG_tu_arrow010_UP.png in Resources */,
        9F3107AA1A88E5F700D7C8E2 /* RG_switch.png in Resources */,
        9F31024D1A88E46C00D7C8E2 /* BillsVC.xib in Resources */,
        9F3107C41A88E5F700D7C8E2 /* deepPurple.png in Resources */,
        9F3102321A88E41900D7C8E2 /* MySettingsVC.xib in Resources */,
        9F31080D1A88E5F700D7C8E2 /* TC_tu_arrow03_RIGHT@3x.png in Resources */,
        9F3107DD1A88E5F700D7C8E2 /* TC_Map_Home@2x.png in Resources */,
        9F31079C1A88E5F700D7C8E2 /* fotoCek.png in Resources */,
        9F3108431A88E5F700D7C8E2 /* RG_tu_arrow08_UP@3x.png in Resources */,
        9F3106601A88E5F700D7C8E2 /* Bill_paynow_button_bg@2x.png in Resources */,
        9F4B57691A4ABF0B0055582A /* cms.json?desiredKey=topup.native.weburl.tl&key=topUpPageManager&type=2 in Resources */,
        9F31078B1A88E5F700D7C8E2 /* displaySettingsModule.png in Resources */,
        9F3108DE1A88E5F800D7C8E2 /* TC_MWV_logo@3x.png in Resources */,
        9F3108791A88E5F700D7C8E2 /* TL_mavi_t.png in Resources */,
        9F3108361A88E5F700D7C8E2 /* RG_tu_arrow04_UP@2x.png in Resources */,
        9F3106261A88E5F700D7C8E2 /* photo_machine_icon@2x.png in Resources */,
        9F3108311A88E5F700D7C8E2 /* RG_tu_arrow02_UP@3x.png in Resources */,
        9F3108B71A88E5F700D7C8E2 /* topup_unselected_op@3x.png in Resources */,
        9F3108491A88E5F700D7C8E2 /* buttonGray@3x.png in Resources */,
        9F31086F1A88E5F700D7C8E2 /* 3G2_t@3x.png in Resources */,
        9F3107C21A88E5F700D7C8E2 /* togg_unselect.png in Resources */,
        9F027D1E1A89FBCD007B0F0C /* Launch Screen.xib in Resources */,
        9F31069F1A88E5F700D7C8E2 /* big_shadow@2x.png in Resources */,
        9F3101B51A88E26900D7C8E2 /* AllowancePurchaseView.xib in Resources */,
        9F3107C31A88E5F700D7C8E2 /* togg_unselect@2x.png in Resources */,
        9F31075D1A88E5F700D7C8E2 /* login_tick_icon@2x.png in Resources */,
        9F31079E1A88E5F700D7C8E2 /* fotoSec.png in Resources */,
        9F3108E81A88E5F800D7C8E2 /* MenuSearch.plist in Resources */,
        9F3106001A88E5F700D7C8E2 /* RG_tu_textfield_OFF@3x.png in Resources */,
        9F3108A71A88E5F700D7C8E2 /* TC_tu_mobile.png in Resources */,
        9F31084A1A88E5F700D7C8E2 /* buttonYellow.png in Resources */,
        9F3108DF1A88E5F800D7C8E2 /* TC_MWV_refresh_icon.png in Resources */,
        9F027D221A8A3A10007B0F0C /* itemised.json in Resources */,
        9F3108661A88E5F700D7C8E2 /* bilgisayar@3x.png in Resources */,
        9F3108481A88E5F700D7C8E2 /* buttonGray@2x.png in Resources */,
        8DA035D91A8DF146006F8C88 /* FilterHeaderView.xib in Resources */,
        9F3108F31A88E81F00D7C8E2 /* PagingScrollContainer.xib in Resources */,
        8D8F9A8E1A9CA6E9003B0ACE /* NotificationTableViewCell.xib in Resources */,
        8D54565B1A93D9D400C2F7B5 /* StoreLocatorFilterVC.xib in Resources */,
        9F3107C51A88E5F700D7C8E2 /* deepPurple2.png in Resources */,
        9F3107D61A88E5F700D7C8E2 /* storeshadow.png in Resources */,
        9F31066A1A88E5F700D7C8E2 /* RG_Bill_sendEmail_BIG.png in Resources */,
        9F31069E1A88E5F700D7C8E2 /* big_shadow.png in Resources */,
        9F3107CB1A88E5F700D7C8E2 /* gri@2x.png in Resources */,
        9F3106071A88E5F700D7C8E2 /* RG_SS_default_header@2x.png in Resources */,
        9F3107F21A88E5F700D7C8E2 /* TC_SL_searchnearbybox.png in Resources */,
        9FF2DE981A4C410B0016523F /* topup.json?productType=2&payment=kk in Resources */,
        682B31101843759000080490 /* SIAlertView.bundle in Resources */,
        9F3107DB1A88E5F700D7C8E2 /* storeturkcellLogoturuncu@2x.png in Resources */,
        9F3107671A88E5F700D7C8E2 /* signout@2x.png in Resources */,
        9F3106AE1A88E5F700D7C8E2 /* search_icon_from_guideline.png in Resources */,
        9F3102561A88E48300D7C8E2 /* AppTourView.xib in Resources */,
        9F3105ED1A88E5F700D7C8E2 /* RG_TU_backbtnarrow@2x.png in Resources */,
        9F3108101A88E5F700D7C8E2 /* TC_tu_arrow04_RIGHT@3x.png in Resources */,
        9F3107F31A88E5F700D7C8E2 /* TC_SL_searchnearbybox@2x.png in Resources */,
        9F3108BF1A88E5F700D7C8E2 /* filterGray@2x.png in Resources */,
        9F3107DF1A88E5F700D7C8E2 /* TC_pin@2x.png in Resources */,
        9F3107811A88E5F700D7C8E2 /* TC_sett2_1.png in Resources */,
        9F3107461A88E5F700D7C8E2 /* date_icon@2x.png in Resources */,
        8D9934B41A8A01BF004BEF44 /* BillStatButtonView.xib in Resources */,
        9F31066C1A88E5F700D7C8E2 /* RG_calendar_icon.png in Resources */,
        8D9934B91A8A3FEA004BEF44 /* BillCompareView.xib in Resources */,
        9F3108AC1A88E5F700D7C8E2 /* TC_tu_type_value_arrow@3x.png in Resources */,
        9F3107A11A88E5F700D7C8E2 /* grayphoneicon@2x.png in Resources */,
        9F3101D41A88E2E900D7C8E2 /* MNTView.xib in Resources */,
        8D62E6FF1A92B985009B71F9 /* StoreLocatorVC.xib in Resources */,
        9F3106171A88E5F700D7C8E2 /* Turkcell Satura Regular.ttf in Resources */,
        9F3108A21A88E5F700D7C8E2 /* TC_tu_main_lable_btn1.png in Resources */,
        9F3106671A88E5F700D7C8E2 /* plus_icon@2x.png in Resources */,
        9F3108221A88E5F700D7C8E2 /* TC_tu_phone@3x.png in Resources */,
        9F3101F01A88E31400D7C8E2 /* FilterSectionHeaderView.xib in Resources */,
        9F3107E11A88E5F700D7C8E2 /* TC_SL_boxbigarrow@2x.png in Resources */,
        9F3106481A88E5F700D7C8E2 /* logo_only_phone_icon@2x.png in Resources */,
        9F31064A1A88E5F700D7C8E2 /* pusula.png in Resources */,
        9F3106241A88E5F700D7C8E2 /* adamli@3x.png in Resources */,
        9F3107DA1A88E5F700D7C8E2 /* storeturkcellLogoTruncu.png in Resources */,
        9F3107471A88E5F700D7C8E2 /* date_icon@3x.png in Resources */,
        9F31082C1A88E5F700D7C8E2 /* RG_tu_arrow01_UP.png in Resources */,
        9F4B576F1A4ABF0B0055582A /* hat.json?settingType=1 in Resources */,
        9F3106941A88E5F700D7C8E2 /* flag_campaign_and_recommendation@3x.png in Resources */,
        9F3108981A88E5F700D7C8E2 /* TC_tu_data_icon_ON.png in Resources */,
        9F31085C1A88E5F700D7C8E2 /* 3G2.png in Resources */,
        9F31081D1A88E5F700D7C8E2 /* TC_tu_arrow09_RIGHT.png in Resources */,
        9F4B57751A4ABF0B0055582A /* kalankullanim.json in Resources */,
        9F31062E1A88E5F700D7C8E2 /* Allowance_data_notification@3x.png in Resources */,
        9F3108451A88E5F700D7C8E2 /* RG_tu_arrow09_UP@2x.png in Resources */,
        9F3106391A88E5F700D7C8E2 /* AllowanceBill_Icon_Other_selected@2x.png in Resources */,
        9F31061B1A88E5F700D7C8E2 /* Icon_144.png in Resources */,
      );
      runOnlyForDeploymentPostprocessing = 0;
    };
/* End PBXResourcesBuildPhase section */

/* Begin PBXShellScriptBuildPhase section */
    BE1E1C0B9F7245C98A3075D0 /* Copy Pods Resources */ = {
      isa = PBXShellScriptBuildPhase;
      buildActionMask = 8;
      files = (
      );
      inputPaths = (
      );
      name = "Copy Pods Resources";
      outputPaths = (
      );
      runOnlyForDeploymentPostprocessing = 1;
      shellPath = /bin/sh;
      shellScript = "\"${SRCROOT}/Pods/Target Support Files/Pods/Pods-resources.sh\"\n";
      showEnvVarsInLog = 0;
    };
    ECA860D218D1B43C00A65EC0 /* Run Script */ = {
      isa = PBXShellScriptBuildPhase;
      buildActionMask = 2147483647;
      files = (
      );
      inputPaths = (
      );
      name = "Run Script";
      outputPaths = (
      );
      runOnlyForDeploymentPostprocessing = 0;
      shellPath = /bin/sh;
      shellScript = "${PROJECT_DIR}/TurkcellHub/InnerFrameworks/Crashlytics/Crashlytics.framework/run f39895ceb4b3c85f7b77433c0856ac4ee9d07f71\n\nif [ ${CONFIGURATION} == \"Debug\" -o ${CONFIGURATION} == \"Release\" ];\nthen\ncp -r ${PROJECT_DIR}/TurkcellHub/Settings.bundle ${BUILT_PRODUCTS_DIR}/${PRODUCT_NAME}.app\ncp -r ${PROJECT_DIR}/TurkcellHub/InnerFrameworks/Omniture/TEST/ADBMobileConfig.json ${BUILT_PRODUCTS_DIR}/${PRODUCT_NAME}.app\nelse\ncp -r ${PROJECT_DIR}/TurkcellHub/InnerFrameworks/Omniture/PROD/ADBMobileConfig.json ${BUILT_PRODUCTS_DIR}/${PRODUCT_NAME}.app\nfi";
    };
    FE08A2BF1F614169907536BF /* Check Pods Manifest.lock */ = {
      isa = PBXShellScriptBuildPhase;
      buildActionMask = 8;
      files = (
      );
      inputPaths = (
      );
      name = "Check Pods Manifest.lock";
      outputPaths = (
      );
      runOnlyForDeploymentPostprocessing = 1;
      shellPath = /bin/sh;
      shellScript = "diff \"${PODS_ROOT}/../Podfile.lock\" \"${PODS_ROOT}/Manifest.lock\" > /dev/null\nif [[ $? != 0 ]] ; then\n    cat << EOM\nerror: The sandbox is not in sync with the Podfile.lock. Run 'pod install' or update your CocoaPods installation.\nEOM\n    exit 1\nfi\n";
      showEnvVarsInLog = 0;
    };
/* End PBXShellScriptBuildPhase section */

/* Begin PBXSourcesBuildPhase section */
    F346F9491793E7CE008D4164 /* Sources */ = {
      isa = PBXSourcesBuildPhase;
      buildActionMask = 2147483647;
      files = (
        9F2C30B21AA49F8000C293EC /* CurioAction.m in Sources */,
        ECA25A41185F45020030ECFD /* BillSummaryCellView.m in Sources */,
        ECF493E218A22BA700546E09 /* PNLineChartDataItem.m in Sources */,
        ECA2EC2017C8A759005F66F7 /* UIView+HUD.m in Sources */,
        9F2C30B31AA49F8000C293EC /* CurioActionToolkit.m in Sources */,
        ECA25A791860487C0030ECFD /* PageControl.m in Sources */,
        9F4B57791A4AFAC70055582A /* AdjustHelper.m in Sources */,
        F30B913217BDFE37002EDC98 /* SBStackedBarChart.m in Sources */,
        ECA25A811860499A0030ECFD /* NKColorSwitch.m in Sources */,
        F30B912E17BDFDE2002EDC98 /* HMSegmentedControl.m in Sources */,
        F30B912C17BDFDCB002EDC98 /* DSBarChart.m in Sources */,
        88A1130C1ACD2C1200E79281 /* ChangePasswordVC.m in Sources */,
        F30B912A17BDFD62002EDC98 /* SettingsRest.m in Sources */,
        ECF493E818A22C6000546E09 /* PNColor.m in Sources */,
        9F3101EB1A88E31400D7C8E2 /* FilterDirectView.m in Sources */,
        88A113041ACC76E000E79281 /* AFNetworkActivityIndicatorManager.m in Sources */,
        8D89BE5B1A975B300060B71A /* UIView+Badge.m in Sources */,
        F30B912617BDFD26002EDC98 /* ISO8601DateFormatter.m in Sources */,
        9F3101D21A88E2E900D7C8E2 /* CampaignView.m in Sources */,
        F30B912517BDFD1B002EDC98 /* HomeRest.m in Sources */,
        ECA25A8918607B4F0030ECFD /* CreditView.m in Sources */,
        9F2C30BD1AA49F8000C293EC /* CurioReachabilityEx.m in Sources */,
        8DA035DE1A8E036E006F8C88 /* BillFilterFooterView.m in Sources */,
        ECA259CF185F40BA0030ECFD /* BaseVC.m in Sources */,
        9F3102721A88E4A000D7C8E2 /* UsageFooterView.m in Sources */,
        68297D101820398B00CC0DEC /* FilterVC.m in Sources */,
        ECF6B59C18AE188B0086C38B /* FTAnimation+UIView.m in Sources */,
        8D44746619D224AF007DD48B /* ActionSheetLocalePicker.m in Sources */,
        ECA25A36185F45020030ECFD /* FilterHeaderView.m in Sources */,
        ECA25A3D185F45020030ECFD /* MostNoticeableStatView.m in Sources */,
        EC7B43A718B2451100FC0334 /* UIColor+SharedColors.m in Sources */,
        9F3102381A88E41900D7C8E2 /* SettingViewModel.m in Sources */,
        9CF2B2B81B4FF9D30095FBBE /* NMPushInboxCell.m in Sources */,
        9F3102961A88E4BA00D7C8E2 /* SearchResultLoadMoreCell.m in Sources */,
        ECA259D0185F40BA0030ECFD /* MenuVC.m in Sources */,
        9F3101BA1A88E26900D7C8E2 /* BillViewModel.m in Sources */,
        88A113081ACC76E000E79281 /* AFXMLRequestOperation.m in Sources */,
        9F31026F1A88E4A000D7C8E2 /* DateSelectorView.m in Sources */,
        ECA25A74186047930030ECFD /* HUDView.m in Sources */,
        ECB8214B189794380014532C /* FirstTimeAppTourView.m in Sources */,
        EC5E45A01845F6E300B77E37 /* MLPAutoCompleteTextField.m in Sources */,
        ED20E4AE1933419D002ABE21 /* OMCCRest.m in Sources */,
        88A113021ACC76E000E79281 /* AFImageRequestOperation.m in Sources */,
        8D9934BC1A8A41C6004BEF44 /* BillCompareItemView.m in Sources */,
        ECF493E718A22C6000546E09 /* PNChartLabel.m in Sources */,
        F346F9611793E7CE008D4164 /* AppDelegate.m in Sources */,
        EC821F991871A65A006EB1D0 /* CommonButton.m in Sources */,
        9F2C30BF1AA49F8000C293EC /* CurioSettings.m in Sources */,
        9F3102B31A88E50600D7C8E2 /* NSNull+Enumeration.m in Sources */,
        9F3101BB1A88E26900D7C8E2 /* ChartView+DataHandler.m in Sources */,
        ECF493EB18A2712700546E09 /* UIHelper.m in Sources */,
        ECA25A29185F45020030ECFD /* BillHistoryButton.m in Sources */,
        EC01E44A181E41DE00626834 /* UsageRest.m in Sources */,
        6878B5A317FABDF70008A26A /* RATreeView.m in Sources */,
        9F31023D1A88E44100D7C8E2 /* WebVC.m in Sources */,
        ECF493F418A285CB00546E09 /* AlertHelper.m in Sources */,
        ECA25A2F185F45020030ECFD /* InternalBillVC.m in Sources */,
        9F3101EF1A88E31400D7C8E2 /* FilterSectionHeaderView.m in Sources */,
        ECF6D24E1817BA7000B281CB /* ExpireMonthYearActionSheetPicker.m in Sources */,
        685F8415183124C100034364 /* MNTREST.m in Sources */,
        ECA259E8185F40EF0030ECFD /* AnonymousHomeVC.m in Sources */,
        8D5456581A93634800C2F7B5 /* StoreWorkHoursCell.m in Sources */,
        88A113001ACC76E000E79281 /* AFHTTPRequestOperation.m in Sources */,
        EC768B7118C087C500313288 /* AXRatingView.m in Sources */,
        EC709CA018D87F0700B47D93 /* SHUncaughtExceptionHandler.m in Sources */,
        9F2C30B61AA49F8000C293EC /* CurioDBToolkit.m in Sources */,
        9F2C30BC1AA49F8000C293EC /* CurioPushData.m in Sources */,
        ECA259EE185F417E0030ECFD /* AllowanceButton.m in Sources */,
        9F2C30B51AA49F8000C293EC /* CurioDB.m in Sources */,
        F346FDD71793EB73008D4164 /* UIImage+Tools.m in Sources */,
        9F3101ED1A88E31400D7C8E2 /* FilterFooterView.m in Sources */,
        F346FDD91793EB73008D4164 /* UIView+Effects.m in Sources */,
        F346FDDA1793EB73008D4164 /* UIView+Layout.m in Sources */,
        ECA25A40185F45020030ECFD /* BillAnalysisDetailVC.m in Sources */,
        ECA25A5D185F4FC00030ECFD /* ComboBoxVC.m in Sources */,
        EC65338718896E3800AB9756 /* UIImage+NoCached.m in Sources */,
        9F3102981A88E4BA00D7C8E2 /* SearchResultOneBoxCell.m in Sources */,
        6878B59E17FABDF70008A26A /* RATreeView+Enums.m in Sources */,
        F34601D61793EC2C008D4164 /* AppSingletonObject.m in Sources */,
        9F3101B31A88E26900D7C8E2 /* AllowanceModelView.m in Sources */,
        ECA25A2C185F45020030ECFD /* BillSummaryPageView.m in Sources */,
        F34601F81793F469008D4164 /* BaseHTTPClient.m in Sources */,
        9F3101B61A88E26900D7C8E2 /* BaseChartView.m in Sources */,
        6878B59C17FABDF70008A26A /* RATreeNodeInfo+Private.m in Sources */,
        683E1F541794923100F5C42A /* UIView+GBAnimate.m in Sources */,
        EC5B601118C8655300485F7A /* NetmeraHelper.m in Sources */,
        9F2C30BA1AA49F8000C293EC /* CurioNotificationManager.m in Sources */,
        9F3102BC1A88E57900D7C8E2 /* AppStatics.m in Sources */,
        9F2C30BE1AA49F8000C293EC /* CurioSDK.m in Sources */,
        EC97ACBB1796BE4500AB780D /* AllowanceRESTHelper.m in Sources */,
        9F3102491A88E46C00D7C8E2 /* BillAnalysisView.m in Sources */,
        88A113071ACC76E000E79281 /* AFURLConnectionOperation.m in Sources */,
        8D5F9BD71A8A8F850007CAEE /* BillDetailsView.m in Sources */,
        EC709C9818D71EEF00B47D93 /* OneProductAndService.m in Sources */,
        ECF6B57718AE0A1A0086C38B /* CircleView.m in Sources */,
        9F2C30B81AA49F8000C293EC /* CurioLocationManager.m in Sources */,
        9F3102061A88E33D00D7C8E2 /* ScrollThingyItemView.m in Sources */,
        9F3101FB1A88E32B00D7C8E2 /* ProfilePhotoActionView.m in Sources */,
        EC97ACBC1796BE4500AB780D /* BillRESTHelper.m in Sources */,
        ECA43515185216AC00119D25 /* KeychainItemWrapper.m in Sources */,
        EC97ACBD1796BE4500AB780D /* NotificationRESTHelper.m in Sources */,
        ECA25A75186047930030ECFD /* LoadingProgressChartView.m in Sources */,
        EC709C9918D71EEF00B47D93 /* ProductAndServicesView.m in Sources */,
        ECA25A951861D1C10030ECFD /* NSError+Extensions.m in Sources */,
        F33307A417A5096B00E8A9C1 /* AccountObject.m in Sources */,
        F33307A717A5096B00E8A9C1 /* ResponseStatus.m in Sources */,
        6878B59F17FABDF70008A26A /* RATreeView+Private.m in Sources */,
        9F3101B81A88E26900D7C8E2 /* BillFooterView.m in Sources */,
        ECA25A62186044910030ECFD /* AllowanceChartCenterView.m in Sources */,
        A51278A3191D1818002CFE51 /* SettingsPageMenuViewCell.m in Sources */,
        ECA25A37185F45020030ECFD /* ItemSearchTextField.m in Sources */,
        EC5E45A51845F6E300B77E37 /* RTLabel.m in Sources */,
        9CF2B2BC1B4FF9D30095FBBE /* NMRichPushViewController.m in Sources */,
        88A113031ACC76E000E79281 /* AFJSONRequestOperation.m in Sources */,
        F33307C517A50C9900E8A9C1 /* PCSimpleLineChartView.m in Sources */,
        F30B90F517BDF9CF002EDC98 /* NSObject+NullRemoving.m in Sources */,
        F30B911917BDFAA3002EDC98 /* SearchRest.m in Sources */,
        F30B911A17BDFAA3002EDC98 /* StoreLocatorRest.m in Sources */,
        EC5E45A41845F6E300B77E37 /* RadioButton.m in Sources */,
        F361E2B917BE37DE00C56475 /* TopUpRest.m in Sources */,
        EC8E91D6181E4B660079F0CC /* UsageItemTableViewCell.m in Sources */,
        ECF493EE18A2733700546E09 /* FontHelper.m in Sources */,
        9F3101FD1A88E32B00D7C8E2 /* SettingsPageHeaderView.m in Sources */,
        68860F6D17FC33B400985C71 /* LocationBasedOfferView.m in Sources */,
        687F6D171805796B0040BF5D /* MKMapView+ZoomLevel.m in Sources */,
        9F3101C81A88E2C200D7C8E2 /* AccountInfoView.m in Sources */,
        ECA259E6185F40EF0030ECFD /* HomeVC.m in Sources */,
        ECA25A6A1860474C0030ECFD /* MenuTableViewCell.m in Sources */,
        684C028717D9A9B700F432ED /* AbstractActionSheetPicker.m in Sources */,
        9CF2B2BA1B4FF9D30095FBBE /* NMPushInboxViewController.m in Sources */,
        9F2C30BB1AA49F8000C293EC /* CurioPostOffice.m in Sources */,
        684C028817D9A9B700F432ED /* ActionSheetCustomPicker.m in Sources */,
        684C028917D9A9B700F432ED /* ActionSheetDatePicker.m in Sources */,
        684C028A17D9A9B700F432ED /* ActionSheetDistancePicker.m in Sources */,
        8D44746719D224AF007DD48B /* SWActionSheet.m in Sources */,
        ECA25A63186044910030ECFD /* AllowanceChartInsideView.m in Sources */,
        684C028B17D9A9B700F432ED /* ActionSheetStringPicker.m in Sources */,
        684C028C17D9A9B700F432ED /* DistancePickerView.m in Sources */,
        684C028D17D9A9B700F432ED /* ExpireDateActionSheetPicker.m in Sources */,
        684C029D17D9EDAF00F432ED /* BaseRest.m in Sources */,
        ECC8A24618C633C000DA52F4 /* main.m in Sources */,
        689ECE8217E2D4E90028BA0D /* iCarousel.m in Sources */,
        8D9F40D71A8B4ED4001503B5 /* BillDetailsViewModel.m in Sources */,
        6817852617E83A150038C04B /* MyCLController.m in Sources */,
        68018F9917EAD3DD00A9950A /* UpdateHelper.m in Sources */,
        8D9934B71A8A3FDD004BEF44 /* BillCompareView.m in Sources */,
        6845D1F6184B118F00A2A566 /* UIViewController+Extensions.m in Sources */,
        9F3101931A88E23D00D7C8E2 /* XYPieChart.m in Sources */,
        683210C81821438B00D5A10A /* RSSearchView.m in Sources */,
        ECA25A2E185F45020030ECFD /* InternalBillSummaryView.m in Sources */,
        68542BDF17F01695004DEFD7 /* AllowancesVC.m in Sources */,
        6878B59A17FABDF70008A26A /* RATreeNode.m in Sources */,
        EC5E45A11845F6E300B77E37 /* NSString+Levenshtein.m in Sources */,
        8D88240F1A95F8040034D754 /* MySettingPUKTableViewCell.m in Sources */,
        EC479AD4183A3EE2003DAC62 /* NotificationsVC.m in Sources */,
        A51278B6191D1922002CFE51 /* OnePopulerServiceView.m in Sources */,
        68BA7D321822843400F951DB /* ValidationalTextField.m in Sources */,
        6878B59D17FABDF70008A26A /* RATreeNodeInfo.m in Sources */,
        685F84071830CC7900034364 /* MNTView.m in Sources */,
        ECF493E018A22BA700546E09 /* PNLineChart.m in Sources */,
        682B31121843759000080490 /* UIWindow+SIUtils.m in Sources */,
        ECA25A3A185F45020030ECFD /* PayBillVC.m in Sources */,
        68383183183FDC8D00A7F63B /* DeviceDetailVC.m in Sources */,
        9F31026D1A88E4A000D7C8E2 /* DateSelectorTableViewCell.m in Sources */,
        9F3102361A88E41900D7C8E2 /* SettingSubViewModel.m in Sources */,
        EC3A34D818487AA000CA941E /* UIApplication+Extensions.m in Sources */,
        EC261EBA1876E3EB001BBBE7 /* CustomException.m in Sources */,
        A51FA58A190815C500737236 /* NSMutableURLRequest+Cookie.m in Sources */,
        ECA25A3B185F45020030ECFD /* BillStatButtonView.m in Sources */,
        88A113051ACC76E000E79281 /* AFPropertyListRequestOperation.m in Sources */,
        9F3102B11A88E50600D7C8E2 /* UINavigationBar+Extensions.m in Sources */,
        8D9934B21A89F67F004BEF44 /* BillAnalysisViewModel.m in Sources */,
        ECF6B59F18AE188B0086C38B /* FTUtils+UIGestureRecognizer.m in Sources */,
        EC67D8141890040900911F61 /* CustomURL.m in Sources */,
        6871F8B9183CD7D10049F05A /* ChatRest.m in Sources */,
        8D2A3A771A94A7CA0073487B /* MNTVC.m in Sources */,
        68542C0317F01695004DEFD7 /* SearchSupportPageView.m in Sources */,
        68542C0417F01695004DEFD7 /* SearchSupportPageVC.m in Sources */,
        88A113061ACC76E000E79281 /* AFURLCache.m in Sources */,
        ECB821671897F3E70014532C /* UIView+Glow.m in Sources */,
        ECA259CA185F02260030ECFD /* NSArray+Extensions.m in Sources */,
        ECA25A32185F45020030ECFD /* FilterOption.m in Sources */,
        ECA25A30185F45020030ECFD /* BillItemsView.m in Sources */,
        ECA259E7185F40EF0030ECFD /* AppTourView.m in Sources */,
        8DB5009C1A95754B00DE9728 /* BillInvoiceDetailViewModel.m in Sources */,
        ECF493E118A22BA700546E09 /* PNLineChartData.m in Sources */,
        68542C0B17F01695004DEFD7 /* StoreDetailsVC.m in Sources */,
        ECBE1D2D18CEFD9E002933C8 /* BaseSlidingVC.m in Sources */,
        68542C0C17F01695004DEFD7 /* StoreLocatorVC.m in Sources */,
        68542C0D17F01695004DEFD7 /* PaymentSuccessVC.m in Sources */,
        9F3101D11A88E2E900D7C8E2 /* CampaignModelView.m in Sources */,
        68542C0F17F01695004DEFD7 /* TopUpPaymentVC.m in Sources */,
        68542C1117F01695004DEFD7 /* TopUpVC.m in Sources */,
        EC8DC59C18B5F73C00E2768C /* TabButton.m in Sources */,
        9F31019B1A88E24800D7C8E2 /* ProductAndServiceViewModel.m in Sources */,
        68542C9A17F016AA004DEFD7 /* AccountView.m in Sources */,
        9F3102A71A88E4C700D7C8E2 /* PayWithCreditCardView.m in Sources */,
        EC01E44D181E41F300626834 /* UsageRESTHelper.m in Sources */,
        A51278B7191D1922002CFE51 /* PopulerServicesView.m in Sources */,
        9F3108F21A88E81F00D7C8E2 /* PagingScrollContainer.m in Sources */,
        68542C9C17F016AA004DEFD7 /* AllowanceChartElementView.m in Sources */,
        9F3102B21A88E50600D7C8E2 /* UITableView+Empty.m in Sources */,
        9F3102301A88E41900D7C8E2 /* MySettingSelectionTableViewCell.m in Sources */,
        68542C9D17F016AA004DEFD7 /* AllowancesScrollView.m in Sources */,
        EC479AD7183A4027003DAC62 /* NotificationTableViewCell.m in Sources */,
        68542CA217F016AA004DEFD7 /* TopUpTextField.m in Sources */,
        6845D1F5184B118F00A2A566 /* NSString+Extensions.m in Sources */,
        8D943FF31A8B811500F6FE20 /* BillDetailsFooterView.m in Sources */,
        68542CA517F016AA004DEFD7 /* OneBillChartView.m in Sources */,
        EC684F7C186AC6E000AF894F /* HomeLoginView.m in Sources */,
        68542CA617F016AA004DEFD7 /* BillsScrollView.m in Sources */,
        EC768B7518C09A3700313288 /* RSWeakifySelf.m in Sources */,
        68542CA917F016AA004DEFD7 /* SimplePieChartView.m in Sources */,
        88A113091ACC76E000E79281 /* UIImageView+AFNetworking.m in Sources */,
        ECA25A33185F45020030ECFD /* FilterOptionTableViewCell.m in Sources */,
        682B31111843759000080490 /* SIAlertView.m in Sources */,
        8D9F40DA1A8B5D2C001503B5 /* BillDetailViewModel.m in Sources */,
        9F3102751A88E4A000D7C8E2 /* UsageViewModel.m in Sources */,
        9F3108F81A88F69500D7C8E2 /* MySettingsVC.m in Sources */,
        9F3102A51A88E4C700D7C8E2 /* LoadTLView.m in Sources */,
        9F3108F11A88E81F00D7C8E2 /* BaseView.m in Sources */,
        68542CB117F016AA004DEFD7 /* RSLabel.m in Sources */,
        68542CB217F016AA004DEFD7 /* RSTextField.m in Sources */,
        ECA25A8518604C150030ECFD /* CommonGestureRecognizerDelegate.m in Sources */,
        9F3102A91A88E4C700D7C8E2 /* PayWithTLCreditView.m in Sources */,
        9F3101BC1A88E26900D7C8E2 /* UILabel+NumberAnimation.m in Sources */,
        8D89BE801A9764E30060B71A /* NotificationsView.m in Sources */,
        9F2C30B41AA49F8000C293EC /* CurioConstants.m in Sources */,
        68542CB517F016AA004DEFD7 /* ChartOverlay.m in Sources */,
        ECA25A31185F45020030ECFD /* BillItemTableViewCell.m in Sources */,
        9F2C30B91AA49F8000C293EC /* CurioNetwork.m in Sources */,
        68542CB817F016AA004DEFD7 /* HomeSearchView.m in Sources */,
        ECA25A39185F45020030ECFD /* BillPaymentTextField.m in Sources */,
        ECF493F118A2739700546E09 /* LocalNotificationsHelper.m in Sources */,
        68542CB917F016AA004DEFD7 /* SettingsPageView.m in Sources */,
        ECA25A2B185F45020030ECFD /* BillPageView.m in Sources */,
        6803A5F617F98C4200EF94B0 /* SearchResultObject.m in Sources */,
        EC3C116818589AF400E04224 /* CMSRest.m in Sources */,
        9F31028F1A88E4BA00D7C8E2 /* FilterItemCell.m in Sources */,
        EC261EB71876D630001BBBE7 /* NSException+Extensions.m in Sources */,
        68542CBB17F016AA004DEFD7 /* CustomInfoView.m in Sources */,
        68542CBC17F016AA004DEFD7 /* EllipseView.m in Sources */,
        68542CBD17F016AA004DEFD7 /* GoogleMapView.m in Sources */,
        ECBE23F61849D2C60091329E /* NotificationCategory.m in Sources */,
        685F841D1831491500034364 /* UploadRest.m in Sources */,
        68542CBE17F016AA004DEFD7 /* GoogleMarker.m in Sources */,
        9F77E7021ACC0EA700A5139F /* NSData+Base64V2.m in Sources */,
        ECA25A34185F45020030ECFD /* ItemFilteringButton.m in Sources */,
        ECA25A42185F45020030ECFD /* ScrollCellView.m in Sources */,
        68542CBF17F016AA004DEFD7 /* MyMapView.m in Sources */,
        68542CC017F016AA004DEFD7 /* RGImageScrollCellView.m in Sources */,
        ECA25A7D1860489C0030ECFD /* ScrollThingyView.m in Sources */,
        689D8882181FDA0700481CDA /* FilterButton.m in Sources */,
        68542CC117F016AA004DEFD7 /* RGStoreAnnotation.m in Sources */,
        9F3101B11A88E26900D7C8E2 /* AllowanceFooterView.m in Sources */,
        ECA25A6E1860477D0030ECFD /* BillPageScrollView.m in Sources */,
        6878B59B17FABDF70008A26A /* RATreeNodeCollectionController.m in Sources */,
        ECA25A2A185F45020030ECFD /* BillMenuButton.m in Sources */,
        88A1130F1ACD2CB200E79281 /* LoginRest.m in Sources */,
        EC5E45731845DD5200B77E37 /* MenuItem.m in Sources */,
        ECA25A2D185F45020030ECFD /* BillsVC.m in Sources */,
        6878B5A217FABDF70008A26A /* RATreeView+UIScrollView.m in Sources */,
        68542CC217F016AA004DEFD7 /* RGStoreAnnotationView.m in Sources */,
        68542CC317F016AA004DEFD7 /* StoreLocatorPageView.m in Sources */,
        68542CC417F016AA004DEFD7 /* RGUserAnnotation.m in Sources */,
        9F77E6FF1ACB00ED00A5139F /* BeaconHelper.m in Sources */,
        68542CC617F016AA004DEFD7 /* TimCalloutView.m in Sources */,
        68542CC717F016AA004DEFD7 /* TimView.m in Sources */,
        EC6D433418D1E6F80036E4FA /* NSMutableDictionary+Extensions.m in Sources */,
        9F3108F91A88F69500D7C8E2 /* SettingsVC.m in Sources */,
        8D89BE851A97688B0060B71A /* NotificationInfoView.m in Sources */,
        EC782483189F8FEC00DACEFD /* FakeDataSourceHelper.m in Sources */,
        88A112FF1ACC76E000E79281 /* AFHTTPClient.m in Sources */,
        8DA035E51A8E3132006F8C88 /* BillAnalysisDetailViewModel.m in Sources */,
        9F3102351A88E41900D7C8E2 /* SettingMainViewModel.m in Sources */,
        EC5E459F1845F6E300B77E37 /* MBProgressHUD.m in Sources */,
        9F31024E1A88E46C00D7C8E2 /* FoldableListView.m in Sources */,
        EC684FCF186C5B1A00AF894F /* UDHelper.m in Sources */,
        EC78249118A0ED4C00DACEFD /* CustomRefreshControl.m in Sources */,
        9F3102941A88E4BA00D7C8E2 /* SearchResultInAppCell.m in Sources */,
        6809803817F0170800984FF5 /* AFHTTPRequestOperation+Extensions.m in Sources */,
        9F2C30B71AA49F8000C293EC /* CurioLocationData.m in Sources */,
        6809803917F0170800984FF5 /* NSData+JSONUtilities.m in Sources */,
        88A113011ACC76E000E79281 /* AFHTTPRequestOperationLogger.m in Sources */,
        6870978B17F01814004836A6 /* BillRest.m in Sources */,
        9F3101C11A88E28500D7C8E2 /* CreditViewModel.m in Sources */,
        6870979317F018D7004836A6 /* ECSlidingViewController.m in Sources */,
        9F3102331A88E41900D7C8E2 /* MySettingTableViewCell.m in Sources */,
        9F2C30C01AA49F8000C293EC /* CurioUtil.m in Sources */,
        6878B54617FA95630008A26A /* MenuRest.m in Sources */,
        9F31024B1A88E46C00D7C8E2 /* BillSummaryView.m in Sources */,
        EC261EB218759D4B001BBBE7 /* LoggingRest.m in Sources */,
        9F3101991A88E24800D7C8E2 /* ProductAndServiceView.m in Sources */,
        ECA25A3E185F45020030ECFD /* MyBillStatsView.m in Sources */,
        6870979517F018D7004836A6 /* UIImage+ImageWithUIView.m in Sources */,
        EC65338118891FB900AB9756 /* Stats.m in Sources */,
        ECF6B59D18AE188B0086C38B /* FTAnimationManager.m in Sources */,
        6841FB6818450EE70064F061 /* APNRest.m in Sources */,
        6829F3E017F15F82002F3C48 /* GBAlertView.m in Sources */,
        6878B5A117FABDF70008A26A /* RATreeView+TableViewDelegate.m in Sources */,
        6829F3E117F15F82002F3C48 /* GBCheckBox.m in Sources */,
        9F3102921A88E4BA00D7C8E2 /* SearchResultCell.m in Sources */,
        6878B5A017FABDF70008A26A /* RATreeView+TableViewDataSource.m in Sources */,
        EC01E447181E411B00626834 /* MyUsageVC.m in Sources */,
        EC709CA318D87FAF00B47D93 /* PropertyRest.m in Sources */,
        683210C518213BFE00D5A10A /* StoreLocatorFilterVC.m in Sources */,
        68FB2EBD17F3072500EE1457 /* CampaignsView.m in Sources */,
        9F3101B41A88E26900D7C8E2 /* AllowancePurchaseView.m in Sources */,
        68FB2EC017F309AF00EE1457 /* OneCampaignView.m in Sources */,
        6837BC6617F40A730035ED51 /* NextPrevView.m in Sources */,
        ECA25A3F185F45020030ECFD /* PeriodSliderView.m in Sources */,
        ECF6B59E18AE188B0086C38B /* FTUtils+NSObject.m in Sources */,
      );
      runOnlyForDeploymentPostprocessing = 0;
    };
/* End PBXSourcesBuildPhase section */

/* Begin XCBuildConfiguration section */
    98ADBC07184CA9340062C216 /* AppStore */ = {
      isa = XCBuildConfiguration;
      buildSettings = {
        ALWAYS_SEARCH_USER_PATHS = NO;
        CLANG_ANALYZER_DEADCODE_DEADSTORES = YES;
        CLANG_ANALYZER_MEMORY_MANAGEMENT = YES;
        CLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";
        CLANG_CXX_LIBRARY = "libc++";
        CLANG_ENABLE_OBJC_ARC = YES;
        CLANG_WARN_CONSTANT_CONVERSION = YES;
        CLANG_WARN_EMPTY_BODY = YES;
        CLANG_WARN_ENUM_CONVERSION = YES;
        CLANG_WARN_INT_CONVERSION = YES;
        CLANG_WARN__ARC_BRIDGE_CAST_NONARC = YES;
        CLANG_WARN__DUPLICATE_METHOD_MATCH = YES;
        CODE_SIGN_IDENTITY = "iPhone Distribution";
        "CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Distribution";
        CODE_SIGN_RESOURCE_RULES_PATH = "$(SDKROOT)/ResourceRules.plist";
        COPY_PHASE_STRIP = YES;
        GCC_C_LANGUAGE_STANDARD = gnu99;
        GCC_WARN_ABOUT_RETURN_TYPE = YES;
        GCC_WARN_UNINITIALIZED_AUTOS = YES;
        GCC_WARN_UNUSED_VARIABLE = YES;
        INFOPLIST_PREFIX_HEADER = "$(SRCROOT)/TurkcellHub/SupportingFiles/InfoPlistPreprocessorDefinitions.h";
        INFOPLIST_PREPROCESS = YES;
        IPHONEOS_DEPLOYMENT_TARGET = 6.0;
        ONLY_ACTIVE_ARCH = YES;
        OTHER_CFLAGS = "-DNS_BLOCK_ASSERTIONS=1";
        OTHER_LDFLAGS = (
          "-ObjC",
          "-all_load",
        );
        PROVISIONING_PROFILE = "";
        "PROVISIONING_PROFILE[sdk=iphoneos*]" = "";
        SDKROOT = iphoneos;
        VALIDATE_PRODUCT = YES;
        VALID_ARCHS = "arm64 armv7 armv7s";
      };
      name = AppStore;
    };
    98ADBC08184CA9340062C216 /* AppStore */ = {
      isa = XCBuildConfiguration;
      baseConfigurationReference = C7A0F729D97DDBE26C753F0F /* Pods.appstore.xcconfig */;
      buildSettings = {
        ARCHS = "$(ARCHS_STANDARD)";
        ASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;
        ASSETCATALOG_COMPILER_LAUNCHIMAGE_NAME = LaunchImage;
        CLANG_ANALYZER_DEADCODE_DEADSTORES = YES;
        CLANG_ENABLE_MODULES = NO;
        CODE_SIGN_ENTITLEMENTS = "TurkcellHub/Entitlement-AppStore.plist";
        CODE_SIGN_IDENTITY = "";
        "CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "";
        DYLIB_COMPATIBILITY_VERSION = "";
        FRAMEWORK_SEARCH_PATHS = (
          "$(inherited)",
          "$(SRCROOT)/TurkcellHub/InnerFrameworks/**",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/NetmeraSDK",
          "$(PROJECT_DIR)",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Crashlytics",
          "$(PROJECT_DIR)/TurkcellHub",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Tbeacon",
          "$(PROJECT_DIR)/TurkcellHub/Resources",
        );
        GCC_INCREASE_PRECOMPILED_HEADER_SHARING = YES;
        GCC_INPUT_FILETYPE = automatic;
        GCC_INSTRUMENT_PROGRAM_FLOW_ARCS = NO;
        GCC_PRECOMPILE_PREFIX_HEADER = YES;
        GCC_PREFIX_HEADER = "TurkcellHub/SupportingFiles/TurkcellHub-Prefix.pch";
        GCC_PREPROCESSOR_DEFINITIONS = (
          "STORE=1",
          "$(inherited)",
        );
        GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = NO;
        GCC_TREAT_INCOMPATIBLE_POINTER_TYPE_WARNINGS_AS_ERRORS = NO;
        GCC_WARN_ABOUT_MISSING_NEWLINE = NO;
        GCC_WARN_UNKNOWN_PRAGMAS = YES;
        GCC_WARN_UNUSED_FUNCTION = NO;
        GCC_WARN_UNUSED_LABEL = NO;
        GCC_WARN_UNUSED_PARAMETER = NO;
        GENERATE_PROFILING_CODE = NO;
        INFOPLIST_FILE = "$(SRCROOT)/TurkcellHub/SupportingFiles/TurkcellHub-AppStore-Info.plist";
        INFOPLIST_PREFIX_HEADER = "$(SRCROOT)/TurkcellHub/SupportingFiles/InfoPlistPreprocessorDefinitions.h";
        INFOPLIST_PREPROCESS = YES;
        IPHONEOS_DEPLOYMENT_TARGET = 6.0;
        LIBRARY_SEARCH_PATHS = (
          "$(inherited)",
          "$(SRCROOT)/TurkcellHub/ThirdParty/**",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Omniture",
          "$(PROJECT_DIR)/TurkcellHub/ThirdParty/GoogleAnalytics_3.09",
          "$(PROJECT_DIR)/TurkcellHub/ThirdParty/ComScore",
        );
        ONLY_ACTIVE_ARCH = NO;
        PRODUCT_NAME = "$(TARGET_NAME)";
        PROVISIONING_PROFILE = "";
        "PROVISIONING_PROFILE[sdk=iphoneos*]" = "";
        SDKROOT = iphoneos;
        VALID_ARCHS = "armv7 armv7s arm64 i386 x86_64";
        WRAPPER_EXTENSION = app;
      };
      name = AppStore;
    };
    98ADBC09184CA93B0062C216 /* Enterprise */ = {
      isa = XCBuildConfiguration;
      buildSettings = {
        ALWAYS_SEARCH_USER_PATHS = NO;
        CLANG_ANALYZER_DEADCODE_DEADSTORES = YES;
        CLANG_ANALYZER_MEMORY_MANAGEMENT = YES;
        CLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";
        CLANG_CXX_LIBRARY = "libc++";
        CLANG_ENABLE_OBJC_ARC = YES;
        CLANG_WARN_CONSTANT_CONVERSION = YES;
        CLANG_WARN_EMPTY_BODY = YES;
        CLANG_WARN_ENUM_CONVERSION = YES;
        CLANG_WARN_INT_CONVERSION = YES;
        CLANG_WARN__ARC_BRIDGE_CAST_NONARC = YES;
        CLANG_WARN__DUPLICATE_METHOD_MATCH = YES;
        CODE_SIGN_IDENTITY = "iPhone Distribution";
        "CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Distribution";
        CODE_SIGN_RESOURCE_RULES_PATH = "$(SDKROOT)/ResourceRules.plist";
        COPY_PHASE_STRIP = YES;
        GCC_C_LANGUAGE_STANDARD = gnu99;
        GCC_WARN_ABOUT_RETURN_TYPE = YES;
        GCC_WARN_UNINITIALIZED_AUTOS = YES;
        GCC_WARN_UNUSED_VARIABLE = YES;
        INFOPLIST_PREFIX_HEADER = "$(SRCROOT)/TurkcellHub/SupportingFiles/InfoPlistPreprocessorDefinitions.h";
        INFOPLIST_PREPROCESS = YES;
        IPHONEOS_DEPLOYMENT_TARGET = 6.0;
        ONLY_ACTIVE_ARCH = YES;
        OTHER_CFLAGS = "-DNS_BLOCK_ASSERTIONS=1";
        OTHER_LDFLAGS = (
          "-ObjC",
          "-all_load",
        );
        PROVISIONING_PROFILE = "";
        "PROVISIONING_PROFILE[sdk=iphoneos*]" = "";
        SDKROOT = iphoneos;
        VALIDATE_PRODUCT = YES;
        VALID_ARCHS = "arm64 armv7 armv7s";
      };
      name = Enterprise;
    };
    98ADBC0A184CA93B0062C216 /* Enterprise */ = {
      isa = XCBuildConfiguration;
      baseConfigurationReference = 6D31CA061715B922730EAB8A /* Pods.enterprise.xcconfig */;
      buildSettings = {
        ARCHS = "$(ARCHS_STANDARD)";
        ASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;
        ASSETCATALOG_COMPILER_LAUNCHIMAGE_NAME = LaunchImage;
        CLANG_ANALYZER_DEADCODE_DEADSTORES = YES;
        CLANG_ENABLE_MODULES = NO;
        CODE_SIGN_ENTITLEMENTS = "TurkcellHub/Entitlement-Enterprise.plist";
        CODE_SIGN_IDENTITY = "";
        "CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "";
        DYLIB_COMPATIBILITY_VERSION = "";
        FRAMEWORK_SEARCH_PATHS = (
          "$(inherited)",
          "$(SRCROOT)/TurkcellHub/InnerFrameworks/**",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/NetmeraSDK",
          "$(PROJECT_DIR)",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Crashlytics",
          "$(PROJECT_DIR)/TurkcellHub",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Tbeacon",
          "$(PROJECT_DIR)/TurkcellHub/Resources",
        );
        GCC_INCREASE_PRECOMPILED_HEADER_SHARING = YES;
        GCC_INPUT_FILETYPE = automatic;
        GCC_INSTRUMENT_PROGRAM_FLOW_ARCS = NO;
        GCC_PRECOMPILE_PREFIX_HEADER = YES;
        GCC_PREFIX_HEADER = "TurkcellHub/SupportingFiles/TurkcellHub-Prefix.pch";
        GCC_PREPROCESSOR_DEFINITIONS = (
          "ENTERPRISE=1",
          "$(inherited)",
        );
        GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = NO;
        GCC_TREAT_INCOMPATIBLE_POINTER_TYPE_WARNINGS_AS_ERRORS = NO;
        GCC_WARN_ABOUT_MISSING_NEWLINE = NO;
        GCC_WARN_UNKNOWN_PRAGMAS = YES;
        GCC_WARN_UNUSED_FUNCTION = NO;
        GCC_WARN_UNUSED_LABEL = NO;
        GCC_WARN_UNUSED_PARAMETER = NO;
        GENERATE_PROFILING_CODE = NO;
        INFOPLIST_FILE = "$(SRCROOT)/TurkcellHub/SupportingFiles/TurkcellHub-Enterprise-Info.plist";
        INFOPLIST_PREFIX_HEADER = "$(SRCROOT)/TurkcellHub/SupportingFiles/InfoPlistPreprocessorDefinitions.h";
        INFOPLIST_PREPROCESS = YES;
        IPHONEOS_DEPLOYMENT_TARGET = 6.0;
        LIBRARY_SEARCH_PATHS = (
          "$(inherited)",
          "$(SRCROOT)/TurkcellHub/ThirdParty/**",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Omniture",
          "$(PROJECT_DIR)/TurkcellHub/ThirdParty/GoogleAnalytics_3.09",
          "$(PROJECT_DIR)/TurkcellHub/ThirdParty/ComScore",
        );
        ONLY_ACTIVE_ARCH = NO;
        PRODUCT_NAME = "$(TARGET_NAME)";
        PROVISIONING_PROFILE = "";
        "PROVISIONING_PROFILE[sdk=iphoneos*]" = "";
        SDKROOT = iphoneos;
        VALID_ARCHS = "armv7 armv7s arm64 i386 x86_64";
        WRAPPER_EXTENSION = app;
      };
      name = Enterprise;
    };
    F346F96E1793E7CE008D4164 /* Debug */ = {
      isa = XCBuildConfiguration;
      buildSettings = {
        ALWAYS_SEARCH_USER_PATHS = NO;
        CLANG_ANALYZER_DEADCODE_DEADSTORES = YES;
        CLANG_ANALYZER_MEMORY_MANAGEMENT = YES;
        CLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";
        CLANG_CXX_LIBRARY = "libc++";
        CLANG_ENABLE_OBJC_ARC = YES;
        CLANG_WARN_CONSTANT_CONVERSION = YES;
        CLANG_WARN_EMPTY_BODY = YES;
        CLANG_WARN_ENUM_CONVERSION = YES;
        CLANG_WARN_INT_CONVERSION = YES;
        CLANG_WARN__ARC_BRIDGE_CAST_NONARC = YES;
        CLANG_WARN__DUPLICATE_METHOD_MATCH = YES;
        CODE_SIGN_IDENTITY = "iPhone Developer: Kerem Gunduz (AHW663RCRZ)";
        "CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Developer: Kerem Gunduz (AHW663RCRZ)";
        CODE_SIGN_RESOURCE_RULES_PATH = "$(SDKROOT)/ResourceRules.plist";
        COPY_PHASE_STRIP = NO;
        GCC_C_LANGUAGE_STANDARD = gnu99;
        GCC_DYNAMIC_NO_PIC = NO;
        GCC_GENERATE_TEST_COVERAGE_FILES = YES;
        GCC_INSTRUMENT_PROGRAM_FLOW_ARCS = YES;
        GCC_OPTIMIZATION_LEVEL = 0;
        GCC_PREPROCESSOR_DEFINITIONS = (
          "DEBUG=1",
          "$(inherited)",
        );
        GCC_SYMBOLS_PRIVATE_EXTERN = NO;
        GCC_WARN_ABOUT_RETURN_TYPE = YES;
        GCC_WARN_UNINITIALIZED_AUTOS = YES;
        GCC_WARN_UNUSED_VARIABLE = YES;
        INFOPLIST_PREFIX_HEADER = "$(SRCROOT)/TurkcellHub/SupportingFiles/InfoPlistPreprocessorDefinitions.h";
        INFOPLIST_PREPROCESS = YES;
        IPHONEOS_DEPLOYMENT_TARGET = 6.0;
        ONLY_ACTIVE_ARCH = YES;
        OTHER_LDFLAGS = (
          "-ObjC",
          "-all_load",
        );
        PROVISIONING_PROFILE = "b1aa5184-9e83-49db-a418-262afbb906f3";
        SDKROOT = iphoneos;
        VALID_ARCHS = "arm64 armv7 armv7s";
      };
      name = Debug;
    };
    F346F96F1793E7CE008D4164 /* Release */ = {
      isa = XCBuildConfiguration;
      buildSettings = {
        ALWAYS_SEARCH_USER_PATHS = NO;
        CLANG_ANALYZER_DEADCODE_DEADSTORES = YES;
        CLANG_ANALYZER_MEMORY_MANAGEMENT = YES;
        CLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";
        CLANG_CXX_LIBRARY = "libc++";
        CLANG_ENABLE_OBJC_ARC = YES;
        CLANG_WARN_CONSTANT_CONVERSION = YES;
        CLANG_WARN_EMPTY_BODY = YES;
        CLANG_WARN_ENUM_CONVERSION = YES;
        CLANG_WARN_INT_CONVERSION = YES;
        CLANG_WARN__ARC_BRIDGE_CAST_NONARC = YES;
        CLANG_WARN__DUPLICATE_METHOD_MATCH = YES;
        CODE_SIGN_IDENTITY = "iPhone Distribution: Kerem Gunduz (F49E5GW326)";
        "CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Distribution: Kerem Gunduz (F49E5GW326)";
        CODE_SIGN_RESOURCE_RULES_PATH = "$(SDKROOT)/ResourceRules.plist";
        COPY_PHASE_STRIP = YES;
        GCC_C_LANGUAGE_STANDARD = gnu99;
        GCC_WARN_ABOUT_RETURN_TYPE = YES;
        GCC_WARN_UNINITIALIZED_AUTOS = YES;
        GCC_WARN_UNUSED_VARIABLE = YES;
        INFOPLIST_PREFIX_HEADER = "$(SRCROOT)/TurkcellHub/SupportingFiles/InfoPlistPreprocessorDefinitions.h";
        INFOPLIST_PREPROCESS = YES;
        IPHONEOS_DEPLOYMENT_TARGET = 6.0;
        ONLY_ACTIVE_ARCH = YES;
        OTHER_CFLAGS = "-DNS_BLOCK_ASSERTIONS=1";
        OTHER_LDFLAGS = (
          "-ObjC",
          "-all_load",
        );
        PROVISIONING_PROFILE = "a195de0e-57cb-42ee-8352-ae5f0a153852";
        "PROVISIONING_PROFILE[sdk=iphoneos*]" = "a195de0e-57cb-42ee-8352-ae5f0a153852";
        SDKROOT = iphoneos;
        VALIDATE_PRODUCT = YES;
        VALID_ARCHS = "arm64 armv7 armv7s";
      };
      name = Release;
    };
    F346F9711793E7CE008D4164 /* Debug */ = {
      isa = XCBuildConfiguration;
      baseConfigurationReference = 193D0C6257F69AC5FA196110 /* Pods.debug.xcconfig */;
      buildSettings = {
        ARCHS = "$(ARCHS_STANDARD)";
        ASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;
        ASSETCATALOG_COMPILER_LAUNCHIMAGE_NAME = LaunchImage;
        CLANG_ANALYZER_DEADCODE_DEADSTORES = YES;
        CLANG_ENABLE_MODULES = NO;
        CODE_SIGN_ENTITLEMENTS = TurkcellHub/Entitlement.plist;
        CODE_SIGN_IDENTITY = "iOS Development: Kerem Gunduz (AHW663RCRZ)";
        "CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iOS Development: Kerem Gunduz (AHW663RCRZ)";
        DYLIB_COMPATIBILITY_VERSION = "";
        FRAMEWORK_SEARCH_PATHS = (
          "$(inherited)",
          "$(SRCROOT)/TurkcellHub/InnerFrameworks/**",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/NetmeraSDK",
          "$(PROJECT_DIR)",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Crashlytics",
          "$(PROJECT_DIR)/TurkcellHub",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Tbeacon",
          "$(PROJECT_DIR)/TurkcellHub/Resources",
        );
        GCC_GENERATE_TEST_COVERAGE_FILES = NO;
        GCC_INCREASE_PRECOMPILED_HEADER_SHARING = YES;
        GCC_INPUT_FILETYPE = automatic;
        GCC_INSTRUMENT_PROGRAM_FLOW_ARCS = NO;
        GCC_PRECOMPILE_PREFIX_HEADER = YES;
        GCC_PREFIX_HEADER = "TurkcellHub/SupportingFiles/TurkcellHub-Prefix.pch";
        GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = NO;
        GCC_TREAT_INCOMPATIBLE_POINTER_TYPE_WARNINGS_AS_ERRORS = NO;
        GCC_WARN_ABOUT_MISSING_NEWLINE = NO;
        GCC_WARN_UNKNOWN_PRAGMAS = YES;
        GCC_WARN_UNUSED_FUNCTION = NO;
        GCC_WARN_UNUSED_LABEL = NO;
        GCC_WARN_UNUSED_PARAMETER = NO;
        GENERATE_PROFILING_CODE = NO;
        INFOPLIST_FILE = "$(SRCROOT)/TurkcellHub/SupportingFiles/TurkcellHub-Info.plist";
        INFOPLIST_PREFIX_HEADER = "$(SRCROOT)/TurkcellHub/SupportingFiles/InfoPlistPreprocessorDefinitions.h";
        INFOPLIST_PREPROCESS = YES;
        IPHONEOS_DEPLOYMENT_TARGET = 6.0;
        LIBRARY_SEARCH_PATHS = (
          "$(inherited)",
          "$(SRCROOT)/TurkcellHub/ThirdParty/**",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Omniture",
          "$(PROJECT_DIR)/TurkcellHub/ThirdParty/GoogleAnalytics_3.09",
          "$(PROJECT_DIR)/TurkcellHub/ThirdParty/ComScore",
        );
        ONLY_ACTIVE_ARCH = YES;
        PRODUCT_NAME = "$(TARGET_NAME)";
        PROVISIONING_PROFILE = "";
        SDKROOT = iphoneos;
        VALID_ARCHS = "armv7 armv7s arm64 i386 x86_64";
        WRAPPER_EXTENSION = app;
      };
      name = Debug;
    };
    F346F9721793E7CE008D4164 /* Release */ = {
      isa = XCBuildConfiguration;
      baseConfigurationReference = 20D978DAB32014DE50218A14 /* Pods.release.xcconfig */;
      buildSettings = {
        ARCHS = "$(ARCHS_STANDARD)";
        ASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;
        ASSETCATALOG_COMPILER_LAUNCHIMAGE_NAME = LaunchImage;
        CLANG_ANALYZER_DEADCODE_DEADSTORES = YES;
        CLANG_ENABLE_MODULES = NO;
        CODE_SIGN_ENTITLEMENTS = TurkcellHub/Entitlement.plist;
        CODE_SIGN_IDENTITY = "iPhone Distribution: Kerem Gunduz (F49E5GW326)";
        "CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Distribution: Kerem Gunduz (F49E5GW326)";
        DYLIB_COMPATIBILITY_VERSION = "";
        FRAMEWORK_SEARCH_PATHS = (
          "$(inherited)",
          "$(SRCROOT)/TurkcellHub/InnerFrameworks/**",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/NetmeraSDK",
          "$(PROJECT_DIR)",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Crashlytics",
          "$(PROJECT_DIR)/TurkcellHub",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Tbeacon",
          "$(PROJECT_DIR)/TurkcellHub/Resources",
        );
        GCC_INCREASE_PRECOMPILED_HEADER_SHARING = YES;
        GCC_INPUT_FILETYPE = automatic;
        GCC_INSTRUMENT_PROGRAM_FLOW_ARCS = NO;
        GCC_PRECOMPILE_PREFIX_HEADER = YES;
        GCC_PREFIX_HEADER = "TurkcellHub/SupportingFiles/TurkcellHub-Prefix.pch";
        GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = NO;
        GCC_TREAT_INCOMPATIBLE_POINTER_TYPE_WARNINGS_AS_ERRORS = NO;
        GCC_WARN_ABOUT_MISSING_NEWLINE = NO;
        GCC_WARN_UNKNOWN_PRAGMAS = YES;
        GCC_WARN_UNUSED_FUNCTION = NO;
        GCC_WARN_UNUSED_LABEL = NO;
        GCC_WARN_UNUSED_PARAMETER = NO;
        GENERATE_PROFILING_CODE = NO;
        INFOPLIST_FILE = "$(SRCROOT)/TurkcellHub/SupportingFiles/TurkcellHub-Info.plist";
        INFOPLIST_PREFIX_HEADER = "$(SRCROOT)/TurkcellHub/SupportingFiles/InfoPlistPreprocessorDefinitions.h";
        INFOPLIST_PREPROCESS = YES;
        IPHONEOS_DEPLOYMENT_TARGET = 6.0;
        LIBRARY_SEARCH_PATHS = (
          "$(inherited)",
          "$(SRCROOT)/TurkcellHub/ThirdParty/**",
          "$(PROJECT_DIR)/TurkcellHub/InnerFrameworks/Omniture",
          "$(PROJECT_DIR)/TurkcellHub/ThirdParty/GoogleAnalytics_3.09",
          "$(PROJECT_DIR)/TurkcellHub/ThirdParty/ComScore",
        );
        ONLY_ACTIVE_ARCH = NO;
        PRODUCT_NAME = "$(TARGET_NAME)";
        PROVISIONING_PROFILE = "48628869-1d78-4cd4-b2d3-d132dbeff459";
        SDKROOT = iphoneos;
        VALID_ARCHS = "armv7 armv7s arm64 i386 x86_64";
        WRAPPER_EXTENSION = app;
      };
      name = Release;
    };
/* End XCBuildConfiguration section */

/* Begin XCConfigurationList section */
    F346F9481793E7CE008D4164 /* Build configuration list for PBXProject "TurkcellHub" */ = {
      isa = XCConfigurationList;
      buildConfigurations = (
        F346F96E1793E7CE008D4164 /* Debug */,
        F346F96F1793E7CE008D4164 /* Release */,
        98ADBC07184CA9340062C216 /* AppStore */,
        98ADBC09184CA93B0062C216 /* Enterprise */,
      );
      defaultConfigurationIsVisible = 0;
      defaultConfigurationName = Release;
    };
    F346F9701793E7CE008D4164 /* Build configuration list for PBXNativeTarget "TurkcellHub" */ = {
      isa = XCConfigurationList;
      buildConfigurations = (
        F346F9711793E7CE008D4164 /* Debug */,
        F346F9721793E7CE008D4164 /* Release */,
        98ADBC08184CA9340062C216 /* AppStore */,
        98ADBC0A184CA93B0062C216 /* Enterprise */,
      );
      defaultConfigurationIsVisible = 0;
      defaultConfigurationName = Release;
    };
/* End XCConfigurationList section */
  };
  rootObject = F346F9451793E7CE008D4164 /* Project object */;
}
