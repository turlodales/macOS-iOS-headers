//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCloudKitMirroringImportRequest, PFCloudKitImporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterWorkItem : NSObject
{
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
}

@property(readonly, nonatomic) NSCloudKitMirroringImportRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) PFCloudKitImporterOptions *options; // @synthesize options=_options;
- (void)doWorkWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2;

@end

