//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFDiskCacheExpirationPolicy.h>

@interface PFDiskCacheExpirationPolicy_TotalSize : PFDiskCacheExpirationPolicy
{
    long long _maxMegabytesToUse;
}

+ (id)expirationPolicyWithTotalSize:(long long)arg1;
- (id)description;
- (long long)calculateOverage:(long long)arg1 freeSpace:(long long)arg2 volumeSizeInBytes:(long long)arg3;
- (id)initWithMaxMegabytesToUse:(long long)arg1;

@end

