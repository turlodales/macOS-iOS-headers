//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSet.h"

@interface NSSet (CWNetwork)
- (id)mergedNetworks;
- (id)networksWithSSID:(id)arg1;
- (id)networksWithNoiseMinimum:(long long)arg1 maximum:(long long)arg2;
- (id)networksWithRSSIMinimum:(long long)arg1 maximum:(long long)arg2;
- (id)networksWithChannels:(id)arg1;
- (id)networksWithPHYMode:(unsigned long long)arg1;
- (id)networksWithSecurityType:(unsigned long long)arg1;
- (id)infrastructureNetworks;
- (id)ibssNetworks;
@end

