//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAssetRepresentationObserver.h"

@class PHAssetRepresentation;

@protocol PHAssetRepresentationDownloadObserver <PHAssetRepresentationObserver>
- (void)downloadStateOfAssetRepresentationDidChange:(PHAssetRepresentation *)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;

@optional
- (void)downloadOfAssetRepresentation:(PHAssetRepresentation *)arg1 didProgress:(double)arg2;
@end

