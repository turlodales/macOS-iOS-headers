//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkStatistics/NWStatisticsSource.h>

@interface NWStatisticsInterfaceSource : NWStatisticsSource
{
    struct nstat_ifnet_descriptor _descriptor;
}

- (id)initWithManager:(id)arg1 interface:(long long)arg2 threshold:(long long)arg3;
- (id)description;
- (id)_currentSnapshot;
- (int)handleDescriptor:(void *)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3;

@end

