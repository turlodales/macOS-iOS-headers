/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWidgetConfigDataOperation : FCOperation {
    FCHeldRecords * _cachedRecords;
    <FCContentContext> * _context;
    NSArray * _recordSources;
    NSDictionary * _recordSourcesByRecordType;
    NSArray * _resultArticleIDs;
    NSArray * _resultArticleListIDs;
    NSDictionary * _resultDefaultConfigurationDictionary;
    NSDictionary * _resultHeldRecordsByType;
    NSDictionary * _resultSingleTagConfigurationDictionary;
    id /* block */  _widgetConfigDataCompletionHandler;
    NSDictionary * _widgetConfiguration;
}

@property (nonatomic, retain) FCHeldRecords *cachedRecords;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) NSArray *recordSources;
@property (nonatomic, retain) NSDictionary *recordSourcesByRecordType;
@property (nonatomic, retain) NSArray *resultArticleIDs;
@property (nonatomic, retain) NSArray *resultArticleListIDs;
@property (nonatomic, retain) NSDictionary *resultDefaultConfigurationDictionary;
@property (nonatomic, retain) NSDictionary *resultHeldRecordsByType;
@property (nonatomic, retain) NSDictionary *resultSingleTagConfigurationDictionary;
@property (nonatomic, copy) id /* block */ widgetConfigDataCompletionHandler;
@property (nonatomic, copy) NSDictionary *widgetConfiguration;

- (void).cxx_destruct;
- (void)_collectRecordsFromWidgetConfigDictionary:(id)arg1;
- (void)_finalizeResultFromCachedRecords;
- (id)_recordSourceForRecordType:(id)arg1;
- (id)cachedRecords;
- (id)context;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)recordSources;
- (id)recordSourcesByRecordType;
- (id)resultArticleIDs;
- (id)resultArticleListIDs;
- (id)resultDefaultConfigurationDictionary;
- (id)resultHeldRecordsByType;
- (id)resultSingleTagConfigurationDictionary;
- (void)setCachedRecords:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setRecordSources:(id)arg1;
- (void)setRecordSourcesByRecordType:(id)arg1;
- (void)setResultArticleIDs:(id)arg1;
- (void)setResultArticleListIDs:(id)arg1;
- (void)setResultDefaultConfigurationDictionary:(id)arg1;
- (void)setResultHeldRecordsByType:(id)arg1;
- (void)setResultSingleTagConfigurationDictionary:(id)arg1;
- (void)setWidgetConfigDataCompletionHandler:(id /* block */)arg1;
- (void)setWidgetConfiguration:(id)arg1;
- (bool)validateOperation;
- (id /* block */)widgetConfigDataCompletionHandler;
- (id)widgetConfiguration;

@end
