//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLRelationship.h>

@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;

__attribute__((visibility("hidden")))
@interface NSSQLToOne : NSSQLRelationship
{
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    BOOL _isVirtual;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (BOOL)isOptional;
- (unsigned int)slot;
- (BOOL)isVirtual;
- (id)description;
- (id)columnName;
- (id)foreignOrderKey;
- (void)_setForeignOrderKey:(id)arg1;
- (id)foreignEntityKey;
- (id)foreignKey;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 inverseToMany:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3;

@end

