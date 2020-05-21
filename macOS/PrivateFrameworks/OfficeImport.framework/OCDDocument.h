//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, OADBlipCollection, OADGraphicStyleCache, OADTableStyleCollection, OADTextListStyle, OADTheme, OCDReader, OCDSummary, OCDWriter, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface OCDDocument : NSObject
{
    OCDWriter *mWriter;
    OCDSummary *mSummary;
    OADBlipCollection *mBlips;
    NSMutableArray *mCharts;
    OADTableStyleCollection *mTableStyles;
    OITSUPointerKeyDictionary *mDualDrawableMap;
    OADTheme *mDocumentTheme;
    OADTextListStyle *mDefaultTextStyle;
    OADGraphicStyleCache *mGraphicStyleCache;
    NSData *mEncryptionInfo;
    OCDReader *mReader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OADGraphicStyleCache *graphicStyleCache; // @synthesize graphicStyleCache=mGraphicStyleCache;
@property(readonly, nonatomic) OADTextListStyle *defaultTextStyle; // @synthesize defaultTextStyle=mDefaultTextStyle;
@property(readonly, nonatomic) OITSUPointerKeyDictionary *dualDrawableMap; // @synthesize dualDrawableMap=mDualDrawableMap;
@property(readonly, nonatomic) OADTableStyleCollection *tableStyles; // @synthesize tableStyles=mTableStyles;
@property(readonly, nonatomic) NSMutableArray *charts; // @synthesize charts=mCharts;
@property(readonly, nonatomic) OADBlipCollection *blips; // @synthesize blips=mBlips;
@property(readonly, nonatomic) OCDSummary *summary; // @synthesize summary=mSummary;
@property(retain, nonatomic) OCDWriter *writer; // @synthesize writer=mWriter;
@property(retain, nonatomic) OCDReader *reader; // @synthesize reader=mReader;
- (id)bulletBlips;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)setEncryptionInfo:(id)arg1;
- (id)encryptionInfo;
- (_Bool)isFromBinaryFile;
- (id)init;

@end

