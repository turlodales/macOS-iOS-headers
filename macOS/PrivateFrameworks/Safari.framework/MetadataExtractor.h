//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSMetadataExtractor.h>

__attribute__((visibility("hidden")))
@interface MetadataExtractor : WBSMetadataExtractor
{
    struct BundleFrame _bundleFrame;
    struct BundleScriptWorld _isolatedWorld;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)makeContext;
- (void)dealloc;
- (id)initWithBundleFrame:(const struct BundleFrame *)arg1;

@end

