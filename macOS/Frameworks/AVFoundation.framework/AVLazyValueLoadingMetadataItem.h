//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMetadataItem.h>

@class AVLazyValueLoadingMetadataItemInternal;

__attribute__((visibility("hidden")))
@interface AVLazyValueLoadingMetadataItem : AVMetadataItem
{
    AVLazyValueLoadingMetadataItemInternal *_lazyMetadataItem;
}

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;
- (id)dataType;
- (id)value;
- (void)_waitForLoadingOfValueDependentKey:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (long long)_valueStatus;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (void)_valueRequestDidFinish;
- (void)dealloc;
- (id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;

@end

