//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

@class NSAttributeDescription, NSExpression, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLBoundedByIntermediate : NSSQLIntermediate
{
    NSSQLEntity *_entity;
    NSAttributeDescription *_target;
    NSExpression *_bounds;
}

- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;
- (id)initWithWorkingEntity:(id)arg1 target:(id)arg2 bounds:(id)arg3 scope:(id)arg4;

@end

