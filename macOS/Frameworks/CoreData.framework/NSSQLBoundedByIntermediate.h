//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

