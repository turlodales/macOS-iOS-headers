//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface _NSControllerArrayProxy : NSArray
{
    id _controller;
}

- (void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObjectAtIndex:(unsigned long long)arg4;
- (BOOL)_validateValue:(id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(id *)arg4;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)clearController;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithController:(id)arg1;

@end

