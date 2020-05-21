//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UAPasteboardItemProviding.h"

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _NSRemotePasteboardDataProvider : NSObject <UAPasteboardItemProviding>
{
    long long _generation;
    long long _itemIdentifier;
    struct __CFString *_flavorName;
    NSUUID *_uuid;
}

@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy) NSString *description;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSString *type;
- (id)initWithGeneration:(long long)arg1 itemIdentifier:(long long)arg2 flavorName:(struct __CFString *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

