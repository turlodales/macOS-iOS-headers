//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@interface NSMutableDictionary (PKMerge)
- (id)_createOrConvertToMutableDictionaryFromDictionary:(id)arg1;
- (id)_mutableDictionaryAtKeyPath:(id)arg1;
- (void)_overlayCustomValueAtKeyPath:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_overlayValueAtKey:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 targetTakePrecedent:(BOOL)arg4 nestedDictionaryHandler:(CDUnknownBlockType)arg5;
- (void)pk_removeItemsAtKeyPaths:(id)arg1;
- (void)pk_overlayDictionary:(id)arg1 existingValuesTakePrecedent:(BOOL)arg2 exceptKeyPaths:(id)arg3 exemptionHandler:(CDUnknownBlockType)arg4;
@end

