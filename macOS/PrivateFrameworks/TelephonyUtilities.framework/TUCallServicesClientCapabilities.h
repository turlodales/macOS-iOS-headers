//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>
{
    BOOL _wantsCallDisconnectionOnInvalidation;
    BOOL _wantsFrequencyChangeNotifications;
    id <TUCallServicesClientCapabilitiesActions> _delegate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TUCallServicesClientCapabilitiesActions> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL wantsFrequencyChangeNotifications; // @synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications;
@property(nonatomic) BOOL wantsCallDisconnectionOnInvalidation; // @synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;

@end

