//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSControllerObjectProxy : NSObject
{
    id _controller;
}

- (BOOL)validateValue:(id *)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)_proxyMutableArrayValueForKeyPath:(id)arg1;
- (id)_proxyMutableArrayValueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)_valueWithOperatorKeyPath:(id)arg1;
- (long long)_requestTypeForOperationKey:(id)arg1;
- (void)clearController;
- (id)initWithController:(id)arg1;

@end

