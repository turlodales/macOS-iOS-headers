//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VNOperationPointsProviding.h"

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding>
{
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    unsigned long long _requestRevision;
}

- (void).cxx_destruct;
- (id)operationPointsAndReturnError:(id *)arg1;
- (id)initWithOperationPointsCache:(id)arg1 requestRevision:(unsigned long long)arg2;

@end

