//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TISKInputEvent.h>

@interface TISKDeleteKeyEvent : TISKInputEvent
{
    long long _deletePostion;
}

@property(nonatomic) long long deletePostion; // @synthesize deletePostion=_deletePostion;
- (id)description;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;
- (long long)_metricDeleteKeyPostion;
- (id)init:(id)arg1 order:(long long)arg2;

@end

