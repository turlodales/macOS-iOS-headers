//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface XQueryModules : NSObject
{
    NSMutableArray *_namespaces;
    NSMutableDictionary *_namespaceIDs;
    NSMutableArray *_prologs;
}

+ (id)builtinNamespaceForID:(long long)arg1;
+ (id)modules;
+ (void)initialize;
- (void)addProlog:(id)arg1 forID:(unsigned long long)arg2;
- (id)prologForID:(long long)arg1;
- (unsigned long long)namespaceID:(id)arg1 canCreate:(BOOL)arg2;
- (id)namespaceForID:(unsigned long long)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end

