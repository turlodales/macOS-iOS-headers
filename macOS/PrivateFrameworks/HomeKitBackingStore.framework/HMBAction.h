//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSMutableCopying-Protocol.h>

@interface HMBAction : HMFObject <NSCopying, NSMutableCopying>
{
    BOOL _shouldUpdateClients;
}

+ (id)shouldUpdateClientsAction;
@property(nonatomic) BOOL shouldUpdateClients; // @synthesize shouldUpdateClients=_shouldUpdateClients;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

