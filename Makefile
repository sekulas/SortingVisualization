.PHONY: clean All

All:
	@echo "----------Building project:[ sortvizualization - Debug ]----------"
	@cd "sortvizualization" && "$(MAKE)" -f  "sortvizualization.mk"
clean:
	@echo "----------Cleaning project:[ sortvizualization - Debug ]----------"
	@cd "sortvizualization" && "$(MAKE)" -f  "sortvizualization.mk" clean
