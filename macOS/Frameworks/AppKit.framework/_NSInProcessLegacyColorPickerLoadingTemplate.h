//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSColorPickerTemplate.h"

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface _NSInProcessLegacyColorPickerLoadingTemplate : NSObject <_NSColorPickerTemplate>
{
    NSBundle *_bundle;
}

- (void)createAndPrepareColorPickerWithInitialMask:(unsigned long long)arg1 colorPanel:(id)arg2 completionHandle:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

