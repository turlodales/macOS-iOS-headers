//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUExportJob.h>

@class NSData;

@interface NUImageExportJob : NUExportJob
{
    NSData *_destinationData;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)render:(out id *)arg1;
- (BOOL)wantsOutputImage;
- (BOOL)wantsOutputGeometry;
- (id)result;
- (id)imageDestinationOptions;
- (id)_filterProperties:(id)arg1;
- (id)imageExportRequest;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithImageExportRequest:(id)arg1;

@end

