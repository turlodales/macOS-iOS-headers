//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetInspectorLoader, NSArray, NSData, NSDictionary, NSURL;

@interface AVMovieInternal : NSObject
{
    AVAssetInspectorLoader *loader;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSArray *tracks;
    long long makeTracksArrayOnce;
}

@end

