//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import "NUImageDataResult.h"

@class NSDictionary, NSString, NUImageGeometry;

@interface _NUImageDataResult : _NURenderResult <NUImageDataResult>
{
    NSDictionary *_data;
    NUImageGeometry *_geometry;
}

- (void).cxx_destruct;
@property(retain) NUImageGeometry *geometry; // @synthesize geometry=_geometry;
@property(copy) NSDictionary *data; // @synthesize data=_data;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

