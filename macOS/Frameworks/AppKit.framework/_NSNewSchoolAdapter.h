//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSSaveAccessoryAdapter.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _NSNewSchoolAdapter : NSSaveAccessoryAdapter
{
    NSArray *_trackedConstraints;
}

@property(retain, nonatomic) NSArray *trackedConstraints; // @synthesize trackedConstraints=_trackedConstraints;
- (void)constrainAccessoryToSelf:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)accFrameChanged:(id)arg1;
- (void)adapt:(id)arg1 andTrackConstraints:(id)arg2;
- (void)dealloc;

@end

