//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString;

@interface PHKeyword : PHObject
{
    NSString *_title;
    NSString *_shortcut;
}

+ (id)fetchKeywordsForAsset:(id)arg1 options:(id)arg2;
+ (id)fetchKeywordsWithTitles:(id)arg1 options:(id)arg2;
+ (id)fetchKeywordsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchKeywordsWithOptions:(id)arg1;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)entityKeyMap;
+ (id)identifierCode;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

