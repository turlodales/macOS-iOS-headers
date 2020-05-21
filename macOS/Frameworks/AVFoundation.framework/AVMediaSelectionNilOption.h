//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionNilOption : AVMediaSelectionOption
{
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)description;
- (BOOL)_representsNilSelection;
- (BOOL)isPlayable;
- (id)_groupMediaType;
- (id)_groupID;
- (id)group;
- (id)dictionary;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithGroup:(id)arg1;

@end

