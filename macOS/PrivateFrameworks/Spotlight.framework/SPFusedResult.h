//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightServices/SFSearchResult_SpotlightExtras.h>

@class NSArray, NSMutableArray;

@interface SPFusedResult : SFSearchResult_SpotlightExtras
{
    NSMutableArray *_childResults;
}

- (void).cxx_destruct;
@property(readonly) NSArray *childResults; // @synthesize childResults=_childResults;
- (BOOL)isLocalResult;
- (void)addResult:(id)arg1;
- (id)initWithResult:(id)arg1;

@end

