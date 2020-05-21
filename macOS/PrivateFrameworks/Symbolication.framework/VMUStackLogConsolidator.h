//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VMUDebugTimer;

@interface VMUStackLogConsolidator : NSObject
{
    id <VMUCommonGraphInterface> _graph;
    id <VMUStackLogReader> _stackLogReader;
    VMUDebugTimer *_debugTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
- (id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(CDUnknownBlockType)arg2;
- (id)stackIDsToNodesWithFilter:(CDUnknownBlockType)arg1;
- (id)initWithGraph:(id)arg1 stackLogReader:(id)arg2;

@end

