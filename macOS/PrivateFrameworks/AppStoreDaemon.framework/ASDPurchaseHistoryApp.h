//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSString, NSURL;

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding>
{
    BOOL _familyShared;
    BOOL _firstParty;
    BOOL _hasMessagesExtension;
    BOOL _hasP3;
    BOOL _hidden;
    BOOL _hiddenFromSpringboard;
    BOOL _is32BitOnly;
    BOOL _isPreorder;
    BOOL _supportsIPad;
    BOOL _supportsIPhone;
    BOOL _supportsLayeredImage;
    BOOL _watchAppDeliveredIniOSApp;
    BOOL _watchAppRunsIndependently;
    BOOL _watchOnly;
    unsigned int _purchaseToken;
    NSString *_bundleID;
    NSString *_circularIconURLString;
    long long _contentRatingFlags;
    NSDate *_datePurchased;
    NSString *_developerName;
    long long _genreID;
    NSString *_genreName;
    NSString *_iconURLString;
    NSString *_longTitle;
    NSString *_ovalIconURLString;
    NSURL *_preflightPackageURL;
    NSURL *_productURL;
    long long _purchaserDSID;
    NSString *_redownloadParams;
    NSArray *_requiredCapabilities;
    long long _storeItemID;
    NSString *_title;
    unsigned long long _lockerItemID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long lockerItemID; // @synthesize lockerItemID=_lockerItemID;
@property unsigned int purchaseToken; // @synthesize purchaseToken=_purchaseToken;
@property BOOL watchOnly; // @synthesize watchOnly=_watchOnly;
@property BOOL watchAppRunsIndependently; // @synthesize watchAppRunsIndependently=_watchAppRunsIndependently;
@property BOOL watchAppDeliveredIniOSApp; // @synthesize watchAppDeliveredIniOSApp=_watchAppDeliveredIniOSApp;
@property(copy) NSString *title; // @synthesize title=_title;
@property BOOL supportsLayeredImage; // @synthesize supportsLayeredImage=_supportsLayeredImage;
@property BOOL supportsIPhone; // @synthesize supportsIPhone=_supportsIPhone;
@property BOOL supportsIPad; // @synthesize supportsIPad=_supportsIPad;
@property long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(copy) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(copy) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property long long purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(copy) NSURL *productURL; // @synthesize productURL=_productURL;
@property(copy) NSURL *preflightPackageURL; // @synthesize preflightPackageURL=_preflightPackageURL;
@property(copy) NSString *ovalIconURLString; // @synthesize ovalIconURLString=_ovalIconURLString;
@property(copy) NSString *longTitle; // @synthesize longTitle=_longTitle;
@property BOOL isPreorder; // @synthesize isPreorder=_isPreorder;
@property BOOL is32BitOnly; // @synthesize is32BitOnly=_is32BitOnly;
@property(copy) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(getter=isHiddenFromSpringboard) BOOL hiddenFromSpringboard; // @synthesize hiddenFromSpringboard=_hiddenFromSpringboard;
@property(getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property BOOL hasP3; // @synthesize hasP3=_hasP3;
@property BOOL hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property(copy) NSString *genreName; // @synthesize genreName=_genreName;
@property long long genreID; // @synthesize genreID=_genreID;
@property(getter=isFirstParty) BOOL firstParty; // @synthesize firstParty=_firstParty;
@property(getter=isFamilyShared) BOOL familyShared; // @synthesize familyShared=_familyShared;
@property(copy) NSString *developerName; // @synthesize developerName=_developerName;
@property(copy) NSDate *datePurchased; // @synthesize datePurchased=_datePurchased;
@property long long contentRatingFlags; // @synthesize contentRatingFlags=_contentRatingFlags;
@property(copy) NSString *circularIconURLString; // @synthesize circularIconURLString=_circularIconURLString;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)_setBooleanPropertiesForBitfield:(int)arg1;
- (int)_bitfieldForBooleanProperties;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

