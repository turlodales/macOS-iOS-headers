//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEODataURLSessionTask.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask
{
    NSURL *_downloadedFileURL;
}

- (void).cxx_destruct;
- (void)didFinishDownloadingToURL:(id)arg1;
- (id)downloadedFileURL;
- (id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2;

@end

