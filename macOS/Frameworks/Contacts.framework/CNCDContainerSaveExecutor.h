//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNCDSaveContext;

__attribute__((visibility("hidden")))
@interface CNCDContainerSaveExecutor : NSObject
{
    CNCDSaveContext *_saveContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNCDSaveContext *saveContext; // @synthesize saveContext=_saveContext;
- (void)saveContainers;
- (id)initWithSaveContext:(id)arg1;

@end

