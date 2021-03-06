/* Generated by RuntimeBrowser.
 */

@protocol _SFPBNewCommandValue <NSObject>

@required

- (_SFPBInvokeSiriCommand *)InvokeSiriCommand;
- (_SFPBOpenCalculationCommand *)OpenCalculationCommand;
- (_SFPBPerformContactQueryCommand *)PerformContactQueryCommand;
- (_SFPBUpdateSearchQueryCommand *)UpdateSearchQueryCommand;
- (_SFPBIndexedUserActivityCommand *)indexedUserActivityCommand;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBLaunchAppCommand *)launchAppCommand;
- (_SFPBOpenAppClipCommand *)openAppClipCommand;
- (_SFPBOpenCoreSpotlightItemCommand *)openCoreSpotlightItemCommand;
- (_SFPBOpenFileProviderItemCommand *)openFileProviderItemCommand;
- (_SFPBOpenPunchoutCommand *)openPunchoutCommand;
- (_SFPBOpenWebClipCommand *)openWebClipCommand;
- (_SFPBPerformIntentCommand *)performIntentCommand;
- (_SFPBPlayVideoCommand *)playVideoCommand;
- (_SFPBRequestAppClipInstallCommand *)requestAppClipInstallCommand;
- (_SFPBRequestUserReportCommand *)requestUserReportCommand;
- (_SFPBRunVoiceShortcutCommand *)runVoiceShortcutCommand;
- (_SFPBSearchInAppCommand *)searchInAppCommand;
- (_SFPBSearchWebCommand *)searchWebCommand;
- (void)setIndexedUserActivityCommand:(_SFPBIndexedUserActivityCommand *)arg1;
- (void)setInvokeSiriCommand:(_SFPBInvokeSiriCommand *)arg1;
- (void)setLaunchAppCommand:(_SFPBLaunchAppCommand *)arg1;
- (void)setOpenAppClipCommand:(_SFPBOpenAppClipCommand *)arg1;
- (void)setOpenCalculationCommand:(_SFPBOpenCalculationCommand *)arg1;
- (void)setOpenCoreSpotlightItemCommand:(_SFPBOpenCoreSpotlightItemCommand *)arg1;
- (void)setOpenFileProviderItemCommand:(_SFPBOpenFileProviderItemCommand *)arg1;
- (void)setOpenPunchoutCommand:(_SFPBOpenPunchoutCommand *)arg1;
- (void)setOpenWebClipCommand:(_SFPBOpenWebClipCommand *)arg1;
- (void)setPerformContactQueryCommand:(_SFPBPerformContactQueryCommand *)arg1;
- (void)setPerformIntentCommand:(_SFPBPerformIntentCommand *)arg1;
- (void)setPlayVideoCommand:(_SFPBPlayVideoCommand *)arg1;
- (void)setRequestAppClipInstallCommand:(_SFPBRequestAppClipInstallCommand *)arg1;
- (void)setRequestUserReportCommand:(_SFPBRequestUserReportCommand *)arg1;
- (void)setRunVoiceShortcutCommand:(_SFPBRunVoiceShortcutCommand *)arg1;
- (void)setSearchInAppCommand:(_SFPBSearchInAppCommand *)arg1;
- (void)setSearchWebCommand:(_SFPBSearchWebCommand *)arg1;
- (void)setShowAppStoreSheetCommand:(_SFPBShowAppStoreSheetCommand *)arg1;
- (void)setShowContactCardCommand:(_SFPBShowContactCardCommand *)arg1;
- (void)setShowSFCardCommand:(_SFPBShowSFCardCommand *)arg1;
- (void)setUpdateSearchQueryCommand:(_SFPBUpdateSearchQueryCommand *)arg1;
- (_SFPBShowAppStoreSheetCommand *)showAppStoreSheetCommand;
- (_SFPBShowContactCardCommand *)showContactCardCommand;
- (_SFPBShowSFCardCommand *)showSFCardCommand;

@end
