//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@protocol EDConversationRemoteStorage <NSObject>
- (NSString *)storageName;
- (BOOL)synchronize;
- (void)refresh;
- (NSDictionary *)dictionaryRepresentation;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (void)removeDictionaryForKey:(NSString *)arg1;
- (void)setDictionary:(NSMutableDictionary *)arg1 forKey:(NSString *)arg2;
- (_Bool)isInitialized;
@end

