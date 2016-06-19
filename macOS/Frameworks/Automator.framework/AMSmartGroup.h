//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/AMGroup.h>

@class NSPredicate;

@interface AMSmartGroup : AMGroup
{
    NSPredicate *_predicate;
    unsigned long long _itemLimit;
    BOOL _hasItemLimit;
}

- (id)assets;
- (void)setItemLimit:(unsigned long long)arg1;
- (unsigned long long)itemLimit;
- (void)setHasItemLimit:(BOOL)arg1;
- (BOOL)hasItemLimit;
- (void)setPredicate:(id)arg1;
- (id)predicate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end

