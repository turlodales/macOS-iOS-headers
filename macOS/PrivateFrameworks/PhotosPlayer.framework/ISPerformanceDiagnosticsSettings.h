//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISSettings.h>

__attribute__((visibility("hidden")))
@interface ISPerformanceDiagnosticsSettings : ISSettings
{
    BOOL _shouldTracePerformance;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL shouldTracePerformance; // @synthesize shouldTracePerformance=_shouldTracePerformance;
- (void)setDefaultValues;

@end

