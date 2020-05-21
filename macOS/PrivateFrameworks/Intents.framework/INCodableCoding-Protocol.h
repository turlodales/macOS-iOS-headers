//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INStringLocalizer, NSDictionary, NSString;

@protocol INCodableCoding <NSObject>
@property(readonly, copy, nonatomic) NSString *keyPrefix;
@property(readonly, copy, nonatomic) NSString *cacheGroup;
- (NSDictionary *)dictionaryRepresentationWithLocalizer:(INStringLocalizer *)arg1;
- (NSDictionary *)dictionaryRepresentation;
- (void)updateWithDictionary:(NSDictionary *)arg1;
- (NSString *)dictionaryKeyForKeyPath:(NSString *)arg1;
@end

