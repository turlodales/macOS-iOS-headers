//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArrayController, NSMutableDictionary, OSADictionary, OSADictionaryHistory;

@interface OSADictionaryControllerPrivate : NSObject
{
    OSADictionary *_dictionary;
    NSMutableDictionary *_dataSource;
    NSArrayController *_definitionsController;
    OSADictionaryHistory *_dictionaryHistory;
    BOOL _selectingObjects;
}

- (void)setSelectingObjects:(BOOL)arg1;
- (BOOL)selectingObjects;
- (void)setDictionaryHistory:(id)arg1;
- (id)dictionaryHistory;
- (void)setDefinitionsController:(id)arg1;
- (id)definitionsController;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)setDictionary:(id)arg1;
- (id)dictionary;
- (void)dealloc;
- (id)init;

@end

