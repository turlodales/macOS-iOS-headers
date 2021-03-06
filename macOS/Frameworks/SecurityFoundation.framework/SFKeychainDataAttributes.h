//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeychainItemAttributes-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFKeychainDataAttributes : NSObject <SFKeychainItemAttributes>
{
    id _keychainDataAttributesInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *persistentIdentifier;
@property(readonly) Class superclass;

@end

