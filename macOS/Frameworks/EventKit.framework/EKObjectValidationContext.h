//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKObject;

@interface EKObjectValidationContext : NSObject
{
    BOOL _reachedMaxDepth;
    EKObject *_rootObject;
    unsigned long long _depth;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL reachedMaxDepth; // @synthesize reachedMaxDepth=_reachedMaxDepth;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) EKObject *rootObject; // @synthesize rootObject=_rootObject;
- (void)faultIfNeededForObject:(id)arg1;
- (id)initWithRootObject:(id)arg1;

@end

