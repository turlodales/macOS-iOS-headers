//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TMStructure;

@protocol TMStructureProtocol <NSObject>
@property(readonly) NSArray *children;
- (void)removeChild:(TMStructure *)arg1;
- (void)addChild:(TMStructure *)arg1;
- (NSArray *)childrenOfType:(NSString *)arg1;
@end

