//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCActivity.h>

@class NSMutableSet;

@interface MCAggregateActivity : MCActivity
{
    NSMutableSet *_childActivities;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *childActivities; // @synthesize childActivities=_childActivities;
- (void)cancel;
- (void)childActivityFinished:(id)arg1;
@property(readonly, nonatomic) unsigned long long childCount;
- (void)addChildActivity:(id)arg1 withProgressUnitCount:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

