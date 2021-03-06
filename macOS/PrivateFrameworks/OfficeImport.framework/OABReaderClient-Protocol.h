//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ESDContainer, ESDObject, OABReaderState, OADDrawable, OADGraphic, OADGroup, OADTableCell, OCPPackagePart;

@protocol OABReaderClient
+ (OADDrawable *)readDrawableFromPackagePart:(OCPPackagePart *)arg1 foundInObject:(ESDObject *)arg2 state:(OABReaderState *)arg3;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(OABReaderState *)arg2;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;
+ (BOOL)tablesAreAllowed;
+ (BOOL)escherIsFullySupported;
+ (void)readClientDataFromTableCell:(ESDObject *)arg1 toTableCell:(OADTableCell *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromGroup:(ESDContainer *)arg1 toGroup:(OADGroup *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromShape:(ESDObject *)arg1 toGraphic:(OADGraphic *)arg2 state:(OABReaderState *)arg3;
@end

