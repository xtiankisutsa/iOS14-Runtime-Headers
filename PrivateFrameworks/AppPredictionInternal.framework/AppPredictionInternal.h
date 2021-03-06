#import <AppPredictionInternal/ATXNotificationsPBContentFeatures.h>
#import <AppPredictionInternal/ATXTimeBucketedRateLimiter.h>
#import <AppPredictionInternal/ATXHomeScreenLogEngagementKeyTracker.h>
#import <AppPredictionInternal/ATXHomeScreenLogWidgetRotationDictionaries.h>
#import <AppPredictionInternal/ATXBackupService.h>
#import <AppPredictionInternal/ATXDailyRoutinesTriggerManager.h>
#import <AppPredictionInternal/_ATXScoreTypes.h>
#import <AppPredictionInternal/ATXMPBBlendingLayerRefreshTracker.h>
#import <AppPredictionInternal/ATXIntentMetadataCacheInvalidationMonitor.h>
#import <AppPredictionInternal/ATXAnchorModelOfflineDataHarvester.h>
#import <AppPredictionInternal/ATXPBPredictionTimeContext.h>
#import <AppPredictionInternal/ATXInformationFilterGuardedData.h>
#import <AppPredictionInternal/ATXInformationFilter.h>
#import <AppPredictionInternal/ATXActionSessionLog.h>
#import <AppPredictionInternal/ATXActionPredictionsHelpers.h>
#import <AppPredictionInternal/ATXHomeScreenLayoutSelectorPageState.h>
#import <AppPredictionInternal/ATXHomeScreenLayoutSelector.h>
#import <AppPredictionInternal/AWDProactiveAppPredictionActionTimeEstimateContainer.h>
#import <AppPredictionInternal/ATXMagicalMomentsPBMMPredictedCountTracker.h>
#import <AppPredictionInternal/ATXMMAppPredictionExpert.h>
#import <AppPredictionInternal/ATXPrivacyPreservingLocationHash.h>
#import <AppPredictionInternal/ATXMPBCacheAgeAtCacheRefreshTracker.h>
#import <AppPredictionInternal/ATXAppIconStateLogger.h>
#import <AppPredictionInternal/ATXFileUtil.h>
#import <AppPredictionInternal/ATXCarPlayDisconnectedMMExpert.h>
#import <AppPredictionInternal/ATXAnchorModelEventFeaturizer.h>
#import <AppPredictionInternal/ATXMPBBlendingClientModelHomeScreenLayoutTracker.h>
#import <AppPredictionInternal/ATXPredictedTransitionsCache.h>
#import <AppPredictionInternal/ATXAppDirectoryOrderingProvider.h>
#import <AppPredictionInternal/ATXAnchorModelAnchorEventHandler.h>
#import <AppPredictionInternal/ATXAnchorModelPredictionSchedulerGuardedData.h>
#import <AppPredictionInternal/ATXAnchorModelPredictionScheduler.h>
#import <AppPredictionInternal/ATXXPCActivity.h>
#import <AppPredictionInternal/ATXProactiveSuggestionBuilder.h>
#import <AppPredictionInternal/ATXActionStatistics.h>
#import <AppPredictionInternal/ATXSlotResolutionParametersStatistics.h>
#import <AppPredictionInternal/ATXSlotResolutionSlotSetStatistics.h>
#import <AppPredictionInternal/ATXSlotResolutionStatistics.h>
#import <AppPredictionInternal/ATXAnchorModelTrainer.h>
#import <AppPredictionInternal/ATXFakeAnchorModelTrainer.h>
#import <AppPredictionInternal/ATXScreenLockStateDuetEvent.h>
#import <AppPredictionInternal/ATXNotificationsPriors.h>
#import <AppPredictionInternal/ATXAnchorModelEventHarvester.h>
#import <AppPredictionInternal/ATXFakeSuggestionDeduplicator.h>
#import <AppPredictionInternal/_ATXScoreInterpreterCtx.h>
#import <AppPredictionInternal/_ATXScoreInterpreter.h>
#import <AppPredictionInternal/ATXBiomeStreamInspector.h>
#import <AppPredictionInternal/ATXHeroAppFeedback.h>
#import <AppPredictionInternal/ATXScoredActionWithReason.h>
#import <AppPredictionInternal/ATXAnchorModelActionPredictionPostProcessor.h>
#import <AppPredictionInternal/ATXInformationFeatureSet.h>
#import <AppPredictionInternal/ATXMPBAnchorModelPhaseFilterTracker.h>
#import <AppPredictionInternal/ATXAlarmsWrapper.h>
#import <AppPredictionInternal/_ATXInspectionClient.h>
#import <AppPredictionInternal/ATXHomeScreenWidgetFeedbackProcessor.h>
#import <AppPredictionInternal/ATXFallbackActionsFeedback.h>
#import <AppPredictionInternal/ATXMLActionProducer.h>
#import <AppPredictionInternal/_ATXAppInstallMonitor.h>
#import <AppPredictionInternal/_ATXFeedbackConstants.h>
#import <AppPredictionInternal/_ATXCategoricalHistogram.h>
#import <AppPredictionInternal/ATXDisplayIdentifiers.h>
#import <AppPredictionInternal/_ATXInternalUninstallNotification.h>
#import <AppPredictionInternal/ATXMPBScreenLogUnlockSessionTracker.h>
#import <AppPredictionInternal/ATXHeroAppBlendingUpdater.h>
#import <AppPredictionInternal/ATXActionTimeEstimateAWDTracker.h>
#import <AppPredictionInternal/ATXNotificationsPBEvent.h>
#import <AppPredictionInternal/ATXUserMetricsLogger.h>
#import <AppPredictionInternal/ATXUserMetricsLoggerTargetPET.h>
#import <AppPredictionInternal/ATXAnchorModelPBAppLaunchMetadata.h>
#import <AppPredictionInternal/ATXDisplayCache.h>
#import <AppPredictionInternal/ATXIntentEvent.h>
#import <AppPredictionInternal/ATXPredictionLocationMotionContext.h>
#import <AppPredictionInternal/ATXPBPredictionLocationOfInterest.h>
#import <AppPredictionInternal/ATXHomeScreenWidgetBlacklistGuardedData.h>
#import <AppPredictionInternal/ATXHomeScreenWidgetBlacklistManager.h>
#import <AppPredictionInternal/ATXDisplayCacheSpotlightFilter.h>
#import <AppPredictionInternal/AWDProactiveAppData.h>
#import <AppPredictionInternal/_ATXAppLaunchSequence.h>
#import <AppPredictionInternal/ATXScoreLogSerialization.h>
#import <AppPredictionInternal/_ATXActionPredictionsLogger.h>
#import <AppPredictionInternal/ATXAppClipsBlendingUpdater.h>
#import <AppPredictionInternal/ATXAudioConnectedAnchor.h>
#import <AppPredictionInternal/ATXNotificationsSuggestionScoreCache.h>
#import <AppPredictionInternal/ATXNotificationsSuggestion.h>
#import <AppPredictionInternal/ATXInternalMagicalMomentsAppPredictionNotification.h>
#import <AppPredictionInternal/ATXAppPredictorPredictionChunks.h>
#import <AppPredictionInternal/ATXBluetoothConnectedAnchor.h>
#import <AppPredictionInternal/ATXAudioDuetEvent.h>
#import <AppPredictionInternal/_ATXMovingAverage.h>
#import <AppPredictionInternal/ATXMagicalMomentsContexts.h>
#import <AppPredictionInternal/ATXMagicalMomentsPredictionTableEntry.h>
#import <AppPredictionInternal/ATXMagicalMomentsPredictionTable.h>
#import <AppPredictionInternal/ATXPBPredictionAmbientLightContext.h>
#import <AppPredictionInternal/ATXContextSourcesGuardedData.h>
#import <AppPredictionInternal/ATXPredictionContextBuilder.h>
#import <AppPredictionInternal/ATXCoreDuetLogger.h>
#import <AppPredictionInternal/ATXNotificationsPBGrade.h>
#import <AppPredictionInternal/ATXClientModelCacheFileHandler.h>
#import <AppPredictionInternal/ATXPBBlendingSessionClientModelSuggestion.h>
#import <AppPredictionInternal/AWDProactiveAppPredictionSession.h>
#import <AppPredictionInternal/ATXClientModelNotificationManager.h>
#import <AppPredictionInternal/ATXBiomeStreamHomeScreenFeedbackHandler.h>
#import <AppPredictionInternal/ATXBiomeStreamSpotlightFeedbackHandler.h>
#import <AppPredictionInternal/ATXBiomeStreamFeedbackHandlers.h>
#import <AppPredictionInternal/ATXPBPredictionDeviceStateContext.h>
#import <AppPredictionInternal/ATXPredictionAmbientLightContext.h>
#import <AppPredictionInternal/ATXDisplayCacheLockscreenFilter.h>
#import <AppPredictionInternal/ATXSuggestionDeduplicator.h>
#import <AppPredictionInternal/ATXSingleSuggestionSession.h>
#import <AppPredictionInternal/ATXMinimalActionParameters.h>
#import <AppPredictionInternal/ATXGamePlayKitDecisionNode.h>
#import <AppPredictionInternal/ATXGamePlayKitDecisionTree.h>
#import <AppPredictionInternal/ATXGamePlayKitRandomSource.h>
#import <AppPredictionInternal/ATXGamePlayKitRandomDistribution.h>
#import <AppPredictionInternal/ATXGamePlayKitARC4RandomSource.h>
#import <AppPredictionInternal/ATXGamePlayKitSystemArc4RandomSource.h>
#import <AppPredictionInternal/ATXWifiStateMonitor.h>
#import <AppPredictionInternal/ATXDeviceStateMonitor.h>
#import <AppPredictionInternal/ATXBiomePrivacyPruner.h>
#import <AppPredictionInternal/ATXMPBCacheAgeAtEngagementTracker.h>
#import <AppPredictionInternal/ATXMinimalSlotResolutionParameters.h>
#import <AppPredictionInternal/ATXNotificationsPBResponse.h>
#import <AppPredictionInternal/ATXCorrelationMatrixGuardedData.h>
#import <AppPredictionInternal/ATXLocationToLaunchCorrelation.h>
#import <AppPredictionInternal/ATXCDNDownloaderTriggerManager.h>
#import <AppPredictionInternal/ATXBluetoothDisconnectedAnchor.h>
#import <AppPredictionInternal/AWDProactiveActionData.h>
#import <AppPredictionInternal/ATXAnchorModelTrainingResult.h>
#import <AppPredictionInternal/ATXStackRotationSession.h>
#import <AppPredictionInternal/ATXTimelineAbuseControlConfig.h>
#import <AppPredictionInternal/ATXAnchorModelPredictionForwarder.h>
#import <AppPredictionInternal/ATXFakeAnchorModelPredictionForwarder.h>
#import <AppPredictionInternal/ATXAnchorModelPrediction.h>
#import <AppPredictionInternal/ATXUpdatePredictionsReasons.h>
#import <AppPredictionInternal/ATXChargerPluggedInDuetDataProvider.h>
#import <AppPredictionInternal/ATXSlotResolution.h>
#import <AppPredictionInternal/_ATXAppHistoricalAverageDose.h>
#import <AppPredictionInternal/_ATXAppDailyDose.h>
#import <AppPredictionInternal/ATXTimelineRelevancePBTimelineRelevanceSuggestion.h>
#import <AppPredictionInternal/ATXAWDUtils.h>
#import <AppPredictionInternal/ATXPBBlendingModelUICacheUpdate.h>
#import <AppPredictionInternal/ATXInternalOffloadAppsNotification.h>
#import <AppPredictionInternal/ATXHomeScreenSuggestionSender.h>
#import <AppPredictionInternal/ATXPredictionJSONScoreLogger.h>
#import <AppPredictionInternal/ATXGuardedActionPredictionContainerData.h>
#import <AppPredictionInternal/ATXActionPredictionContainer.h>
#import <AppPredictionInternal/ATXMPBAnchorModelEngagementTracker.h>
#import <AppPredictionInternal/ATXBehavioralPredictionsFeatureCacheGuardedData.h>
#import <AppPredictionInternal/ATXBehavioralPredictionsFeatureCache.h>
#import <AppPredictionInternal/ATXBiomeStreamFeedbackHandler.h>
#import <AppPredictionInternal/ATXPBBlendingSessionDeviceContext.h>
#import <AppPredictionInternal/ATXNotificationsPBSetting.h>
#import <AppPredictionInternal/ATXInformationRanker.h>
#import <AppPredictionInternal/ATXInformationProbabilisticRanker.h>
#import <AppPredictionInternal/ATXNudgeRegistrar.h>
#import <AppPredictionInternal/ATXAnchorModelPBLaunchHistoryMetadata.h>
#import <AppPredictionInternal/ATXStaticSuggestionsManager.h>
#import <AppPredictionInternal/ATXCloudKitClient.h>
#import <AppPredictionInternal/ATXMPBBlendingWidgetRotationEngagementTracker.h>
#import <AppPredictionInternal/ATXInternalActionPredictionUpdateNotification.h>
#import <AppPredictionInternal/ATXAnchorModelDataAnonymizer.h>
#import <AppPredictionInternal/ATXGlobalSmartSuppression.h>
#import <AppPredictionInternal/ATXHeuristicActionProducer.h>
#import <AppPredictionInternal/ATXUpdatePredictionsSources.h>
#import <AppPredictionInternal/ATXTimelineRelevancePBTimelineRelevanceAbuseControlOutcome.h>
#import <AppPredictionInternal/ATXHomeScreenLogSystemEventRotationSessionEngagementKeyTracker.h>
#import <AppPredictionInternal/ATXHomeScreenLogSystemEventDictionaries.h>
#import <AppPredictionInternal/_ATXAppDailyDoseCurrentStore.h>
#import <AppPredictionInternal/_ATXAppLaunchHistogramManager.h>
#import <AppPredictionInternal/ATXInformationFeatureWeights.h>
#import <AppPredictionInternal/ATXAppClipUsageDuetContextUpdateListener.h>
#import <AppPredictionInternal/ATXNowPlayingDuetDataProvider.h>
#import <AppPredictionInternal/ATXAppOrClipLaunch.h>
#import <AppPredictionInternal/ATXLaunchAndLocationHarvester.h>
#import <AppPredictionInternal/ATXMagicalMomentsPredictionScorer.h>
#import <AppPredictionInternal/ATXUtils.h>
#import <AppPredictionInternal/ATXClientModelCacheManagerGuardedData.h>
#import <AppPredictionInternal/ATXClientModelCacheManager.h>
#import <AppPredictionInternal/ATXCarPlayDuetDataProvider.h>
#import <AppPredictionInternal/ATXNotificationsDatabase.h>
#import <AppPredictionInternal/ATXAppLaunchLogger.h>
#import <AppPredictionInternal/ATXDefaultHomeScreenItemUpdater.h>
#import <AppPredictionInternal/ATXScreenLogUnlockSessionContext.h>
#import <AppPredictionInternal/ATXFeedbackSessionClientModelResult.h>
#import <AppPredictionInternal/ATXNotificationsPBLogWrapper.h>
#import <AppPredictionInternal/ATXGuardedHistData.h>
#import <AppPredictionInternal/_ATXAppLaunchHistogram.h>
#import <AppPredictionInternal/_ATXAppLaunchHistogramWithPersistentBackup.h>
#import <AppPredictionInternal/ATXAudioConnectedMMExpert.h>
#import <AppPredictionInternal/ATXCorrelatedEventsDateBuffer.h>
#import <AppPredictionInternal/ATXDirichletDistribution.h>
#import <AppPredictionInternal/ATXExpiredDataProvider.h>
#import <AppPredictionInternal/ATXExpiredData.h>
#import <AppPredictionInternal/_ATXAppLaunchSequenceAWDTracker.h>
#import <AppPredictionInternal/ATXAnchorModelHyperParameters.h>
#import <AppPredictionInternal/ATXMPBBlendingClientModelEngagementTracker.h>
#import <AppPredictionInternal/_ATXAppLaunchLocationGuardedData.h>
#import <AppPredictionInternal/_ATXAppLaunchLocation.h>
#import <AppPredictionInternal/ATXProtectedNowPlayingObjects.h>
#import <AppPredictionInternal/ATXMagicalMomentsNowPlayingUpdateMonitor.h>
#import <AppPredictionInternal/ATXScoreInterpreterCoreMLModelGuardedData.h>
#import <AppPredictionInternal/_ATXScoreInterpreterCoreMLModelFeature.h>
#import <AppPredictionInternal/_ATXScoreInterpreterCoreMLModel.h>
#import <AppPredictionInternal/ATXBlendingModelUICacheUpdate.h>
#import <AppPredictionInternal/ATXHomeScreenLogSystemChangeDictionary.h>
#import <AppPredictionInternal/_ATXAppLaunchGuardedHistory.h>
#import <AppPredictionInternal/_ATXAppLaunchGuardedCDContext.h>
#import <AppPredictionInternal/_ATXAppLaunchMonitor.h>
#import <AppPredictionInternal/ATXBlendingLayerSessionLogger.h>
#import <AppPredictionInternal/ATXSlotSet.h>
#import <AppPredictionInternal/ATXPBPredictionUserContext.h>
#import <AppPredictionInternal/_ATXNeuralNetwork.h>
#import <AppPredictionInternal/_ATXNeuralNetworkBuilder.h>
#import <AppPredictionInternal/ATXAppPredictorFeedback.h>
#import <AppPredictionInternal/ATXGuardedAppBlacklist.h>
#import <AppPredictionInternal/ATXAppPredictionBlacklist.h>
#import <AppPredictionInternal/ATXFeaturizedInfoSuggestion.h>
#import <AppPredictionInternal/ATXScoredInfoSuggestion.h>
#import <AppPredictionInternal/ATXModeScoreUpdater.h>
#import <AppPredictionInternal/ATXCommutePredictor.h>
#import <AppPredictionInternal/ATXPredictionDeviceStateContext.h>
#import <AppPredictionInternal/ATXBundleIdFilter.h>
#import <AppPredictionInternal/ATXActionCacheReader.h>
#import <AppPredictionInternal/ATXAppIntentMonitor.h>
#import <AppPredictionInternal/ATXNotificationsPBRecord.h>
#import <AppPredictionInternal/ATXPBPredictionLocationMotionContext.h>
#import <AppPredictionInternal/ATXIntentBundleIdFilter.h>
#import <AppPredictionInternal/ATXDisplayCacheIntermediateFormat.h>
#import <AppPredictionInternal/ATXMPBBlendingClientModelEngagementUICacheAgeTracker.h>
#import <AppPredictionInternal/ATXNotificationRecorder.h>
#import <AppPredictionInternal/ATXScreenRepresentation.h>
#import <AppPredictionInternal/ATXClientModelCacheUpdate.h>
#import <AppPredictionInternal/ATXInternalAppRegistrationNotification.h>
#import <AppPredictionInternal/ATXBiomeStreamCacheUpdateContext.h>
#import <AppPredictionInternal/ATXDigitalHealthBlacklistGuardedData.h>
#import <AppPredictionInternal/ATXDigitalHealthBlacklist.h>
#import <AppPredictionInternal/ATXIntentMetadataCacheKey.h>
#import <AppPredictionInternal/ATXUserMetricsPBActionPredictionsMetricsLogEntry.h>
#import <AppPredictionInternal/_ATXNopLocationDelegate.h>
#import <AppPredictionInternal/_ATXDataStore.h>
#import <AppPredictionInternal/ATXAnchorModelAppPredictionPostProcessor.h>
#import <AppPredictionInternal/ATXCloudStorageSettingsListener.h>
#import <AppPredictionInternal/ATXNotificationsSettingsLogger.h>
#import <AppPredictionInternal/ATXPartialIntentFeedbackManager.h>
#import <AppPredictionInternal/ATXInformationFeatureSetBuilder.h>
#import <AppPredictionInternal/ATXTimelineRelevanceFilter.h>
#import <AppPredictionInternal/ATXMagicalMomentsPBMMShownTracker.h>
#import <AppPredictionInternal/ATXClientModelSuggestionRouter.h>
#import <AppPredictionInternal/ATXHomeScreenLogUnlockSessionManager.h>
#import <AppPredictionInternal/_ATXDataStoreMigrations.h>
#import <AppPredictionInternal/ATXTimelineRelevancePBTimelineRelevanceContainer.h>
#import <AppPredictionInternal/ATXDailyRoutinesPersonalizationManager.h>
#import <AppPredictionInternal/ATXActionCacheBuilder.h>
#import <AppPredictionInternal/ATXChargerPluggedInDuetEvent.h>
#import <AppPredictionInternal/_ATXIconLocation.h>
#import <AppPredictionInternal/_ATXAppIconState.h>
#import <AppPredictionInternal/ATXNotificationsPBAggregateData.h>
#import <AppPredictionInternal/ATXAppClipSettingsUpdateSource.h>
#import <AppPredictionInternal/ATXStrictContextMatchAnchorModelCandidateClassifier.h>
#import <AppPredictionInternal/ATXStackState.h>
#import <AppPredictionInternal/ATXStackStateTrackerInternalState.h>
#import <AppPredictionInternal/ATXStackStateTracker.h>
#import <AppPredictionInternal/ATXPredictionContext.h>
#import <AppPredictionInternal/ATXProtectedEventData.h>
#import <AppPredictionInternal/ATXProtectedCorrelatedEventsData.h>
#import <AppPredictionInternal/ATXCorrelatedEventsManager.h>
#import <AppPredictionInternal/ATXInformationFeaturizer.h>
#import <AppPredictionInternal/ATXNotificationsPBPeriodicLog.h>
#import <AppPredictionInternal/ATXLaunchAndLocationFilterer.h>
#import <AppPredictionInternal/ATXSuggestionPreprocessor.h>
#import <AppPredictionInternal/ATXAppLaunchDuetDataProvider.h>
#import <AppPredictionInternal/ATXNowPlayingDuetEvent.h>
#import <AppPredictionInternal/ATXGlobalAppScoresUtil.h>
#import <AppPredictionInternal/_ATXFeedback.h>
#import <AppPredictionInternal/ATXContextualActionCountCache.h>
#import <AppPredictionInternal/ATXApp2VecClustering.h>
#import <AppPredictionInternal/ATXActionFeedback.h>
#import <AppPredictionInternal/ATXBiomeSpotlightSessionProducer.h>
#import <AppPredictionInternal/ATXHistogramData.h>
#import <AppPredictionInternal/ATXHistogramTable.h>
#import <AppPredictionInternal/ATXHistogramBundleIdTable.h>
#import <AppPredictionInternal/_ATXObjectLogger.h>
#import <AppPredictionInternal/ATXAppIntentDuetDataProvider.h>
#import <AppPredictionInternal/_ATXAppLaunchSequenceManager.h>
#import <AppPredictionInternal/ATXActionPredictions.h>
#import <AppPredictionInternal/ATXTransitionPredictorCR.h>
#import <AppPredictionInternal/ATXPredictedTransition.h>
#import <AppPredictionInternal/ATXGamePlayKitDecisionTreeAnchorModelCandidateClassifier.h>
#import <AppPredictionInternal/_ATXDESRecord.h>
#import <AppPredictionInternal/ATXNotificationsRecorderPermanentStore.h>
#import <AppPredictionInternal/ATXGuardedActionBlacklist.h>
#import <AppPredictionInternal/ATXActionPredictionBlacklist.h>
#import <AppPredictionInternal/ATXExpiredDataRemover.h>
#import <AppPredictionInternal/ATXTimelineRelevancePBTimelineRelevanceRotation.h>
#import <AppPredictionInternal/_ATXBundleIdSet.h>
#import <AppPredictionInternal/ATXDuetCallbackGuardedData.h>
#import <AppPredictionInternal/ATXDuetGuardedRootOfAppData.h>
#import <AppPredictionInternal/_ATXDuetHelper.h>
#import <AppPredictionInternal/ATXInformationEngineGuardedData.h>
#import <AppPredictionInternal/ATXInformationEngine.h>
#import <AppPredictionInternal/ATXCarPlayDuetEvent.h>
#import <AppPredictionInternal/ATXMediaApplications.h>
#import <AppPredictionInternal/ATXMPBAppClipCaptureRateTracker.h>
#import <AppPredictionInternal/ATXLayoutSelector.h>
#import <AppPredictionInternal/ATXAnchorModelSamplingGroup.h>
#import <AppPredictionInternal/ATXBlendingLayerHyperParameters.h>
#import <AppPredictionInternal/ATXEnterLOIUpdateSource.h>
#import <AppPredictionInternal/ATXNotificationsContent.h>
#import <AppPredictionInternal/ATXNotificationsContentAnalyzer.h>
#import <AppPredictionInternal/ATXNotificationsPortraitAnalyzer.h>
#import <AppPredictionInternal/ATXNotificationsMatchScore.h>
#import <AppPredictionInternal/ATXLockscreenBlacklistData.h>
#import <AppPredictionInternal/ATXLockscreenBlacklist.h>
#import <AppPredictionInternal/ATXBlendingBiomeStreamLogger.h>
#import <AppPredictionInternal/ATXAppIntentDuetEvent.h>
#import <AppPredictionInternal/ATXGroupHistogramEntry.h>
#import <AppPredictionInternal/ATXGroupHistogram.h>
#import <AppPredictionInternal/ATXCarPlayDisconnectedAnchor.h>
#import <AppPredictionInternal/ATXAnchorModelPBAnchorMetadata.h>
#import <AppPredictionInternal/ATXAnchorModelPhase1TrainingResult.h>
#import <AppPredictionInternal/ATXAnchorModelPhase1Trainer.h>
#import <AppPredictionInternal/ATXFakeAnchorModelPhase1Trainer.h>
#import <AppPredictionInternal/ATXSuggestionReceiverPendingRefreshTracker.h>
#import <AppPredictionInternal/ATXClientModelSuggestionReceiver.h>
#import <AppPredictionInternal/ATXEvent.h>
#import <AppPredictionInternal/ATXPBBlendingSessionERMEvent.h>
#import <AppPredictionInternal/ATXScreenLogUnlockSession.h>
#import <AppPredictionInternal/_ATXActionMetaData.h>
#import <AppPredictionInternal/ATXInternalAppsInstallStartNotification.h>
#import <AppPredictionInternal/ATXAppClipUsageDuetEvent.h>
#import <AppPredictionInternal/ATXMagicalMomentsStatistics.h>
#import <AppPredictionInternal/AWDProactiveAppPredictionAppActionSequence.h>
#import <AppPredictionInternal/ATXHomeScreenLogWidgetAddSheetDictionaries.h>
#import <AppPredictionInternal/ATXPeriodicLogger.h>
#import <AppPredictionInternal/ATXNotificationsPBContext.h>
#import <AppPredictionInternal/_ATXAggregateLogger.h>
#import <AppPredictionInternal/ATXMagicalMomentsPBMMEngagedTracker.h>
#import <AppPredictionInternal/ATXBackgroundSaverGuardedData.h>
#import <AppPredictionInternal/ATXBackgroundSaver.h>
#import <AppPredictionInternal/ATXPBBlendingSessionClientModelUpdate.h>
#import <AppPredictionInternal/ATXHeroAppManager.h>
#import <AppPredictionInternal/AWDProactiveAppPredictionActionTimeEstimate.h>
#import <AppPredictionInternal/_ATXAppInfoManager.h>
#import <AppPredictionInternal/ATXLaunchServicesHelper.h>
#import <AppPredictionInternal/ATXAnchorModelPBActionUUIDMetadata.h>
#import <AppPredictionInternal/ATXLockscreenTracker.h>
#import <AppPredictionInternal/ATXIntentMetadataCache.h>
#import <AppPredictionInternal/ATXBoostObject.h>
#import <AppPredictionInternal/ATXActionLOIBoost.h>
#import <AppPredictionInternal/ATXNotificationsPBGradedRecord.h>
#import <AppPredictionInternal/ATXBiomePredictionContextStream.h>
#import <AppPredictionInternal/ATXStackRotationSessionManager.h>
#import <AppPredictionInternal/ATXBBNotificationManager.h>
#import <AppPredictionInternal/ATXAppDirectoryLogger.h>
#import <AppPredictionInternal/ATXActionPredictionServer.h>
#import <AppPredictionInternal/ATXHeroAppPredictionsServer.h>
#import <AppPredictionInternal/ATXMPBBlendingSessionEngagementTracker.h>
#import <AppPredictionInternal/ATXAnchorModelPBAnchorModelLogEntry.h>
#import <AppPredictionInternal/ATXFeedbackSessionRouter.h>
#import <AppPredictionInternal/ATXCarPlayConnectedMMExpert.h>
#import <AppPredictionInternal/ATXSuggestionReranker.h>
#import <AppPredictionInternal/ATXUserMetricsPBExperiment.h>
#import <AppPredictionInternal/_ATXAppLaunch.h>
#import <AppPredictionInternal/ATXHomeScreenLogWidgetSetupDictionaries.h>
#import <AppPredictionInternal/_ATXRecipeEvaluation.h>
#import <AppPredictionInternal/ATXBluetoothDuetDataProvider.h>
#import <AppPredictionInternal/ATXIdleTimeEndAnchor.h>
#import <AppPredictionInternal/ATXPredictionTimeContext.h>
#import <AppPredictionInternal/ATXDuetKnowledgeStoreManager.h>
#import <AppPredictionInternal/ATXUpcomingMediaContainer.h>
#import <AppPredictionInternal/ATXMediaActionPrediction.h>
#import <AppPredictionInternal/ATXAppClipsManager.h>
#import <AppPredictionInternal/ATXActionValuation.h>
#import <AppPredictionInternal/ATXApp2VecMapping.h>
#import <AppPredictionInternal/ATXAnchorModelFeedbackMetadata.h>
#import <AppPredictionInternal/ATXAppDirectoryServer.h>
#import <AppPredictionInternal/ATXMPBAppClipSessionEngagementTracker.h>
#import <AppPredictionInternal/ATXActionPredictionsProcessor.h>
#import <AppPredictionInternal/ATXSlotResolutionParameters.h>
#import <AppPredictionInternal/ATXMPBDonationRatioTracker.h>
#import <AppPredictionInternal/ATXBlendingLayer.h>
#import <AppPredictionInternal/ATXAnchorModelIncompleteInferenceEvent.h>
#import <AppPredictionInternal/ATXAnchorModelInferenceTracker.h>
#import <AppPredictionInternal/ATXInternalActionPredictionUpdatedNotification.h>
#import <AppPredictionInternal/ATXBiomeBlendingModelStream.h>
#import <AppPredictionInternal/ATXAnchorModelTrainingDatasetBuilder.h>
#import <AppPredictionInternal/ATXHomeScreenWidgetFeedback.h>
#import <AppPredictionInternal/ATXPrivacyReset.h>
#import <AppPredictionInternal/_ATXInspectionServer.h>
#import <AppPredictionInternal/_ATXInspectionServerPredictionScoreLogger.h>
#import <AppPredictionInternal/_ATXInspectionServerActionPredictionScoreLogger.h>
#import <AppPredictionInternal/ATXManagedConfigurationUpdateSource.h>
#import <AppPredictionInternal/ATXAppPredictionFeedbackItem.h>
#import <AppPredictionInternal/ATXAmbientLightMonitor.h>
#import <AppPredictionInternal/ATXMPBAppClipSuppressionTracker.h>
#import <AppPredictionInternal/ATXPassAllBundleIdFilter.h>
#import <AppPredictionInternal/ATXMagicalMomentsUpdateMonitor.h>
#import <AppPredictionInternal/ATXMagicalMomentsSignals.h>
#import <AppPredictionInternal/ATXServer.h>
#import <AppPredictionInternal/ATXPBBlendingSessionBlendingUpdate.h>
#import <AppPredictionInternal/ATXScreenUnlockUpdateSource.h>
#import <AppPredictionInternal/ATXActionToWidgetConverter.h>
#import <AppPredictionInternal/ATXTimelineRelevancePBTimelineRelevanceScoreEntry.h>
#import <AppPredictionInternal/ATXContextStoreWriter.h>
#import <AppPredictionInternal/ATXAnchorModelPhase2Trainer.h>
#import <AppPredictionInternal/ATXFakeAnchorModelPhase2Trainer.h>
#import <AppPredictionInternal/ATXPBBiomeUIContext.h>
#import <AppPredictionInternal/_ATXAppPredictor.h>
#import <AppPredictionInternal/ATXLayoutGenerator.h>
#import <AppPredictionInternal/ATXPredictionUserContext.h>
#import <AppPredictionInternal/ATXAnchorModelPredictionOffsetFromAnchorOccurrence.h>
#import <AppPredictionInternal/ATXAnchorModelPhase3Trainer.h>
#import <AppPredictionInternal/ATXFakeAnchorModelPhase3Trainer.h>
#import <AppPredictionInternal/ATXDefaultHomeScreenItemProducer.h>
#import <AppPredictionInternal/ATXAudioDisconnectedAnchor.h>
#import <AppPredictionInternal/ATXChargerConnectedAnchor.h>
#import <AppPredictionInternal/ATXNotificationsRecord.h>
#import <AppPredictionInternal/ATXNotificationEvent.h>
#import <AppPredictionInternal/ATXSingleSuggestionSessionTrackingContext.h>
#import <AppPredictionInternal/ATXInfoSuggestionServer.h>
#import <AppPredictionInternal/ATXGlobalAppScorePredictor.h>
#import <AppPredictionInternal/ATXAppClipUsageDuetDataProvider.h>
#import <AppPredictionInternal/_ATXAppInfo.h>
#import <AppPredictionInternal/ATXScoreDict.h>
#import <AppPredictionInternal/ATXMPBAnchorModelPredictionsGeneratedTracker.h>
#import <AppPredictionInternal/ATXInfoSuggestionCriterionRegistry.h>
#import <AppPredictionInternal/ATXNotificationsLogger.h>
#import <AppPredictionInternal/ATXAppFeaturizer.h>
#import <AppPredictionInternal/ATXMagicalMomentsPBMMTriggeredTracker.h>
#import <AppPredictionInternal/_ATXGlobals.h>
#import <AppPredictionInternal/ATXAnchorModelDataStoreWrapper.h>
#import <AppPredictionInternal/ATXAnchorModelActionDetails.h>
#import <AppPredictionInternal/AWDProactiveAppPredictionAppLaunchSequence.h>
#import <AppPredictionInternal/ATXHomeScreenLogUploaderUtilities.h>
#import <AppPredictionInternal/ATXEnrollmentManager.h>
#import <AppPredictionInternal/ATXDuetDataProvider.h>
#import <AppPredictionInternal/ATXPredictionUpdateCountPBPredictionUpdateCountTracker.h>
#import <AppPredictionInternal/ATXMPBBlendingLayoutSelectionTracker.h>
#import <AppPredictionInternal/ATXRootOfAppData.h>
#import <AppPredictionInternal/ATXRootOfAppDataWithDictionary.h>
#import <AppPredictionInternal/ATXRootOfAppDataWithHashes.h>
#import <AppPredictionInternal/_ATXAppLaunchCategoricalHistogramCategoryCounts.h>
#import <AppPredictionInternal/_ATXAppLaunchCategoricalHistogram.h>
#import <AppPredictionInternal/_ATXAppLaunchCategoricalHistogramWithPersistentBackup.h>
#import <AppPredictionInternal/ATXBlendingBiomeStreamLoggerContext.h>
#import <AppPredictionInternal/ATXBlendingBiomeStreamLoggerContextWrapper.h>
#import <AppPredictionInternal/ATXPredictionContextDomain.h>
#import <AppPredictionInternal/ATXAppLaunchDuetEvent.h>
#import <AppPredictionInternal/ATXMagicalMomentsPrediction.h>
#import <AppPredictionInternal/ATXTimelineRelevanceMetricHarvester.h>
#import <AppPredictionInternal/ATXNotificationsLoggingServer.h>
#import <AppPredictionInternal/ATXBluetoothDuetEvent.h>
#import <AppPredictionInternal/ATXHeroAndClipConstants.h>
#import <AppPredictionInternal/ATXAvocadoDescriptorCache.h>
#import <AppPredictionInternal/ATXDuetEventLocationVisit.h>
#import <AppPredictionInternal/ATXMPBBlendingHomeScreenWidgetTopOfStackSelectionTracker.h>
#import <AppPredictionInternal/ATXActionNotificationServer.h>
#import <AppPredictionInternal/ATXMPBBlendingClientModelEngagementClientCacheAgeTracker.h>
#import <AppPredictionInternal/ATXNotificationsDedupeTracker.h>
#import <AppPredictionInternal/ATXScoreInterpreterCache.h>
#import <AppPredictionInternal/ATXAnchor.h>
#import <AppPredictionInternal/ATXBackupFileManager.h>
#import <AppPredictionInternal/ATXContextualActionManager.h>
#import <AppPredictionInternal/ATXActionResolution.h>
#import <AppPredictionInternal/_ATXInternalInstallNotification.h>
#import <AppPredictionInternal/ATXUpdatePredictionsLogger.h>
#import <AppPredictionInternal/ATXMPBDonationCountTracker.h>
#import <AppPredictionInternal/ATXStackSystemSuggestTrackingContext.h>
#import <AppPredictionInternal/ATXPBPredictionContext.h>
#import <AppPredictionInternal/ATXCarPlayConnectedAnchor.h>
#import <AppPredictionInternal/ATXMagicalMomentsAppPredictorFeedback.h>
#import <AppPredictionInternal/ATXScoreInterpreterFromAssetBuilder.h>
#import <AppPredictionInternal/ATXDuetEvent.h>
#import <AppPredictionInternal/ATXDegenerateStackAnalyzer.h>
#import <AppPredictionInternal/ATXActionResult.h>
#import <AppPredictionInternal/ATXAnchorModelPBActionKeyMetadata.h>
#import <AppPredictionInternal/ATXNotificationsPBUsageData.h>
#import <AppPredictionInternal/ATXNotificationsPBSettingLog.h>
#import <AppPredictionInternal/ATXAudioDisconnectedMMExpert.h>
#import <AppPredictionInternal/ATXPredictionDataHistograms.h>
#import <AppPredictionInternal/ATXHomeScreenLogWidgetEventDictionaries.h>
#import <AppPredictionInternal/ATXWebClipDataStore.h>
#import <AppPredictionInternal/ATXPBClientModelCacheUpdate.h>
#import <AppPredictionInternal/ATXBTDisconnectedMMExpert.h>
#import <AppPredictionInternal/ATXBiomeStreamValidator.h>
#import <AppPredictionInternal/ATXClientModelPredictionReasons.h>
#import <AppPredictionInternal/ATXBiomeClientModelStream.h>
#import <AppPredictionInternal/ATXHomeScreenWidgetBlacklistItem.h>
#import <AppPredictionInternal/_ATXRecentInstallCache.h>
#import <AppPredictionInternal/ATXPBBlendingSessionLog.h>
#import <AppPredictionInternal/ATXScreenLockStateDuetDataProvider.h>
#import <AppPredictionInternal/ATXAudioDuetDataProvider.h>
#import <AppPredictionInternal/ATXNotificationContextManager.h>
#import <AppPredictionInternal/ATXNotificationContext.h>
#import <AppPredictionInternal/ATXNotificationsPBDataUnit.h>
#import <AppPredictionInternal/_ATXInternalNotification.h>
#import <AppPredictionInternal/ATXAppLaunchMicroLocationGuardedData.h>
#import <AppPredictionInternal/ATXAppLaunchMicroLocation.h>
#import <AppPredictionInternal/ATXTimeUtil.h>
#import <AppPredictionInternal/ATXGenericFileBasedCache.h>
#import <AppPredictionInternal/ATXIdleTimeEndMMExpert.h>
#import <AppPredictionInternal/ATXMagicalMomentsBlendingUpdater.h>
#import <AppPredictionInternal/ATXMPBHeroAppEngagementTracker.h>
#import <AppPredictionInternal/ATXCorrelatedEvents.h>
#import <AppPredictionInternal/ATXModeAppUsageData.h>
#import <AppPredictionInternal/ATXModeAppUsageManager.h>
#import <AppPredictionInternal/ATXHomeScreenLogUploader.h>
#import <AppPredictionInternal/ATXBlendedLocalAndGlobalScores.h>
#import <AppPredictionInternal/ATXActionFeedbackWeights.h>
#import <AppPredictionInternal/ATXBTConnectedMMExpert.h>
#import <AppPredictionInternal/ATXCurrentABGroupDetails.h>
#import <AppPredictionInternal/ATXAnchorModelClassificationResult.h>
#import <AppPredictionInternal/ATXNaivePositiveAnchorModelCandidateClassifier.h>
#import <AppPredictionInternal/ATXAppClipsFeedback.h>
#import <AppPredictionInternal/ATXActionBlendingUpdater.h>
#import <AppPredictionInternal/AWDProactiveAppPredictionLaunchesAtLocation.h>
#import <AppPredictionInternal/ATXNotificationsActionPredictionRecord.h>
#import <AppPredictionInternal/ATXAnchorModelInferenceEngine.h>
#import <AppPredictionInternal/ATXMagicalMomentsAppPredictor.h>
#import <AppPredictionInternal/ATXUpdatePredictionsManager.h>
#import <AppPredictionInternal/ATXBiomeUIContext.h>
#import <AppPredictionInternal/ATXWidgetPrewarmer.h>
#import <AppPredictionInternal/ATXMagicalMomentsPBMMPredictedScoreTracker.h>
#import <AppPredictionInternal/ATXHeroAppPredictionsServerHelper.h>
#import <AppPredictionInternal/_ATXActionUtils.h>
#import <AppPredictionInternal/ATXPBBlendingSessionUICache.h>
#import <AppPredictionInternal/ATXAnchorModelPBActionMetadata.h>
#import <AppPredictionInternal/_ATXTimeHistogram.h>
#import <AppPredictionInternal/_ATXPredictionModelDetails.h>
#import <AppPredictionInternal/ATXActionUserMetricsLog.h>
#import <AppPredictionInternal/ATXTimelineRelevance.h>
#import <AppPredictionInternal/ATXBiomeHomeScreenSessionProducer.h>
#import <AppPredictionInternal/ATXAppBlendingUpdater.h>
#import <AppPredictionInternal/AWDProactiveAppPredictionIntentPredictionSession.h>
#import <AppPredictionInternal/ATXNotificationsSuggestionLRInput.h>
#import <AppPredictionInternal/ATXNotificationsSuggestionLROutput.h>
#import <AppPredictionInternal/ATXNotificationsSuggestionLR.h>
