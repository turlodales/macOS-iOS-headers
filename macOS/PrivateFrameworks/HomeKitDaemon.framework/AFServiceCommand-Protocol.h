//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol AFServiceCommand <NSObject>

@optional
- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1 serviceHelper:(id <AFServiceHelper>)arg2;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1;
@end

